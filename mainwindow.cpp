#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  // 设置窗口标题
  setWindowTitle("图书管理系统");
}

MainWindow::~MainWindow()
{
  delete ui;
}