#ifndef APP_H
#define APP_H

#include <QApplication>
#include <QMainWindow>
#include <QWebEngineView>

class App : QApplication {    
  private:
    QMainWindow window;
    string title;
    string url;
  
  public:
    App(string title, string url);

    void show();
};

#endif