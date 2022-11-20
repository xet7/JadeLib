#include <jade.hpp>


MAIN
    STRING z$ = "  We'll  replace  all  spaces  with  underscores  ";
    STRING test$ = REPLACE$(z$," ","_");
    
    WHILE (INSTR(z$, " ")) DO
        VAR i = INSTR(z$, " ");
        IF (i) THEN
            z$ = MID$(z$, 1, i -1) + "_" + MID$(z$, i + 1, LEN(z$));
        END
        PRINT(z$);
    WEND
    PRINT("\nUsing REPLACE$ ",ENC$(test$));
END