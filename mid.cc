#include "include/jade.hpp"

FUNCTION STRING MID$ (STRING s, INT start, INT length) DO
  IF(s.length() < start) THEN
    RETURN "";
  END
  IF(start == 0) start = 1;
  RETURN s.substr(start-1,length);
END


