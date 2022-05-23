       IDENTIFICATION DIVISION.
       PROGRAM-ID. pyramids.

       DATA DIVISION.
           WORKING-STORAGE SECTION.
           01 BLOCKS PIC S999999999.
           01 HEIGHT PIC 999999 VALUE 0.
           01 WIDTH  PIC 999999.
           01 CALC   PIC 999999999.
           01 FORMATTED-INTEGER PIC Z(10).

       PROCEDURE DIVISION.
           ACCEPT BLOCKS.

           PERFORM LOOP VARYING WIDTH FROM 0001 BY 0002
               UNTIL BLOCKS <= 0.

           MOVE HEIGHT TO FORMATTED-INTEGER.
           DISPLAY FORMATTED-INTEGER.
           STOP RUN.

           LOOP.
               MOVE WIDTH to CALC.
               MULTIPLY CALC BY CALC.
               SUBTRACT CALC FROM BLOCKS.
               IF BLOCKS >= 0
                   ADD 1 To HEIGHT.
