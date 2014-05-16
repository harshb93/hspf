************************************************************************
***This program looks for the river segment in doubles.csv.           **
***If river segment is found, a new empty file called confluencefile  **
***is created.                                                        **
************************************************************************
      implicit none
      include '../inc/standard.inc'
      include '../inc/locations.inc'
      include '../inc/upstream.inc'
      
      character*4 uniqid  ! unique ID for the current river
      
      logical comment
**** end declarations section
      read*,rseg,rscen

      call lencl(rscen,lenrscen)
      uniqid = rseg(5:8)

      
      call readcontrol_Rgeoscen(rscen,lenrscen,
     O                          geoscen)
      call lencl(geoscen,lengeoscen)

      fnam=catdir//'geo/'//geoscen(:lengeoscen)//'/doubles.csv'
      open(dfile,file=fnam,status = 'old',iostat=err)
      if (err.ne.0) go to 991
            
      line = 'GO HOOS'
      do while (line(:3).ne.'end')
        read(dfile,1234,err=998,end=997) line
        call d2x(line,last)
        if (.not.comment(line)) then
          call findcomma(line,last)
          line = line(:last-1)
          call trims(line,last)

          if (line(5:8).eq.uniqid) then  
          
            open(dfile+1,file='confluencefile', status='new',iostat=err)
           
            if (err.ne.0) go to 992
            write (dfile+1,*,err=951) 'cp ',tree,
     .                        'config/blank_wdm/river.wdm '
     .                        //rseg(:8)//'_0003.wdm'
              
            close (dfile+1)
            
          end if
        end if
      end do

      close(dfile)

      return

***********    ERROR  SPACE        *************************************
951   report(1) = 'error writing to file'
      report(2) = fnam
      report(3) = 'possible permission problem'
      go to 999

991   report(1) = 'could not open file'
      report(2) =    fnam
      write(report(3),*) 'error = ',err
      go to 999

992   report(1) = 'problem opening confluenc file in current directory'
      report(2) = ' check doubles file for accuracy'
      report(3) = ' likely cause is a duplicate entry'
      go to 999

997   report(1) = 'End of file reached '
      report(2) =    fnam
      report(3) = '  without finding literal => end'
      go to 999

998   report(1) = 'Problem with reading file'
      report(2) =    fnam
      report(3) = ' near line '//line
      go to 999

999   call stopreport(report)

1234  format (a100)

      end

     
