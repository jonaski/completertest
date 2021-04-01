#include <QMainWindow>
#include "mainwindow.h"
#include "completer.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui_(new Ui_MainWindow) {

  ui_->setupUi(this);

  show();
  Completer *completer = new Completer();
  ui_->lineedit->setCompleter(completer);

}

MainWindow::~MainWindow() { delete ui_; }
