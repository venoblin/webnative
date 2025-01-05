#ifndef APP_H
#define APP_H

#include <QApplication>
#include <QMainWindow>
#include <QWebEngineView>
#include <QString>

class App : QApplication {    
  private:
    QMainWindow window;
    const QString title;
    const QString url;
  
  public:
    App(const QString title, const QString url);

    void show();
};

#endif