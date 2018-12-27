
#include "../jade.hpp"


MAIN
  DIM AS STRING mystring = "This is a string.";

  PRINT ( "LEFT(mystring,4)" );
  PRINT (LEFT$(mystring,4));
  PRINT ();

  PRINT ( "MID$(mystring,5,4)" );
  PRINT (MID$(mystring,5,4));
  PRINT ();

  PRINT ( "RIGHT$(mystring,7)");
  PRINT (RIGHT$(mystring,7));
  PRINT ();

  PRINT ( "INSTR(mystring,\"is\")");
  PRINT (STR$(INSTR(mystring,"is")));
  PRINT ();

  PRINT ( "LCASE$(mystring)" );
  PRINT (LCASE$(mystring));
  PRINT ();

  PRINT ( "UCASE$(mystring)" );
  PRINT (UCASE$(mystring));
  PRINT ();

  PRINT ( "MCASE$(mystring)" );
  PRINT (MCASE$(mystring));
  PRINT ();

  PRINT ( "LTRIM$, RTRIM$, TRIM$" );
  PRINT (LTRIM$("    This should not have leading spaces    "));
  PRINT (RTRIM$("    This should not have any trailing spaces    "));
  PRINT (TRIM$("    This should not have any leading or trailing spaces     "));
  PRINT ();

  PRINT ( "SPLITPATH$(/Users/riveraa/myfile.txt,4)" );
  PRINT (SPLITPATH$("/Users/riveraa/myfile.txt",4));
  PRINT ( "SPLITPATH$(/Users/riveraa/myfile.txt,8)" );
  PRINT (SPLITPATH$("/Users/riveraa/myfile.txt",8));
  PRINT ( "SPLITPATH$(/Users/riveraa/myfile.txt,12)" );
  PRINT (SPLITPATH$("/Users/riveraa/myfile.txt",12));
  PRINT ( "SPLITPATH$(/Users/riveraa/myfile.txt,16)" );
  PRINT (SPLITPATH$("/Users/riveraa/myfile.txt",16));
  PRINT ();

  PRINT ( "REVERSE$(mystring)" );
  PRINT (REVERSE$(mystring));
  PRINT ();

  PRINT ( "REPLACE$(mystring,\"string\", \"Number\"" );
  PRINT ( REPLACE$(mystring,"string","Number") );
  PRINT ();

  PRINT ( "VAL(\"123\") + 10" );
  PRINT ( STR$(VAL("123") + 10) );
  PRINT ();

  PRINT ( "LOADFILE$()" );
  DIM AS STRING fileContents, fname = "demo.cpp";
  fileContents = LOADFILE$(fname);
//  PRINT ( "Printing contents of \"" + fname + "\"" );
//  PRINT (fileContents);
  PRINT ();

  PRINT ( "SAVEFILE()" );
  SAVEFILE(fileContents,"output.txt");
  PRINT ( "Contents saved to 'output.txt'");
  PRINT ();

  PRINT ( "FORMAT$(\"%d %s\", 10, \"TEN\")" );
  PRINT ( FORMAT$("%d %s",10, "TEN") );


ENDMAIN
