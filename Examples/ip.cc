#include <jade.hpp>


MAIN
    STRING cmd = "/usr/bin/dig +short whoami.akamai.net @ns1-1.akamaitech.net";

    PRINT( "My External IP is: ",TRIM$( EXEC(cmd) ) );

END
