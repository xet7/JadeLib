#include "include/jade.hpp"

SUB SAVEFILE (STRING src, STRING fname) DO
  std::ofstream outfile;

  outfile.open(fname.c_str());
  outfile << src;
  outfile.close();
END

