#ifndef WEB_FRAME_H
#define WEB_FRAME_H

#include <wx/wx.h>

class WebFrame : wxFrame {
  public:
    WebFrame() : wxFrame(NULL, wxID_ANY, "Whatsapp") {};
};

#endif