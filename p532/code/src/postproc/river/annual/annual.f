************************************************************************
**  The purpose of this program is to prepare the load files for the  **
**    SAS routines for calibration                                    **
**    The Strategy                                                    **
**      1.  get segment and scenario                                  **
**      2.  get info from catalog file                                **
**      3.  read water and store it to find concentrations            **
**      4.  read and write concentrations for each variable           **
************************************************************************
      subroutine annual(rscen,rseg,wdmfil,Nexits)
      implicit none
      include 'Rannual.inc'

      integer asdate(ndate),aedate(ndate)           ! test dates for checking wdm

      integer wdmfil

      character*100 pfname

      integer i,np,nc,j,n,Rvar,hour,oldyear         ! indices

      integer maxWATR,nWATRdsns    ! number of DSNs that make up the total flow (multiple exits)
      parameter (maxWATR=4)
      integer WATRdsn(maxWATR)      ! dsns for flow variables

      real hval2(ndaymax*24)           ! second hvals for more than 2 exits (special for conowingo)
      real flowvals(ndaymax*24)        ! flow
      real loadvals(ndaymax*24)        ! load

      real dload    ! daily load accumulators

      character*4 Tdsn

      integer Nexits, idummy
      character*1 resflag,timestep

      logical found,foundall

*********** END DECLARATIONS
      call lencl(rscen,lenrscen)
      call lencl(rseg,lenrseg)

      print*,'Annual River Load ',rscen(:lenrscen),' ',rseg

      call WDMinfo(rscen,Nexits,nRvar,Rdsn,Rname)!POPULATE nRvar,Rdsn,Rname
      call loadinfo(rscen,lenrscen,nRvar,Rname,
     .              nloads,loadname,unit,ncons,con,confactor)     
                          ! POPULATE loading variables
      call readcontrol_time(rscen,lenrscen,sdate,edate)         ! get start and stop

      wdmfnam = outwdmdir//'river/'//rscen(:lenrscen)//
     .            '/stream/'//rseg(:lenrseg)//'.wdm'
      call wdbopnlong(wdmfil,wdmfnam,0,err)                           ! open main wdm read/write
      if (err .ne. 0) go to 991

      call wtdate(wdmfil,1,Rdsn(1),2,asdate,aedate,err)    ! tests the date

      if (err .ne. 0) go to 994

      nWATRdsns = 0
      do Rvar = 1,nRvar                     ! find which dsns corresponds to water
        if (Rname(Rvar).eq.'WATR') then 
          nWATRdsns = nWATRdsns + 1
          if (nWATRdsns.gt.maxWATR) go to 995
          WATRdsn(nWATRdsns) = Rdsn(Rvar)
        end if
      end do

      call checkflow(wdmfnam,wdmfil,0,maxWATR,nWATRdsns,WATRdsn,
     .                     sdate,edate)               ! make sure that flow exists

      call gethourdsn(wdmfil,sdate,edate,WATRdsn(1),nvals,flowvals)         ! get nvals from water variable
      do Rvar = 2,nWATRdsns         ! get other flowvals if more than 1 water variables
        call gethourdsn(wdmfil,sdate,edate,WATRdsn(Rvar),nvals,hval2)
        do i = 1,nvals
          flowvals(i) = flowvals(i) + hval2(i)
        end do
      end do

      do np = 1,nloads

        call ttyput(loadname(np))
        call ttyput(' ')

        do i = 1,nvals                                              ! initialize loadvals
          loadvals(i) = 0.
        end do
        foundall = .true.        ! 
        do nc = 1,ncons(np)     ! for each constituent
          found = .false.          ! found this constituent
          do Rvar = 1,nRvar     ! get the right dsn
            if (con(np,nc).eq.Rname(Rvar)) then
              found = .true.
              dsn = Rdsn(Rvar)
              call gethourdsn(wdmfil,sdate,edate,dsn,nvals,hval)  
              do i = 1,nvals                                
                if (hval(i).gt.0.)
     .            loadvals(i) = loadvals(i) + hval(i)*confactor(np,nc)
              end do
            end if
          end do
          if (.not.found) foundall = .false.
        end do


*****************load
        if (foundall) then
          pfname = outdir//'river/annual/'//
     .             rscen(:lenrscen)//'/'//rseg(:lenrseg)//'_'//
     .             loadname(np)//'_year.prn'
          open (pltfil,file = pfname, status = 'unknown',iostat = err)
          if (err.ne.0) goto 992
 
          write(pltfil,'(a13,a4)',err=951)'CON   YEAR   ',unit(np)
      
          do i = 1,6
            asdate(i) = sdate(i)
          end do

          hour = 0
          dload = 0.
          oldyear = sdate(1)
          do i = 1,nvals
            hour = hour + 1
            dload = dload + loadvals(i)
            if (hour.eq.24) then
              hour = 0
              call tomorrow(asdate(1),asdate(2),asdate(3))
            end if
            if (asdate(1).ne.oldyear) then
              write(pltfil,1234,err=951) loadname(np),oldyear,dload
              dload = 0.
              oldyear = asdate(1)
            end if
          end do
C          write(pltfil,1234) loadname(np),asdate(1),dload

          close (pltfil)

        end if  ! end if found all constituents

      end do            ! end loop over all loads in 'rchres_out_to_daily' file
            
      print*,' '

      return

1234  format(a4,i6,e14.5)

************************ error reporting
951   report(1) = 'error writing to file'
      report(2) = fnam
      report(3) = 'possible permission problem'
      go to 999

991   report(1) = 'Problem with opening wdm for river segment '//rseg
      report(2) = '  Error =    '
      write(report(2)(11:13),'(i3)') err
      report(3) = ' '
      go to 999

992   report(1) = 'Problem opening load files for segment '//rseg
      report(2) = pfname
      report(3) = '  Error =    '
      write(report(3)(11:13),'(i3)') err
      go to 999

994   report(1) = 'Problem getting dates from open wdm '
      report(2) = wdmfnam
      report(3) = '  Error = '
      write(report(3)(11:13),'(i3)') err
      go to 999

995   report(1) = 'too many variables names WATR in catalog file'
      report(2) = 'increase maxWATR variable in'
      report(3) = './pp/postproc/src/river/*/main.f'
      go to 999

996   report(1) = ' Could not close current wdm'
      report(2) = '  for segment '//rseg(:lenrseg)
      report(3) = wdmfnam
      go to 999

999   call stopreport(report)

      end

