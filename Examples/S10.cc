#include <jade.hpp>

MAIN
    STRING A$, B$, C$;

    A$ = "test.txt";

    FOR(VAR z IN RANGE(1,1000)) DO
        B$ += "This is line number " + STR$(z) + "\n";
    NEXT

    SAVEFILE(B$,A$);

    C$ = LOADFILE$(A$);

    PRINT(C$);

    IF(EXIST(A$)) THEN
        KILLFILE(A$);
    END
END
