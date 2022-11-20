#include <jade.hpp>

FUNCTION STRING There$(STRING c) DO
    RETURN UCASE$(c) + " There!";
END

MAIN
    STRING A$;

    A$ = There$("Hello");

    PRINT(A$);
END