#include <jade.hpp>

MAIN
    STRING A$;

    A$ = "filename.txt";

    A$ = EXTRACT$(A$,".") + ".c";

    PRINT(A$);
END