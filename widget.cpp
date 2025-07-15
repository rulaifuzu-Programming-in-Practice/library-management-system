#include "widget.h"
#include "./ui_widget.h"
#include <QPixmap>

Widget::Widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置窗口标题
    setWindowTitle("登录系统");

    // 设置窗口固定大小
    setFixedSize(450, 400);

    // 保留窗口边框和关闭按钮
    setWindowFlags(windowFlags() & ~Qt::FramelessWindowHint);

    // 加载背景图片
    m_backgroundImage.load(":/images/login_background.jpg");

    // 连接登录按钮的信号和槽
    connect(ui->pushButtonLogin, &QPushButton::clicked, this, &Widget::on_pushButtonLogin_clicked);

    // 设置输入框光标位于用户名输入框
    ui->lineEditUsername->setFocus();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    // 绘制背景图片，缩放以适应窗口大小
    if (!m_backgroundImage.isNull())
    {
        painter.drawPixmap(0, 0, width(), height(), m_backgroundImage);
    }

    // 调用默认的绘制事件处理函数，确保控件正常显示
    QWidget::paintEvent(event);
}

void Widget::on_pushButtonLogin_clicked()
{
    // 获取用户输入的用户名和密码
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();

    // 检查用户名和密码是否为空
    if (username.isEmpty() || password.isEmpty())
    {
        QMessageBox::warning(this, "警告", "用户名和密码不能为空！");
        return;
    }

    // 这里可以添加实际的用户名和密码验证逻辑
    // 为了演示，我们使用简单的判断条件：用户名为"admin"，密码为"123456"
    if (username == "admin" && password == "123456")
    {
        QMessageBox::information(this, "成功", "登录成功！");
        // 登录成功后的操作可以在这里添加
    }
    else
    {
        QMessageBox::critical(this, "错误", "用户名或密码错误！");
        // 清空密码输入框
        ui->lineEditPassword->clear();
        // 将焦点设置到密码输入框
        ui->lineEditPassword->setFocus();
    }
}
