#include <jade.hpp>

MAIN
    STRING A$;

    A$ = REPLACE$("1234567890","456","-ABC-");
    PRINT(A$);
END