       IDENTIFICATION DIVISION.
       PROGRAM-ID. judgingmoose.

       DATA DIVISION.
           WORKING-STORAGE SECTION.
           01 INP PIC X(50).
           01 LFT PIC 99.
           01 RGT PIC 99.
           01 TOTAL PIC 99.
           01 FORMATTED-INTEGER PIC Z(2).

       PROCEDURE DIVISION.
           ACCEPT INP.
           UNSTRING INP
               DELIMITED BY SPACE INTO LFT, RGT.
           ADD LFT RGT TO TOTAL.
           If TOTAL = 0
              DISPLAY "Not a moose"
           else IF LFT = RGT
              MOVE TOTAL To FORMATTED-INTEGER
              DISPLAY "Even " FORMATTED-INTEGER
           else
              IF RGT > LFT
                  Move 0 to TOTAL
                  Add RGT RGT to TOTAL
              ELSE
                  Move 0 to TOTAL
                  Add LFT LFT to TOTAL
              END-IF
              MOVE TOTAL To FORMATTED-INTEGER
              DISPLAY "Odd " FORMATTED-INTEGER
           STOP RUN.
