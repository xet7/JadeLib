#include "include/jade.hpp"

FUNCTION STRING REPEAT$ (STRING input, INTEGER num, STRING sep) DO
    STRING ret;
    ret.reserve(input.size() * num);
    WHILE (num--)
        IF (num > 0) THEN
            ret += (input + sep);
        ELSE
            ret += input;
        END
    RETURN ret;
END

