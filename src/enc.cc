#include "include/jade.hpp"

FUNCTION STRING ENC$(STRING A, INT L, INT R) DO
    std::stringstream buf;
buf << (char)L << A << (char)R;
RETURN buf.str();
END
