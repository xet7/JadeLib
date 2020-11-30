#include "include/jade.hpp"

FUNCTION STRING RTRIM$ (STRING s) DO
  s.erase(std::find_if(s.rbegin(),s.rend(),std::not1(std::ptr_fun<INT,INT>(std::isspace))).base(),s.end());
  RETURN s;
END

