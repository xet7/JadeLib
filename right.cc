#include "include/jade.hpp"

FUNCTION STRING RIGHT$ (STRING s, INT length) DO
  RETURN s.substr(s.size()-length);
ENDFUNCTION

