#include <jade.hpp>



MAIN
    STRING x$,y$,z$;
    
    x$ = "European";
    y$ = "Hardware";
    z$ = "Skaters";

    z$ = LEFT$(x$, 2) + RIGHT$(y$, 2) + MID$(z$, 2, 2) + "!";

    PRINT(z$);
END

