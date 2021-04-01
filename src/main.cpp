#include <QApplication>
#include <QtDebug>
#include <QLoggingCategory>

#include "mainwindow.h"

int main(int argc, char *argv[]) {

  QCoreApplication::setApplicationName("completertest");
  QCoreApplication::setOrganizationName("completertest");
  QCoreApplication::setOrganizationDomain("jkvinge.net");

  QLoggingCategory::defaultCategory()->setEnabled(QtDebugMsg, true);

  QApplication a(argc, argv);
  MainWindow w;
  return a.exec();

}
