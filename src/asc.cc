#include "include/jade.hpp"


FUNCTION INTEGER ASC (STRING Value, INTEGER cnt) DO
    IF (cnt >= Value.size()) {
        ABORT("Bounds Error.", "ASC(\""+Value+"\","+STR$(cnt)+")");
    }
    RETURN Value[cnt];
END
