#include "include/jade.hpp"

FUNCTION STRING LTRIM$ (STRING s) DO
  s.erase(s.begin(),std::find_if(s.begin(),s.end(),std::not1(std::ptr_fun<INT,INT>(std::isspace))));
  RETURN s;
END

