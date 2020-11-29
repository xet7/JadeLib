#include "include/jade.hpp"

FUNCTION STRING DATE$() DO
    RETURN TIME$(12);
END

FUNCTION STRING TIME$() DO
    STRING curTime;
    curTime = TIME$(0) + " "+TIME$(4);
    RETURN curTime;
END

FUNCTION STRING TIME$(INTEGER val) DO
  time_t elapse_time;
  struct tm *tp;
  CHAR strtmp[256];
  time (&elapse_time);
  tp = localtime(&elapse_time);
  SELECT (val) DO
   CASE 0:
    std::strftime(strtmp,256,"%I:%M:%S",tp); break;
   CASE 1:
    std::strftime(strtmp,256,"%H",tp); break;
   CASE 2:
    std::strftime(strtmp,256,"%M",tp); break;
   CASE 3:
    std::strftime(strtmp,256,"%S",tp); break;
   CASE 4:
    std::strftime(strtmp,256,"%p",tp); break;
   CASE 5:
    std::strftime(strtmp,256,"%Y",tp); break;
   CASE 6:
    std::strftime(strtmp,256,"%m",tp); break;
   CASE 7:
    std::strftime(strtmp,256,"%d",tp); break;
   CASE 8:
    std::strftime(strtmp,256,"%A",tp); break;
   CASE 9:
    std::strftime(strtmp,256,"%w",tp); break;
   CASE 10:
    std::strftime(strtmp,256,"%j",tp); break;
   CASE 11:
    std::strftime(strtmp,256,"%V",tp); break;
   CASE 12:
    std::strftime(strtmp,256,"%m/%d/%Y",tp); break;
   CASE 13:
    std::strftime(strtmp,256,"%A, %B %d, %Y",tp); break;
  END
  RETURN STRING(strtmp);
END