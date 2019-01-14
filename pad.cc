#include <jade.hpp>

FUNCTION STRING PAD$(std::string str, const size_t num, const char paddingChar = ' ') DO
    IF (num) DO 
        str.insert(0,num,paddingChar);
        str.append(num,paddingChar);
    END

    RETURN str;
END
