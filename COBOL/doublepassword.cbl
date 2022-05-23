       IDENTIFICATION DIVISION.
       PROGRAM-ID. doublepassword.
       DATA DIVISION.
           WORKING-STORAGE SECTION.
           01 INP  PIC X(1000).
           01 FRST PIC X(1000).
           01 SCND PIC X(1000).
           01 CMMN PIC 9(4) VALUE 0.
           01 PASS PIC 9(4) VALUE 0.
           01 FORMATTED-INTEGER PIC Z(2).
       PROCEDURE DIVISION.
           MAIN-PROCEDURE.
               ACCEPT FRST.
               ACCEPT SCND.
               if FRST(1:1) not = SCND(1:1)
                   add 1 to CMMN.
               if FRST(2:1) not = SCND(2:1)
                   add 1 to CMMN.
               if FRST(3:1) not = SCND(3:1)
                   add 1 to CMMN.
               if FRST(4:1) not = SCND(4:1)
                   add 1 to CMMN.

               COMPUTE PASS = 2**CMMN.

               MOVE PASS To FORMATTED-INTEGER
               DISPLAY FORMATTED-INTEGER
               STOP RUN.
