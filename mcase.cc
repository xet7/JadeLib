#include "include/jade.hpp"

FUNCTION STRING MCASE$ (STRING S) DO
  DIM AS STRING tmpStr(S);
  DIM AS bool capFlag = FALSE;
  DIM AS size_t i;


  std::transform(tmpStr.begin(),tmpStr.end(),tmpStr.begin(),::tolower);

  FOR (i=0 TO i<=tmpStr.length() STEP i++) DO
      IF (std::ispunct(tmpStr[i]) OR std::isspace(tmpStr[i])) THEN
          capFlag=FALSE;
      ENDIF

      IF (capFlag==FALSE AND std::isalpha(tmpStr[i])) THEN
          tmpStr[i]=std::toupper(tmpStr[i]);
          capFlag=TRUE;
      ENDIF
  END
  RETURN tmpStr;
ENDFUNCTION

