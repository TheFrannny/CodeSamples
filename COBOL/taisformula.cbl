       IDENTIFICATION DIVISION.
       PROGRAM-ID. estimatingtheareaofacircle.
       DATA DIVISION.
           WORKING-STORAGE SECTION.
           01 INP PIC X(100).
           01 TRIALS PIC 9(10).
           01 TOTAL PIC ZZZZZZZZZZ.ZZZZZZZZZZ.
           01 ADDITION PIC 99999999999V99999999999.
           01 PREVTIME PIC 99999999999V99999999999.
           01 PREVGLUC PIC 99999999999V99999999999.
           01 CURRTIME PIC 99999999999V99999999999.
           01 CURRGLUC PIC 99999999999V99999999999.

       PROCEDURE DIVISION.
           ACCEPT TRIALS.
           ACCEPT INP.
                UNSTRING INP
                   DELIMITED BY SPACE INTO PREVTIME, PREVGLUC.

           PERFORM LOOP VARYING TRIALS from TRIALS by -1
                           UNTIL TRIALS = 1
           COMPUTE TOTAL = ADDITION / 1000.
           DISPLAY TOTAL.
           STOP RUN.

            LOOP.
                ACCEPT INP.
                UNSTRING INP
                   DELIMITED BY SPACE INTO CURRTIME, CURRGLUC.
                COMPUTE ADDITION = ADDITION + ((PREVGLUC + CURRGLUC)/2)*
                                   (CURRTIME - PREVTIME).
                MOVE CURRTIME TO PREVTIME.
                MOVE CURRGLUC TO PREVGLUC.
