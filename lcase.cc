#include "include/jade.hpp"

FUNCTION STRING LCASE$ (STRING str) DO
  DIM AS STRING  name(str);
  std::transform(name.begin(),name.end(),name.begin(),::tolower);
  RETURN name;
ENDFUNCTION

