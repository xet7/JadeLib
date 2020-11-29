#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <regex>
#include <array>
#include <iterator>
#include <stdexcept>
#include <cstdarg>
#include <numeric>
#include <cstdlib>
#include <cstdio>
#include <chrono>
#include <thread>

/* DEFINES */
#define MAIN                      \
  char   **G_argv;         \
  int     G_argc;          \
  int main(int argc, char **argv) \
  {                               \
    G_argc = argc;                \
    G_argv = argv;

#define ENDMAIN }
#define FUNCTION
#define SUB void
#define END }
#define AND &&
#define OR ||
#define CLASS class
#define TYPE typedef struct
#define ADDR &
#define INCR ++
#define DECR --
#define BYREF *
#define PTR *
#define NOT not
#define IF if
#define THEN {
#define ELSE \
  }          \
  else       \
  {
#define ENDIF }
#define FOR for
#define IN :
#define TO ;
#define STEP ;
#define SELECT switch
#define CASE case
#define _TO_ ...
#define ENDCASE break;
#define CASE_ELSE default
#define CLS printf("\33[2J\33[H")
#define ENDSELECT }
#define WHILE while
#define WEND }
#define RETURN return
#define CONSTANT const
#define STR$(x) std::to_string(x)
#define BOOL bool
#define INT int
#define INTEGER int
#define UINT unsigned int


/*
 * The following three objects 
 * CANNOT be 'typedef'd
 * Because they need to be
 * initialized with a type!!!
 * 
 *************************/
#define VECTOR std::vector
#define ARRAY std::vector
#define MAP std::map
/************************/

#define CHAR char
#define ENUM enum \
{
#define ENDENUM \
  }             \
  ;
#define EXIT exit
#define BREAK break;
#define SHORT short
#define LPCHAR char *
#define CLASS class
#define ENDCLASS \
  }              \
  ;
#define CONSTRUCTOR
#define ENDCONSTRUCTOR }
#define DO {
#define NEXT }
#define LEN(x) x.size()
#define PRINTNL printf("\n")
#define NL std::endl
#define VAR auto
#define SORT(x) std::sort(x.begin(), x.end())

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

/* TYPEDEFS */
typedef std::string STRING;
typedef std::vector<std::string> STRARRAY;
typedef std::regex REGQUERY;
typedef std::smatch REGMATCH;
typedef std::ofstream OUTFILE;

/* PROTOTYPES */
FUNCTION BOOL EXIST(STRING filename);
FUNCTION INTEGER KILLFILE(STRING filename);
FUNCTION STRING REGEX(STRING src, STRING query);
FUNCTION VECTOR<STRING> SPLIT(CONSTANT STRING src, CONSTANT STRING delim = " ");
FUNCTION STRING FORMAT$(CONSTANT STRING fmt, ...);
FUNCTION STRING REVERSE$(STRING src);
FUNCTION STRING LTRIM$(STRING s);
FUNCTION STRING RTRIM$(STRING s);
FUNCTION STRING TRIM$(STRING s);
FUNCTION STRING LEFT$(STRING s, INT length);
FUNCTION STRING MID$(STRING s, INT start, INT length);
FUNCTION STRING RIGHT$(STRING s, INT length);
FUNCTION INT INSTR(STRING s, STRING match, size_t offset = 0);
FUNCTION STRING LCASE$(STRING str);
FUNCTION STRING UCASE$(STRING str);
FUNCTION STRING MCASE$(STRING S);
FUNCTION STRING LOADFILE$(STRING N);
SUB SAVEFILE(STRING src, STRING fname);
FUNCTION STRING SPLITPATH$(STRING FPATH, INT mask);
FUNCTION STRING ENC$(STRING A, INT L = 34, INT R = 34);
FUNCTION STRING REPLACE$(STRING subject, CONSTANT STRING &search, CONSTANT STRING &replace);
FUNCTION INT VAL(STRING str);
FUNCTION STRING GRAB$(CONSTANT STRING &src, CONSTANT STRING &start, CONSTANT STRING &stop);
SUB ABORT(STRING msg, STRING offendingline = "");
FUNCTION INTEGER ASC(STRING Value, INTEGER cnt = 0);
SUB COPYFILE(STRING src_file, STRING dest_file);
FUNCTION STRING EXTRACT$(STRING src, STRING match);
FUNCTION STRING REMAIN$(STRING src, STRING match);
FUNCTION STRING REPEAT$(STRING input, INTEGER num, STRING sep = "");
FUNCTION INTEGER TALLY(STRING subject, STRING search);
SUB PRINT();
FUNCTION BOOL STARTS_WITH(CONSTANT STRING str, CONSTANT STRING prefix);
FUNCTION BOOL ENDS_WITH(CONSTANT STRING str, CONSTANT STRING ending);
FUNCTION STRING HEX$(long num);
FUNCTION STRING OCT$(long num);
FUNCTION STRING BIN$(long num);
FUNCTION STRING LPAD$(std::string str, const size_t num, const char paddingChar = ' ');
FUNCTION STRING RPAD$(std::string str, const size_t num, const char paddingChar = ' ');
FUNCTION STRING PAD$(std::string str, const size_t num, const char paddingChar = ' ');
SUB CLEAR();
SUB COLOR(int fg, int bg);
SUB LOCATE(int row, int col);
FUNCTION STRING INPUT(STRING prompt);
FUNCTION ARRAY<long> RANGE(long low, long high);
FUNCTION STRING CHR$(INTEGER num);
FUNCTION STRING TIME$(INTEGER val);
FUNCTION STRING DATE$();
FUNCTION STRING TIME$();
SUB SLEEP(INTEGER millisec);
FUNCTION STRING COMMAND$();
FUNCTION STRING COMMAND$(INTEGER nArg);

/* This templated function
 * handles printing comma-seperated
 * objects....
 * */
template <typename T, typename... Args>
void PRINT(CONSTANT T begin, CONSTANT Args... args)
{
  std::cout << begin;
  PRINT(args...);
}
