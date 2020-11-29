#include <jade.hpp>

FUNCTION INTEGER Bigger(INTEGER a, INTEGER b) DO
    IF (a > b) THEN
        RETURN a;
    ELSE
        RETURN b;
    END
END

MAIN
    PRINT( Bigger(2,3) );
END