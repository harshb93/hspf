C     from CRHHT.INC   
C     RCHRES module common
C
C     + + + PARAMETERS + + +
      INCLUDE 'pmxexi.inc'
C
C            HTRCH section
      COMMON/SCRTCH/HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ,PFLAG,DUMY,PIVL,PYREND,
     $              RCHPFG,UUNITS,IUNITS,OUNITS,PUNIT,MESSU,MSGFL,
     $              RCHNO,RCHID,DELT,DELT60,DELTS,NDAY,NDAYS,LKFG,
     $              NEXITS,HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,YR,
     $              MON,DAY,HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,
     $              SPAKND,SPIVL,SPOPNO,DUMGEN,DUM1,PREC,DUM2,PRECFP,
     $              DUM3,VOL,VOLS,DUM4,AVDEP,DUM5,VOLFP,DUM6,AVDFP,
     $              DUM7,SROVOL,EROVOL,SOVOL,EOVOL,DUM8,HTIF,SOLRAD,
     $              CLOUD,DEWTMP,GATMP,WIND,IHTFP,SOLFP,CCFP,DEWFP,
     $              GATFP,WDFP,BEDFLG,TGFLG,TSTOP,ELEV,ELDAT,CFSAEX,
     $              KATRAD,KCOND,KEVAP,LAPSE,CFPRES,MUDDEP,KMUD,KGRND,
     $              TGRNDM,DELH,TGRNDX,HTWCNT,TGRND,DELTT,TMUD,TMUDDT,
     $              HTST,TW,AIRTMP,TWFP,AIRTFP,HTCF2,ATHTFP,ROHTFP,
     $              HTCF3,OHTFP,HTCF4,HTCF4X,DUMRCH
      INTEGER       HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ(2),PFLAG(11),DUMY(1),PIVL,
     $              PYREND,RCHPFG,UUNITS,IUNITS,OUNITS,PUNIT(2),MESSU,
     $              MSGFL,RCHNO,RCHID(5),NDAY(12),NDAYS,LKFG,NEXITS,
     $              HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,YR,MON,DAY,
     $              HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,SPAKND,SPIVL,
     $              SPOPNO,DUMGEN(15),PRECFP,VOLFP,AVDFP,IHTFP,SOLFP,
     $              CCFP,DEWFP,GATFP,WDFP,BEDFLG,TGFLG,TSTOP,TGRNDX,
     $              HTWCNT,TWFP,AIRTFP,ATHTFP,ROHTFP,OHTFP(MXEXIT),
     $              HTCF4X(7)
      REAL          DELT,DELT60,DELTS,PREC,AVDEP,SROVOL,EROVOL,
     $              SOVOL(MXEXIT),EOVOL(MXEXIT),HTIF(5),SOLRAD,CLOUD,
     $              DEWTMP,GATMP,WIND,ELEV,ELDAT,CFSAEX,KATRAD,KCOND,
     $              KEVAP,LAPSE(24),CFPRES,MUDDEP,KMUD,KGRND,TGRNDM(12),
     $              DELH(100),TGRND,DELTT(100),TMUD,TMUDDT,TW,AIRTMP,
     $              HTCF2(2,5),HTCF3(MXEXIT,5),HTCF4(7,5)
      DOUBLE PRECISION  VOL,VOLS,HTST(5)
      INTEGER       DUM1(505),DUM2(102),DUM3(2146),DUM4(710),
     $              DUM5(110),DUM6(602),DUM7(4772),DUM8(1061),
     $              DUMRCH(7510)
C
      EQUIVALENCE   (ASVEC,HYDRFG),(UNIT,UUNITS),(TIMFG,HRFG),
     $              (DATIM,YR),(IHEAT,HTIF(1)),(HTPM,ELEV),
     $              (RHEAT,HTST(1)),(HTST2,TW),(HTEXCH,HTCF2(1,1)),
     $              (ROHEAT,HTCF2(2,1)),(OHEAT,HTCF3(1,1)),
     $              (QTOTAL,HTCF4(1,1)),(QSOLAR,HTCF4(2,1)),
     $              (QLONGW,HTCF4(3,1)),(QEVAP,HTCF4(4,1)),
     $              (QCON,HTCF4(5,1)),(QPREC,HTCF4(6,1)),
     $              (QBED,HTCF4(7,1))
      INTEGER       ASVEC(11),UNIT(5),TIMFG(6),DATIM(5)
      REAL          IHEAT,HTPM(6),HTST2(2),HTEXCH,ROHEAT,OHEAT(MXEXIT),
     $              QTOTAL,QSOLAR,QLONGW,QEVAP,QCON,QPREC,QBED
      DOUBLE PRECISION  RHEAT
C     end byte:  72000 word:18000
