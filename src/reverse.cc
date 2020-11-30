#include "include/jade.hpp"

FUNCTION STRING REVERSE$ (STRING src) DO
    RETURN STRING( src.rbegin(),src.rend() );
END

