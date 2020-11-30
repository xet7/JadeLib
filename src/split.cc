#include "include/jade.hpp"

FUNCTION STRARRAY SPLIT (CONSTANT STRING src, CONSTANT STRING delim) DO
    REGQUERY re(delim); // regex pattern or text
    STRARRAY result;


    std::sregex_token_iterator it(src.begin(), src.end(), re, -1);
    std::sregex_token_iterator reg_end;

    FOR ( ; it != reg_end; ++it ) DO
        if ( !it->str().empty() && it->str() != " ") //token could be empty:check
            result.push_back( TRIM$(it->str() ));
    END
    return result;

END

