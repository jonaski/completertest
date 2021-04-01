#include <QCompleter>
#include "completer.h"

Completer::Completer() {
  setModel(new CompleterModel());
  setCaseSensitivity(Qt::CaseInsensitive);
}

Completer::~Completer() {}

CompleterModel::CompleterModel() {
  setStringList(QStringList() << "Test1" << "Test2");
}

CompleterModel::~CompleterModel() {}
