#include "jade.hpp"

FUNCTION STRING UCASE$ (STRING str) DO
  DIM AS STRING  name(str);
  std::transform(name.begin(),name.end(),name.begin(),::toupper);
  RETURN name;
ENDFUNCTION

