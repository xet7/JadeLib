#include <jade.hpp>

MAIN
    STRARRAY A$;
    INTEGER Total;


    PRINT("Creating and storing 1,000 strings ... Please Wait");

    FOR(VAR Counter IN RANGE(0,1000)) DO
        A$.push_back("This Is Line " + STR$(Counter));
        WHILE (LEN(A$[Counter]) < 79) DO
            A$[Counter] += "*";
        WEND
        Total += LEN(A$[Counter]);
    NEXT
    PRINT("-----------------------");
    PRINT("Total Bytes stored in Array: ",Total);
    PRINT("-----------------------");

    INPUT("Press Enter To Display The Array");

    FOR(VAR Counter IN RANGE(0,999)) DO
        PRINT(A$[Counter]);
    NEXT
END