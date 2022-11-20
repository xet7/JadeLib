#include <jade.hpp>

MAIN
    STRING A$;

    FOR(VAR i IN RANGE(65,65+25)) DO
        PRINT(CHR$(i));
    NEXT
END