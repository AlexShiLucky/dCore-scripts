// generated by Fast Light User Interface Designer (fluid) version 1.0110

#include <libintl.h>
#include "cpanel.h"
// (c) Robert Shingledecker 2008-2010
#include <cstdlib>
#include <iostream>
#include <locale.h>
using namespace std;

void btn_callback(Fl_Widget* w, void* userdata) {
  system((const char*)userdata);
}

Fl_Button *btnWbarConf=(Fl_Button *)0;

int main(int argc, char **argv) {
  Fl_Double_Window* w;
  setlocale(LC_ALL, "");
bindtextdomain("tinycore","/usr/local/share/locale");
textdomain("tinycore");
  { Fl_Double_Window* o = new Fl_Double_Window(445, 180, gettext("ControlPanel"));
    w = o;
    { Fl_Box* o = new Fl_Box(5, 18, 140, 155, gettext("Maintenance"));
      o->box(FL_EMBOSSED_FRAME);
      o->align(FL_ALIGN_TOP);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(150, 18, 140, 155, gettext("Utilities"));
      o->box(FL_EMBOSSED_FRAME);
      o->align(FL_ALIGN_TOP);
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(295, 18, 140, 155, gettext("Setup"));
      o->box(FL_EMBOSSED_FRAME);
      o->align(FL_ALIGN_TOP);
    } // Fl_Box* o
    { Fl_Button* o = new Fl_Button(15, 30, 120, 30, gettext("Backup/Restore"));
      o->callback((Fl_Callback*)btn_callback, (void*)("filetool &"));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(160, 30, 120, 30, gettext("Mount Tool"));
      o->callback((Fl_Callback*)btn_callback, (void*)("mnttool &"));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(305, 30, 120, 30, gettext("Services"));
      o->callback((Fl_Callback*)btn_callback, (void*)("services &"));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(15, 65, 120, 30, gettext("Date/Time"));
      o->callback((Fl_Callback*)btn_callback, (void*)("datetool &"));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(160, 65, 120, 30, gettext("Mouse Tool"));
      o->callback((Fl_Callback*)btn_callback, (void*)("mousetool &"));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(305, 65, 120, 30, gettext("Swapfile Tool"));
      o->callback((Fl_Callback*)btn_callback, (void*)("swapfile &"));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(15, 100, 120, 30, gettext("Network"));
      o->callback((Fl_Callback*)btn_callback, (void*)("sudo network &"));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(160, 100, 120, 30, gettext("System Stats"));
      o->callback((Fl_Callback*)btn_callback, (void*)("stats &"));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(305, 100, 120, 30, gettext("Terminal Server"));
      o->callback((Fl_Callback*)btn_callback, (void*)("aterm -bg black +sb -T \"Terminal Server Setup\" -e sudo /usr/bin/tc-terminal-server &"));
    } // Fl_Button* o
    { btnWbarConf = new Fl_Button(15, 135, 120, 30, gettext("tcWbarConf"));
      btnWbarConf->callback((Fl_Callback*)btn_callback, (void*)("tc-wbarconf &"));
      btnWbarConf->deactivate();
    } // Fl_Button* btnWbarConf
    { Fl_Button* o = new Fl_Button(160, 135, 120, 30, gettext("Wallpaper"));
      o->callback((Fl_Callback*)btn_callback, (void*)("wallpaper &"));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(305, 135, 120, 30, gettext("SCE Tools"));
      o->callback((Fl_Callback*)btn_callback, (void*)("sce-tools &"));
    } // Fl_Button* o
    o->end();
  } // Fl_Double_Window* o
  int results = system("which tc-wbarconf >/dev/null 2>&1");
if ( results == 0 ) btnWbarConf->activate();
  w->show(argc, argv);
  return Fl::run();
}
