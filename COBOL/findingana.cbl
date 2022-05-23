       IDENTIFICATION DIVISION.
       PROGRAM-ID. findingana.
       DATA DIVISION.
           WORKING-STORAGE SECTION.
           01 INP  PIC X(1000).
           01 I    PIC 9(4) VALUE 0.
           01 FOUND PIC 9 VALUE 0.
       PROCEDURE DIVISION.
           MAIN-PROCEDURE.
               ACCEPT INP.
               Perform LOOP varying I from 0001 by 0001
                   UNTIL I > 1000.
               STOP RUN.

           LOOP.
               if FOUND >= 1 or INP(I:1) = 'a'
                   set found to 1
                   DISPLAY INP(I:1) WITH NO ADVANCING.
