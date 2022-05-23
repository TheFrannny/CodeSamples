       IDENTIFICATION DIVISION.
       PROGRAM-ID. estimatingtheareaofacircle.
       DATA DIVISION.
           WORKING-STORAGE SECTION.
           01 INP PIC X(100).
           01 TRUECI PIC ZZZZZZZZZZ.ZZZZZZZZZZ.
           01 ESTIMA PIC ZZZZZZZZZZ.ZZZZZZZZZZ.
           01 RADIUS PIC 99999999999V99999999999 VALUE 1.
           01 MARKED PIC 99999999999V99999999999.
           01 CIRCLE PIC 99999999999V99999999999.

       PROCEDURE DIVISION.
           PERFORM LOOP UNTIL RADIUS = 0
           STOP RUN.

            LOOP.
                ACCEPT INP.
                UNSTRING INP
                   DELIMITED BY SPACE INTO RADIUS, MARKED, CIRCLE.
                IF RADIUS > 0
                    COMPUTE TRUECI = FUNCTION PI * RADIUS * RADIUS
                    COMPUTE ESTIMA = (CIRCLE / MARKED) * (RADIUS * 2)
                            * (RADIUS * 2)

                    DISPLAY TRUECI " " ESTIMA
                END-IF.
