#include <jade.hpp>



MAIN
    VAR A$ = COMMAND$();

    IF (A$ == "") THEN
        PRINT("You did not type anything on the command line.");
        exit(0);
    END

    PRINT("You typed ",ENC$(A$)," on the command line.");
END

