#include "include/jade.hpp"

FUNCTION STRING LEFT$ (STRING s, INT length) DO
  RETURN s.substr(0,length);
END

