#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "mainwindow.h"

namespace Ui
{
  class LoginWindow;
}

class LoginWindow : public QDialog
{
  Q_OBJECT

public:
  explicit LoginWindow(QWidget *parent = nullptr);
  ~LoginWindow();

private slots:
  void on_loginButton_clicked();
  void on_exitButton_clicked();

private:
  Ui::LoginWindow *ui;
  MainWindow *mainWindow;
};

#endif // LOGINWINDOW_H