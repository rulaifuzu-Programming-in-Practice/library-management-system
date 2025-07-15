#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) : QDialog(parent),
                                            ui(new Ui::LoginWindow),
                                            mainWindow(nullptr)
{
  ui->setupUi(this);

  // 设置窗口标题
  this->setWindowTitle("图书管理系统 - 登录");

  // 设置窗口固定大小
  this->setFixedSize(this->width(), this->height());

  // 设置密码输入框显示为密码形式
  ui->passwordLineEdit->setEchoMode(QLineEdit::Password);

  // 连接回车键到登录按钮
  connect(ui->usernameLineEdit, &QLineEdit::returnPressed, this, &LoginWindow::on_loginButton_clicked);
  connect(ui->passwordLineEdit, &QLineEdit::returnPressed, this, &LoginWindow::on_loginButton_clicked);
}

LoginWindow::~LoginWindow()
{
  delete ui;
  if (mainWindow)
  {
    delete mainWindow;
  }
}

void LoginWindow::on_loginButton_clicked()
{
  QString username = ui->usernameLineEdit->text().trimmed();
  QString password = ui->passwordLineEdit->text().trimmed();

  // 这里只是一个简单的示例，实际项目中应该从数据库验证用户信息
  if (username == "admin" && password == "admin")
  {
    // 登录成功，显示主窗口
    mainWindow = new MainWindow();
    mainWindow->show();
    this->accept(); // 关闭登录窗口
  }
  else
  {
    // 登录失败，显示错误消息
    QMessageBox::warning(this, "登录失败", "用户名或密码错误，请重试！");
    ui->passwordLineEdit->clear();
    ui->usernameLineEdit->setFocus();
  }
}

void LoginWindow::on_exitButton_clicked()
{
  // 退出应用程序
  this->reject();
}