#include "include/jade.hpp"

FUNCTION BOOL EXISTS (STRING filename) DO
  std::ifstream ifile(filename);
  RETURN (BOOL)ifile;
END


