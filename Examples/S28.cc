#include <jade.hpp>

MAIN
    STRING a$;
    INTEGER b;

    a$ = INPUT("Enter a number ");
    b = VAL(a$);

    PRINT("The value of 'b' = ",b);
END