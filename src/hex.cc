#include "include/jade.hpp"

FUNCTION STRING HEX$(long num) DO
    std::stringstream ss;
    ss << std::hex << num;
    RETURN "0x"+ss.str();
END
