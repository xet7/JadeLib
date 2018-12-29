#include "include/jade.hpp"

FUNCTION STRING REPLACE$ (STRING subject, CONSTANT STRING& search, CONSTANT STRING& replace) DO
    size_t pos = 0;


    WHILE( ( pos = subject.find(search, pos) ) != STRING::npos) DO
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    END
    RETURN subject;
END

