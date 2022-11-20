#include <jade.hpp>


MAIN
    VAR a = 65 + 66 + 67;
    VAR b = ASC("A") + ASC("B") + ASC("C");

    PRINT("A = ", a, " and B = ", b);
END