#include "../../jade.hpp"

#include "fltk.inc"


MAIN
  DIM AS INT top = 40;
  DIM AS WINDOW PTR win;
  DIM AS INPUT PTR txtSource, PTR txtDest;
  DIM AS BUTTON PTR btnSource, PTR btnDest;

  win = new WINDOW(690,486,"FLTK Demo");
  win->position((Fl::w() - win->w())/2, (Fl::h() - win->h())/2);
  txtSource = new INPUT(20,top,540,26);
  btnSource = new BUTTON(580,top,90,26,"Source");
  txtDest = new INPUT(20,top+40,540,26);

  btnDest = new BUTTON(580, top+40,90,26,"Dest");
  win->show();
  RETURN Fl::run();
ENDMAIN
