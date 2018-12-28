#include "include/jade.hpp"

FUNCTION STRING LOADFILE$ (STRING N) DO
    std::ifstream infile(N);
    STRING tmpStr( (std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>() );

  RETURN tmpStr;

ENDFUNCTION

