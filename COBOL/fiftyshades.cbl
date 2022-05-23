       IDENTIFICATION DIVISION.
       PROGRAM-ID. fiftyshades.

       DATA DIVISION.
           WORKING-STORAGE SECTION.
           01 NUM PIC 9999 VALUE 0.
           01 CUR PIC 9999 VALUE 1.
           01 ENTRIES PIC 9999 VALUE 0.
           01 FOUND PIC 9999 VALUE 0.
           01 I PIC 99 VALUE 1.
           01 RAW PIC A(30).
           01 LOW PIC A(30).
           01 FORMATTED-INTEGER PIC Z(04)9.

       PROCEDURE DIVISION.
           ACCEPT ENTRIES.
           PERFORM LOOP VARYING CUR FROM 0001 BY 0001
           UNTIL CUR > ENTRIES.
           IF NUM = 0
               DISPLAY "I must watch Star Wars with my daughter"
           ELSE
               MOVE NUM To FORMATTED-INTEGER
               DISPLAY FORMATTED-INTEGER
           END-IF.
           STOP RUN.

            LOOP.
                ACCEPT RAW.
                MOVE FUNCTION Lower-case(RAW) to LOW.
                PERFORM LOOP2 VARYING I FROM 01 By 01 UNTIL I = 28.
                IF FOUND > 0 THEN
                    SET NUM UP BY 1
                    MOVE 0 TO FOUND
                    END-IF.
            LOOP2.
                IF LOW (I:4) = "rose" OR LOW (I:4) = "pink" THEN
                    SET FOUND UP BY 1
                    END-IF.
