C     FROM CTSDE.COM
C     SECTION CTSDES:
C     SPECIAL COMMON SCRTCH
      COMMON/SCRTCH/FILESZ,TDFREC,TDLREC,FREESP,TDDS,TOTDS,FDS,RECLG,
     1 TLBLSZ,TDSIZE,TSSTYP,DUMMY,DUMX
      INTEGER       FILESZ,TDFREC,TDLREC,FREESP,TDDS,TOTDS,FDS,RECLG,
     1 TLBLSZ,TDSIZE,TSSTYP,DUMMY,DUMX(4)
C
      INTEGER   ASVEC(2)
      REAL TSSDES(12)
      EQUIVALENCE (FILESZ,TSSDES(1)),(FILESZ,ASVEC(1))
C    END: BYTE 64
