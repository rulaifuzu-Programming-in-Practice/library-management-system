#include "mainwindow.h"
#include "loginwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 显示登录窗口
    LoginWindow loginWindow;
    if (loginWindow.exec() != QDialog::Accepted)
    {
        // 如果登录取消，退出程序
        return 0;
    }

    return a.exec();
}
