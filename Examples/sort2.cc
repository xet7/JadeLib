#include "../jade.hpp"

MAIN
    VAR MyArray = SPLIT("pear,cranberry,orange,apple,carrot,banana,grape,peaches,tangerines",",");

    SORT(MyArray);

    FOR (VAR item IN MyArray) DO 
        PRINT(item);
    END
END
