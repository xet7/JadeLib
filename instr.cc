#include "include/jade.hpp"

FUNCTION INT INSTR (STRING  s,STRING  match, size_t offset) DO
  IF (s.empty() OR match.empty() OR offset>s.length()) THEN
      RETURN 0;
  ENDIF
  RETURN s.find(match,offset);
ENDFUNCTION

