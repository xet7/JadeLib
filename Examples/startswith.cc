#include "../include/jade.hpp"

MAIN 
    STRING a("First time in Jade.");

    IF ( STARTS_WITH(a,"First") ) THEN
        PRINT("YES");
    ELSE 
        PRINT("NO");
    END
END
