#include <jade.hpp>

MAIN
    STRING A$;
    INTEGER B;

    A$ = "123456789";

    B = INSTR(A$, "789");

    PRINT(B);
END