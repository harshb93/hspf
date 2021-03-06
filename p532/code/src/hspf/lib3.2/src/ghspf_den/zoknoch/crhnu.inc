C     from CRHNU.INC   
C     RCHRES module common
C
C     + + + PARAMETERS + + +
      INCLUDE 'pmxexi.inc'
C
C            NUTRX section
      COMMON/SCRTCH/HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ,PFLAG,DUMY,PIVL,PYREND,
     $              RCHPFG,UUNITS,IUNITS,OUNITS,PUNIT,MESSU,MSGFL,
     $              RCHNO,RCHID,DELT,DELT60,DELTS,NDAY,NDAYS,LKFG,
     $              NEXITS,HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,YR,
     $              MON,DAY,HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,
     $              SPAKND,SPIVL,SPOPNO,DUMGEN,DUM1,PREC,DUM2,PRECFP,
     $              DUM3,VOL,VOLS,DUM4,SAREA,DUM5,VOLFP,DUM6,SAFP,
     $              DUM7,SROVOL,EROVOL,SOVOL,EOVOL,DUM8,WIND,DUM9,
     $              WDFP,DUM10,TW,DUM11,TWFP,DUM12,RSED,SSED,DUM13,
     $              SSEDFP,DUM14,SDCF1,SDCF2,DUM15,SDCF3,DUM16,PHVAL,
     $              DUM17,PHVFP,DUM18,PHFLAG,DUM19,PHVALM,DUM20,
     $              BENRFG,DUM21,SCRFAC,DEPCOR,AVDEPE,DUM22,DOX,BOD,
     $              DUM23,KOREA,BODOX,DUM24,OXCF3,OXCF4,NUIF1,NUIF2,
     $              NUIF1X,NUIF2X,NUAFFP,NUACFP,NUADFG,TAMFG,NO2FG,
     $              PO4FG,AMVFG,DENFG,ADNHFG,ADPOFG,NUAFXM,NUACNM,
     $              CVBN,CVBO,CVBP,CVBPC,CVBPN,BPCNTC,CVOC,CVON,CVOP,
     $              BRTAM,BRPO4,ANAER,BNH4,BPO4,KTAM20,KNO220,TCNIT,
     $              KNO320,TCDEN,DENOXT,EXPNVG,EXPNVL,ADNHPM,ADPOPM
      COMMON/SCRTCH/NUECNT,NUWCNT,NO3,TAM,NO2,PO4,NH4,NH3,SNH4,SPO4,
     $              RNO3,RTAM,RNO2,RPO4,RNH4,RNH3,RSNH4,RSPO4,NUST,
     $              DNUSTX,SNH4X,SPO4X,DNUS2X,RSNH4X,RSPO4X,NUSTX,
     $              NUCF1,NUCF2,NUCF3,NUCF4,NUCF5,NUCF6,NUCF7,NUCF8,
     $              NUCF9,NUCF10,DECCO2,NUCF11,NUCF12,NUCF1X,NUCF2X,
     $              NUCF3X,NUCF4X,NUCF5X,NUCF6X,NUCF7X,NUCF8X,NUCF9X,
     $              NUC10X,NUADDX,NUADWX,DUM25,PH,DUMRCH
      INTEGER       HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ(2),PFLAG(11),DUMY(1),PIVL,
     $              PYREND,RCHPFG,UUNITS,IUNITS,OUNITS,PUNIT(2),MESSU,
     $              MSGFL,RCHNO,RCHID(5),NDAY(12),NDAYS,LKFG,NEXITS,
     $              HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,YR,MON,DAY,
     $              HR,MIN,IVL,IVL1,PIVLNO,NXTMON,SPAFP,SPAKND,SPIVL,
     $              SPOPNO,DUMGEN(15),PRECFP,VOLFP,SAFP,WDFP,TWFP,
     $              SSEDFP(4),PHVFP,PHFLAG,BENRFG,NUIF1X(4),
     $              NUIF2X(3,2),NUAFFP(3),NUACFP(3),NUADFG(6),TAMFG,
     $              NO2FG,PO4FG,AMVFG,DENFG,ADNHFG,ADPOFG,NUECNT(4),
     $              NUWCNT(1),DNUSTX(6),SNH4X(3),SPO4X(3),DNUS2X(6),
     $              RSNH4X(12),RSPO4X(12),NUSTX(4),NUCF1X(4),
     $              NUCF2X(4,2),NUCF3X(4,2),NUCF4X(6),NUCF5X(7),
     $              NUCF6X(1),NUCF7X(5),NUCF8X(4,2),NUCF9X(MXEXIT,4),
     $              NUC10X(MXEXIT,3,2),NUADDX(3),NUADWX(3)
      REAL          DELT,DELT60,DELTS,PREC,SAREA,SROVOL,EROVOL,
     $              SOVOL(MXEXIT),EOVOL(MXEXIT),WIND,TW,RSED(10),
     $              SSED(4),SDCF1(4,5),SDCF2(4,5),SDCF3(MXEXIT,4,5),
     $              PHVAL,PHVALM(12),SCRFAC,DEPCOR,AVDEPE,DOX,BOD,KOREA,
     $              BODOX,OXCF3(7,5),OXCF4(7,5),NUIF1(4,5),
     $              NUIF2(3,2,5),NUAFXM(12,3),NUACNM(12,3),CVBN,CVBO,
     $              CVBP,CVBPC,CVBPN,BPCNTC,CVOC,CVON,CVOP,BRTAM(2),
     $              BRPO4(2),ANAER,BNH4(3),BPO4(3),KTAM20,KNO220,
     $              TCNIT,KNO320,TCDEN,DENOXT,EXPNVG,EXPNVL,ADNHPM(3),
     $              ADPOPM(3),NO3,TAM,NO2,PO4,NH4,NH3,SNH4(3),SPO4(3),
     $              RNO3,RTAM,RNO2,RPO4,RNH4,RNH3,RSNH4(12),RSPO4(12),
     $              NUST(4,5),NUCF1(4,5),NUCF2(4,2,5),NUCF3(4,2,5),
     $              NUCF4(6,5),NUCF5(7,5),NUCF6(1,5),NUCF7(5,5),
     $              NUCF8(4,2,5),NUCF9(MXEXIT,4,5),NUCF10(MXEXIT,3,2,5),
     $              DECCO2,NUCF11(3,5),NUCF12(3,5),PH
      DOUBLE PRECISION  VOL,VOLS
      INTEGER       DUM1(505),DUM2(102),DUM3(2146),DUM4(713),
     $              DUM5(107),DUM6(605),DUM7(4769),DUM8(1070),DUM9(5),
     $              DUM10(264),DUM11,DUM12(169),DUM13(11),DUM14,
     $              DUM15(8),DUM16(80),DUM17(16),DUM18(12),DUM19(187),
     $              DUM20(1569),DUM21(4),DUM22(31),DUM23(26),
     $              DUM24(60),DUM25(433),DUMRCH(3819)
C
      EQUIVALENCE   (ASVEC,HYDRFG),(UNIT,UUNITS),(TIMFG,HRFG),
     $              (DATIM,YR),(DEPSCR,SDCF1(1,1)),(ROSED,SDCF2(1,1)),
     $              (OSED,SDCF3(1,1,1)),(OXST,DOX),
     $              (NITDOX,OXCF3(4,1)),(DENBOD,OXCF4(4,1)),
     $              (INO3,NUIF1(1,1)),(ITAM,NUIF1(2,1)),
     $              (INO2,NUIF1(3,1)),(IPO4,NUIF1(4,1)),
     $              (ISNH4,NUIF2(1,1,1)),(ISPO4,NUIF2(1,2,1)),
     $              (INO3FP,NUIF1X(1)),(ITAMFP,NUIF1X(2)),
     $              (INO2FP,NUIF1X(3)),(IPO4FP,NUIF1X(4)),
     $              (ISNHFP,NUIF2X(1,1)),(ISPOFP,NUIF2X(1,2))
      EQUIVALENCE   (NUPM1,TAMFG),(NUPM2,BRTAM(1)),(NUPM3,BNH4(1)),
     $              (NUPM4,KTAM20),(NUPM5,EXPNVG),(NUADPM,ADNHPM(1)),
     $              (DNUST,NO3),(DNUST2,RNO3),(RRNO3,NUST(1,1)),
     $              (RRTAM,NUST(2,1)),(RRNO2,NUST(3,1)),
     $              (RRPO4,NUST(4,1)),(RONO3,NUCF1(1,1)),
     $              (ROTAM,NUCF1(2,1)),(RONO2,NUCF1(3,1)),
     $              (ROPO4,NUCF1(4,1)),(ROSNH4,NUCF2(1,1,1)),
     $              (ROSPO4,NUCF2(1,2,1)),(DSNH4,NUCF3(1,1,1)),
     $              (DSPO4,NUCF3(1,2,1)),(NITNO3,NUCF4(1,1)),
     $              (DENNO3,NUCF4(2,1)),(BODNO3,NUCF4(3,1))
      EQUIVALENCE   (PHYNO3,NUCF4(4,1)),(ZOONO3,NUCF4(5,1)),
     $              (BALNO3,NUCF4(6,1)),(NITTAM,NUCF5(1,1)),
     $              (VOLNH3,NUCF5(2,1)),(BNRTAM,NUCF5(3,1)),
     $              (BODTAM,NUCF5(4,1)),(PHYTAM,NUCF5(5,1)),
     $              (ZOOTAM,NUCF5(6,1)),(BALTAM,NUCF5(7,1)),
     $              (NITNO2,NUCF6(1,1)),(BNRPO4,NUCF7(1,1)),
     $              (BODPO4,NUCF7(2,1)),(PHYPO4,NUCF7(3,1)),
     $              (ZOOPO4,NUCF7(4,1)),(BALPO4,NUCF7(5,1)),
     $              (ADNH4,NUCF8(1,1,1)),(ADPO4,NUCF8(1,2,1)),
     $              (ONO3,NUCF9(1,1,1)),(OTAM,NUCF9(1,2,1))
      EQUIVALENCE   (ONO2,NUCF9(1,3,1)),(OPO4,NUCF9(1,4,1)),
     $              (OSNH4,NUCF10(1,1,1,1)),(OSPO4,NUCF10(1,1,2,1)),
     $              (NUADDR,NUCF11(1,1)),(NUADWT,NUCF12(1,1))
      INTEGER       ASVEC(11),UNIT(5),TIMFG(6),DATIM(5),INO3FP,ITAMFP,
     $              INO2FP,IPO4FP,ISNHFP(3),ISPOFP(3),NUPM1(7)
      REAL          DEPSCR(4),ROSED(4),OSED(MXEXIT,4),OXST(2),NITDOX,
     $              DENBOD,INO3,ITAM,INO2,IPO4,ISNH4(3),ISPO4(3),
     $              NUPM2(5),NUPM3(6),NUPM4(6),NUPM5(2),NUADPM(6),
     $              DNUST(6),DNUST2(6),RRNO3,RRTAM,RRNO2,RRPO4,RONO3,
     $              ROTAM,RONO2,ROPO4,ROSNH4(4),ROSPO4(4),DSNH4(4),
     $              DSPO4(4),NITNO3,DENNO3,BODNO3,PHYNO3,ZOONO3,
     $              BALNO3,NITTAM,VOLNH3,BNRTAM,BODTAM,PHYTAM,ZOOTAM,
     $              BALTAM,NITNO2,BNRPO4,BODPO4,PHYPO4,ZOOPO4,BALPO4,
     $              ADNH4(4),ADPO4(4),ONO3(MXEXIT),OTAM(MXEXIT),
     $              ONO2(MXEXIT),OPO4(MXEXIT),OSNH4(MXEXIT,3),
     $              OSPO4(MXEXIT,3),NUADDR(3),NUADWT(3)
C     end byte:  72000 word:18000
