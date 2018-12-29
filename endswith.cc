#include "include/jade.hpp"

FUNCTION BOOL ENDS_WITH(const STRING str, const STRING ending) DO

    IF (ending.size() > str.size()) THEN
        RETURN FALSE;
    END

    RETURN std::equal(ending.rbegin(), ending.rend(), str.rbegin());
END 

