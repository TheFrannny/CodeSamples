       IDENTIFICATION DIVISION.
       PROGRAM-ID. betting.
       DATA DIVISION.
           WORKING-STORAGE SECTION.
           01 INP  PIC 999V9999999999.
           01 OUT1 PIC 999V9999999999.
       PROCEDURE DIVISION.
           MAIN-PROCEDURE.
               ACCEPT INP.
               COMPUTE OUT1 = 100 / INP.
               DISPLAY OUT1.
               COMPUTE OUT1 = 100 / (100 - INP).
               DISPLAY OUT1.
               STOP RUN.
           END PROGRAM betting.
