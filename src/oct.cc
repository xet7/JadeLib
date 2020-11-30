#include "include/jade.hpp"

FUNCTION STRING OCT$(long num) DO
    std::stringstream ss;
    ss << std::oct << num;
    RETURN "0"+ss.str();
END
