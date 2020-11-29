#include <jade.hpp>


MAIN
    CLEAR();

    FOR(VAR K IN RANGE(0,8)) DO
        COLOR(K, 0);
        LOCATE(2 + K, 5);
        PRINT("Welcome to JADE++");
    END

    COLOR(15,1);
    LOCATE(23,28);
    INPUT("Press Enter to End");
    
    COLOR(7,0);

    CLEAR();
END


