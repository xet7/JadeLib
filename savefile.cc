#include "include/jade.hpp"

SUB SAVEFILE (STRING src, STRING fname) DO
  DIM AS std::ofstream outfile;

  outfile.open(fname.c_str());
  outfile << src;
  outfile.close();
ENDSUB

