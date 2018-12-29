#include "include/jade.hpp"

FUNCTION STRING FORMAT$ (CONSTANT STRING fmt, ...) DO
    VECTOR<char> str(100,'\0');
    va_list ap;
    INT n;

    WHILE (TRUE) {
        va_start(ap, fmt);
        n = vsnprintf(str.data(), str.size(), fmt.c_str(), ap);
        va_end(ap);
        IF ((n > -1) AND (size_t(n) < str.size())) THEN
            RETURN str.data();
        ENDIF
        IF (n > -1) THEN
            str.resize( n + 1 );
        ELSE
            str.resize( str.size() * 2);
        ENDIF
    WEND

    RETURN str.data();
END

