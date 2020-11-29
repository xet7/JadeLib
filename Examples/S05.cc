#include <jade.hpp>

// STRING CHR$(INTEGER num){
//     STRING s;
//     s = num;
//     return s;
// }

MAIN
    STRING A$;

    A$ = CHR$(65) + CHR$(66) + CHR$(67);

    PRINT(A$);
END