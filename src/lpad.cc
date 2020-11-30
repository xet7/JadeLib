#include <jade.hpp>

FUNCTION STRING LPAD$(std::string str, const size_t num, const char paddingChar = ' ') DO
    if(num)
        str.insert(0, num, paddingChar);
    RETURN str;
END
