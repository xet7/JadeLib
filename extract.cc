#include "jade.hpp"

FUNCTION STRING EXTRACT$ (STRING src, STRING match) DO
    STRING tmpStr;
    INTEGER pos;

    pos = src.find(match);

    IF (pos >= 0) THEN
        tmpStr = src.substr(0,pos);
    END

    RETURN tmpStr;
END


