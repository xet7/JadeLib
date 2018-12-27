#include "../jade.hpp"

MAIN
    VAR a=1;
    VAR b="2";
    ARRAY<double>c(1000001, .3);

    PRINT(a+VAL(b));
    PRINT(a,b);
    PRINT(c[1000000]);
END


