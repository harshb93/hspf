C     from CPLTR.INC   
C     PERLND module common
C            TRACER section
      COMMON/SCRTCH/AIRTFG,SNOWFG,PWATFG,SEDFG,PSTFG,PWGFG,PQALFG,
     $              MSTLFG,PESTFG,NITRFG,PHOSFG,TRACFG,AGFG,PFLAG,
     $              PIVL,PYREND,PERPFG,UUNITS,IUNITS,OUNITS,PUNIT,
     $              MESSU,MSGFL,LSNO,LSID,DELT,DELT60,DELT5,NDAY,
     $              NDAYS,NBLKSI,NBLKS,HRFG,DAYFG,STFG,EDAYFG,EMONFG,
     $              EPYRFG,YR,MON,DAY,HR,MIN,IVL,IVL1,PIVLNO,NXTMON,
     $              SPAFP,SPAKND,SPIVL,SPOPNO,DUMGEN,DUM1,PRECFP,DUM2,
     $              SNIF,DUM3,MST,FRAC,MSTFP,FRACFP,MSTB,FRACB,MSTBFP,
     $              FRACBX,DUM4,AGGTFG,DUM5,TRAFFP,TRACFP,TRADFG,
     $              TRACID,TRAFXM,TRACNM,TRWCNT,STRSU,UTRSU,ITRSU,
     $              LTRSU,ATRSU,TOTTR,STRSFP,UTRSFP,ITRSFP,LTRSFP,
     $              ATRSFP,TRSUFP,STRSUB,UTRSUB,ITRSUB,TRCFX1,TRCFX2,
     $              POTRS,TRCFX3,TRCFX4,TSTRFP,SSTRFP,POTRFP,TRADDX,
     $              TRADWX,DUMPER
      INTEGER       AIRTFG,SNOWFG,PWATFG,SEDFG,PSTFG,PWGFG,PQALFG,
     $              MSTLFG,PESTFG,NITRFG,PHOSFG,TRACFG,AGFG,PFLAG(12),
     $              PIVL,PYREND,PERPFG,UUNITS,IUNITS,OUNITS,PUNIT(2),
     $              MESSU,MSGFL,LSNO,LSID(5),NDAY(12),NDAYS,NBLKS,
     $              HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,YR,MON,DAY,
     $              HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,SPAKND,SPIVL,
     $              SPOPNO,DUMGEN(15),PRECFP,MSTFP(5),FRACFP(8),
     $              MSTBFP(3,5),FRACBX(5,5),AGGTFG,TRAFFP(2),
     $              TRACFP(2),TRADFG(4),TRWCNT(1),STRSFP,UTRSFP,
     $              ITRSFP,LTRSFP,ATRSFP,TRSUFP,TSTRFP(5),SSTRFP(3),
     $              POTRFP,TRADDX(2),TRADWX(2)
      REAL          DELT,DELT60,DELT5,NBLKSI,SNIF(5),MST(5),FRAC(8),
     $              MSTB(3,5),FRACB(5,5),TRACID(5),TRAFXM(12,2),
     $              TRACNM(12,2),STRSU,UTRSU,ITRSU,LTRSU,ATRSU,
     $              TOTTR(5),STRSUB(5),UTRSUB(5),ITRSUB(5),
     $              TRCFX1(5,5),TRCFX2(3,5),POTRS,TRCFX3(2,5),
     $              TRCFX4(2,5)
      INTEGER       DUM1(3),DUM2(28),DUM3(2492),DUM4(384),DUM5(3397),
     $              DUMPER(11323)
C
      EQUIVALENCE   (ASVEC,AIRTFG),(PRTDAT,PFLAG),(UNIT,UUNITS),
     $              (TIMFG,HRFG),(DATIM,YR),(PREC,SNIF),(TRST1,STRSU),
     $              (TRSU,TOTTR(1)),(TSTRS,TRCFX1(1,1)),
     $              (SSTRS,TRCFX2(1,1)),(TRADDR,TRCFX3(1,1)),
     $              (TRADWT,TRCFX4(1,1))
      INTEGER       ASVEC(12),PRTDAT(14),UNIT(5),TIMFG(6),DATIM(5)
      REAL          PREC,TRST1(5),TRSU,TSTRS(5),SSTRS(5),TRADDR(2),
     $              TRADWT(2)
C     end byte:  72000 word:18000
