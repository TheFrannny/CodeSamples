       IDENTIFICATION DIVISION.
       PROGRAM-ID. AUTORI.

       DATA DIVISION.
           WORKING-STORAGE SECTION.
           01 INP PIC A(100).
           01 FST PIC 999 VALUE 1.

       PROCEDURE DIVISION.
           ACCEPT INP.
           PERFORM LOOP VARYING FST FROM 001 BY 001 UNTIL FST > 100.
           STOP RUN.

           LOOP.
               evaluate true
                WHEN INP (FST:1) IS ALPHABETIC-UPPER
                DISPLAY INP (FST:1) WITH NO ADVANCING
               end-evaluate.
