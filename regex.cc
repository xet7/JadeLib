#include "jade.hpp"

FUNCTION STRING REGEX (STRING src, STRING query) DO
    STRING result;
    REGMATCH match;
    REGQUERY term(query);
    if (regex_search(src, match, term,std::regex_constants::match_any) == true){
    std::cout << match.size() << std::endl;
        result = match[1];
    }
    return result;
ENDFUNCTION

