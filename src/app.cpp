#include "app.h"

App::App(const QString title, const QString url) : title(title), url(url) {
  QApplication app();

  this->window.setWindowTitle(title);
  
  QWebEngineView* webView = new QWebEngineView(&window);

  this->window.setCentralWidget(webView);

  webView->load(QUrl(url));
}

void App::show() {
  this->window.show();
}