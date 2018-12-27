#include "jade.hpp"

FUNCTION INTEGER TALLY (STRING subject, STRING search) DO
    INTEGER cnt, pos=0;

    WHILE( ( pos = subject.find(search, pos) ) != STRING::npos) DO
         cnt++;
         pos++;
    WEND
    RETURN cnt;
ENDFUNCTION


