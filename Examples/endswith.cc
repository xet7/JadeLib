#include <jade.hpp>

MAIN 
    STRING a("First time in Jade.");

    IF ( ENDS_WITH(a,"Jade.") ) THEN
        PRINT("YES");
    ELSE 
        PRINT("NO");
    END
END