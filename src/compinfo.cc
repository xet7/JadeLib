#include "../include/jade.hpp"
// #include "compinfo.hpp"
#include <unistd.h>


CONSTRUCTOR ComputerInfo::ComputerInfo() DO
#if defined(__APPLE__)
    iface = GRAB$(EXEC(route_cmd),"interface:","flags");
    adapter = EXEC("ifconfig " + iface);
    macaddress = GRAB$(adapter,"ether","inet"); 
    ip = GRAB$(adapter,"inet","netmask");
#elif defined(__linux__)
    adapter = EXEC(route_cmd);
    iface = GRAB$(adapter,"dev","proto");
    macaddress = GRAB$(EXEC("ip -o link show "+iface),"link/ether","brd");
    ip = GRAB$(adapter,"src","metric");
#endif
    external = EXEC(dig_cmd);
    username = getlogin();
    computername = getComputerName();
ENDCONSTRUCTOR


STRING ComputerInfo::getComputerName() DO
    CHAR tmp[256];
    INTEGER retVal = gethostname(tmp,256);
    RETURN tmp;
END