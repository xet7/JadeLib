#include "include/jade.hpp"

FUNCTION STRING LCASE$ (STRING str) DO
  STRING  name(str);
  std::transform(name.begin(),name.end(),name.begin(),::tolower);
  RETURN name;
END

