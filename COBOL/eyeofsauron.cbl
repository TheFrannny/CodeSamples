       IDENTIFICATION DIVISION.
       PROGRAM-ID. eyeofsauron.
       DATA DIVISION.
       FILE SECTION.
           WORKING-STORAGE SECTION.
           01 INP PIC X(110).
           01 MARKED PIC 999.
           01 I   PIC 999.
           01 CNT PIC S9(10)V99.
           01 MID PIC 999.
       PROCEDURE DIVISION.
           ACCEPT INP
           PERFORM VARYING MARKED FROM 001 BY 001 UNTIL MARKED > 100
               IF INP(MARKED:1) = '(' or INP(MARKED:1) = ')'
                   ADD 1 To MID
               ELSE IF MID > 1 and INP(MARKED:1) = '|'
                   SUBTRACT 1 FROM CNT
               ELSE IF INP(MARKED:1) = '|'
                   ADD 1 To CNT
           END-PERFORM.

           IF CNT = 0
               DISPLAY "correct"
           ELSE DISPLAY "fix".
           STOP RUN.
