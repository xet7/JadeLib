#include "include/jade.hpp"

FUNCTION STRING MID$ (STRING s, INT start, INT length) DO
  IF(s.length() < start) THEN
    RETURN "";
  END
  RETURN s.substr(start,length);
END


