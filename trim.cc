#include "include/jade.hpp"

extern STRING LTRIM$ (STRING s);
extern STRING RTRIM$ (STRING s);

FUNCTION STRING TRIM$ (STRING s) DO
  RETURN LTRIM$ (RTRIM$ (s));
ENDFUNCTION

