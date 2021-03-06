C     from CRHPH.INC   
C     RCHRES module common
C
C     + + + PARAMETERS + + +
      INCLUDE 'pmxexi.inc'
C
C            PHCARB section
      COMMON/SCRTCH/HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ,PFLAG,DUMY,PIVL,PYREND,
     $              RCHPFG,UUNITS,IUNITS,OUNITS,PUNIT,MESSU,MSGFL,
     $              RCHNO,RCHID,DELT,DELT60,DELTS,NDAY,NDAYS,LKFG,
     $              NEXITS,HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,YR,
     $              MON,DAY,HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,
     $              SPAKND,SPIVL,SPOPNO,DUMGEN,DUM1,VOL,VOLS,DUM2,
     $              VOLFP,DUM3,SROVOL,EROVOL,SOVOL,EOVOL,DUM4,NCONS,
     $              DUM5,CON,DUM6,CNFP,DUM7,CFPRES,DUM8,TW,DUM9,TWFP,
     $              DUM10,BENRFG,DUM11,SCRFAC,DEPCOR,AVDEPE,DUM12,DOX,
     $              DUM13,DOFP,DUM14,KOREA,DUM15,ANAER,DUM16,DECCO2,
     $              DUM17,DECFG,DUM18,PHYCO2,BALCO2,ZCO2,DUM19,PHIF,
     $              PHIFX,PHCNT,ALKCON,CFCINV,BRCO2,PHECNT,TIC,CO2,PH,
     $              PHSTX,BENCO2,PHCF1,PHCF1X,PHCF2,PHCF2X,DUMRCH
      INTEGER       HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ(2),PFLAG(11),DUMY(1),PIVL,
     $              PYREND,RCHPFG,UUNITS,IUNITS,OUNITS,PUNIT(2),MESSU,
     $              MSGFL,RCHNO,RCHID(5),NDAY(12),NDAYS,LKFG,NEXITS,
     $              HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,YR,MON,DAY,
     $              HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,SPAKND,SPIVL,
     $              SPOPNO,DUMGEN(15),VOLFP,NCONS,CNFP(10),TWFP,
     $              BENRFG,DOFP,DECFG,PHIFX(2),PHCNT,ALKCON,PHECNT(2),
     $              PHSTX(3),PHCF1X(2),PHCF2X(MXEXIT,2)
      REAL          DELT,DELT60,DELTS,SROVOL,EROVOL,SOVOL(MXEXIT),
     $              EOVOL(MXEXIT),CFPRES,TW,SCRFAC,DEPCOR,AVDEPE,DOX,
     $              KOREA,ANAER,DECCO2,PHYCO2,BALCO2,ZCO2,PHIF(2,5),
     $              CFCINV,BRCO2(2),TIC,CO2,PH,BENCO2,PHCF1(2,5),
     $              PHCF2(MXEXIT,2,5)
      DOUBLE PRECISION  VOL,VOLS,CON(10)
      INTEGER       DUM1(2755),DUM2(821),DUM3(5375),DUM4(80),
     $              DUM5(370),DUM6(100),DUM7(529),DUM8(230),DUM9,
     $              DUM10(2226),DUM11(4),DUM12(31),DUM13(12),
     $              DUM14(14),DUM15(295),DUM16(618),DUM17(180),
     $              DUM18(170),DUM19(191),DUMRCH(3743)
C
      EQUIVALENCE   (ASVEC,HYDRFG),(UNIT,UUNITS),(TIMFG,HRFG),
     $              (DATIM,YR),(OXST,DOX),(OXSTX,DOFP),
     $              (ITIC,PHIF(1,1)),(ICO2,PHIF(2,1)),
     $              (IICFP,PHIFX(1)),(ICDFP,PHIFX(2)),(PHPM1,PHCNT),
     $              (PHPM2,CFCINV),(PHST,TIC),(ICFP,PHSTX(1)),
     $              (CDFP,PHSTX(2)),(PHFP,PHSTX(3)),
     $              (ROTIC,PHCF1(1,1)),(ROCO2,PHCF1(2,1)),
     $              (ROICFP,PHCF1X(1)),(ROCDFP,PHCF1X(2)),
     $              (OTIC,PHCF2(1,1,1)),(OCO2,PHCF2(1,2,1)),
     $              (OICFP,PHCF2X(1,1)),(OCDFP,PHCF2X(1,2))
      INTEGER       ASVEC(11),UNIT(5),TIMFG(6),DATIM(5),OXSTX(2),
     $              IICFP,ICDFP,PHPM1(2),ICFP,CDFP,PHFP,ROICFP,ROCDFP,
     $              OICFP(MXEXIT),OCDFP(MXEXIT)
      REAL          OXST(2),ITIC,ICO2,PHPM2(3),PHST(3),ROTIC,ROCO2,
     $              OTIC(MXEXIT),OCO2(MXEXIT)
C     end byte:  72000 word:18000
