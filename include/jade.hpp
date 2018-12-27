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

/* DEFINES */
#define MAIN int main (int argc, char** argv) {
#define ENDMAIN }
#define DECLARE
#define FUNCTION
#define ENDFUNCTION }
#define DIM
#define AS
#define DEF
#define SUB void
#define ENDSUB }
#define BEGIN {
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
#define ELSE } else {
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
#define ENUM enum {
#define ENDENUM };
#define EXIT exit
#define BREAK break;
#define SHORT short
#define LPCHAR char*
#define CLASS class
#define ENDCLASS };
#define CONSTRUCTOR
#define ENDCONSTRUCTOR }
#define DO {
#define NEXT }
#define LEN (x) x.size()
#define PRINTNL printf("\n")
#define NL std::endl
#define VAR auto
#define SORT(x) std::sort(x.begin(),x.end())

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
BOOL EXISTS (STRING filename);
STRING REGEX (STRING src, STRING query);
VECTOR<STRING> SPLIT (CONSTANT STRING src, CONSTANT STRING delim=" ");
STRING FORMAT$ (CONSTANT STRING fmt, ...);
STRING REVERSE$ (STRING src);
STRING LTRIM$ (STRING s);
STRING RTRIM$ (STRING s);
STRING TRIM$ (STRING s);
STRING LEFT$ (STRING s, INT length);
STRING MID$ (STRING s, INT start, INT length);
STRING RIGHT$ (STRING s, INT length);
INT INSTR (STRING  s,STRING  match, size_t offset=0);
STRING LCASE$ (STRING str);
STRING UCASE$ (STRING str);
STRING MCASE$ (STRING S);
STRING LOADFILE$ (STRING N);
SUB SAVEFILE (STRING src, STRING fname);
STRING SPLITPATH$ (STRING FPATH, INT mask);
STRING ENC$ (STRING  A, INT L, INT R);
STRING REPLACE$ (STRING subject, CONSTANT STRING& search, CONSTANT STRING& replace);
INT VAL (STRING str);
STRING GRAB$ (CONSTANT STRING &src, CONSTANT STRING &start, CONSTANT STRING &stop);
SUB ABORT(STRING msg, STRING offendingline = "");
INTEGER ASC (STRING Value, INTEGER cnt = 0);
SUB COPYFILE ( STRING src_file, STRING dest_file );
STRING EXTRACT$ (STRING src, STRING match);
STRING REMAIN$ (STRING src, STRING match);
STRING REPEAT$ (STRING input, INTEGER num, STRING sep = "");
INTEGER TALLY (STRING subject, STRING search);
SUB PRINT();

/* This templated function
 * handles printing comma-seperated
 * objects....
 * */
template<typename T, typename... Args>
void PRINT(const T begin, const Args... args ) {
    std::cout << begin;
    PRINT(args...);
}

