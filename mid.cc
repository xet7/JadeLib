#include "include/jade.hpp"

FUNCTION STRING MID$ (STRING s, INT start, INT length) DO
  RETURN s.substr(start,length);
ENDFUNCTION


