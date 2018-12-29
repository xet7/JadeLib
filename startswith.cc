#include "include/jade.hpp"

FUNCTION BOOL STARTS_WITH(const STRING str, const STRING prefix) DO
    return ((prefix.size() <= str.size()) && std::equal(prefix.begin(), prefix.end(), str.begin()));
END