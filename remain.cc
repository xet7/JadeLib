#include "include/jade.hpp"

FUNCTION STRING REMAIN$ (STRING src, STRING match) DO
    STRING tmpStr;
    INTEGER pos;

    pos = src.find(match);

    IF (pos >= 0) THEN
        tmpStr = src.substr(pos,src.size());
    END
    
    RETURN tmpStr;
END

