#include "include/jade.hpp"

extern char   **G_argv;
extern int    G_argc;

FUNCTION STRING COMMAND$() DO
    STRING argument;
    std::for_each( G_argv + 1, G_argv + G_argc , [&]( const char* c_str ){ argument += STRING ( c_str ) + " "; } );
    RETURN TRIM$(argument);  
END

FUNCTION STRING COMMAND$(INTEGER nArg) DO
    RETURN STRING(G_argv[nArg]);
END
