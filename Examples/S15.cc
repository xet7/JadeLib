#include <jade.hpp>

MAIN
    STRING A$;

    A$ = "this is a test";

    A$ = LEFT$(A$,4);

    PRINT(A$);
END