#include <jade.hpp>

MAIN
    STRING A$;

    A$ = RIGHT$("1234567890",5);
    PRINT(A$);
END