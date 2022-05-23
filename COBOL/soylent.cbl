       IDENTIFICATION DIVISION.
       PROGRAM-ID. soylent.

       DATA DIVISION.
           WORKING-STORAGE SECTION.
           01 TRIALS PIC 9999.
           01 DRINKS PIC 99999.
           01 REM   PIC 99999.
           01 FORMATTED-INTEGER PIC Z(2).

       PROCEDURE DIVISION.
           ACCEPT TRIALS.

           PERFORM LOOP VARYING TRIALS FROM TRIALS BY -1
               UNTIL TRIALS = 0.

           STOP RUN.

           LOOP.
               ACCEPT DRINKS.
               DIVIDE DRINKS BY 400 GIVING DRINKS REMAINDER REM.
               IF REM > 0
                   ADD 1 to DRINKS.
               if DRINKS = 0
                   DISPLAY 0
               ELSE
                   MOVE DRINKS TO FORMATTED-INTEGER
                   DISPLAY FORMATTED-INTEGER.
