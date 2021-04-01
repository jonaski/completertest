#ifndef COMPLETER_H
#define COMPLETER_H

#include <QCompleter>
#include <QStringListModel>

class Completer : public QCompleter {
  Q_OBJECT

 public:
  explicit Completer();
  ~Completer();

 private:

};

class CompleterModel : public QStringListModel {
  Q_OBJECT

 public:
  explicit CompleterModel();
  ~CompleterModel();

 private:

};

#endif // COMPLETER_H
