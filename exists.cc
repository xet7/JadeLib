#include "include/jade.hpp"

FUNCTION BOOL EXIST (STRING filename) DO
  std::ifstream ifile(filename);
  RETURN (BOOL)ifile;
END


