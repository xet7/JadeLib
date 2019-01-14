#include <jade.hpp>

FUNCTION STRING RPAD$(std::string str, const size_t num, const char paddingChar = ' ') DO
    if(num)
        str.append(num,paddingChar);
    RETURN str;
END
