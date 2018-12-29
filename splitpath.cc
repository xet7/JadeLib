#include "include/jade.hpp"

FUNCTION STRING SPLITPATH$ (STRING FPATH, INT mask) DO
  STRING  fullPath(FPATH);
  STRING  path, filename, extension;
  STRING::size_type  lastSlashPos, extPos;

  lastSlashPos=fullPath.find_last_of("/");
  extPos=fullPath.find_last_of(".");
  IF (lastSlashPos==STRING::npos) THEN
      path.empty();
      filename=fullPath;
  ELSE
      path=fullPath.substr(0,lastSlashPos);
      filename=fullPath.substr(lastSlashPos+1,(extPos-lastSlashPos)-1);
  ENDIF

  IF (extPos==STRING::npos) THEN
      extension.empty();
  ELSE
      extension=fullPath.substr(extPos+1,fullPath.size()-extPos-1);
  ENDIF

  SELECT (mask) DO
    CASE 4:
      RETURN path;
    ENDCASE

    CASE 8:
      RETURN filename;
    ENDCASE

    CASE 12:
      RETURN path.append("/").append(filename);
    ENDCASE

    CASE 16:
      RETURN extension;
    ENDCASE

    CASE_ELSE:
      RETURN "";

  ENDSELECT

ENDFUNCTION

