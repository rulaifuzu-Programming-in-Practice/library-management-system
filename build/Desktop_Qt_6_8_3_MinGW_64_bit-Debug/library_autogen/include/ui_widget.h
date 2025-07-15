/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelLogo;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelUserIcon;
    QLabel *labelUsername;
    QLineEdit *lineEditUsername;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelPwdIcon;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonLogin;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(450, 400);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        labelLogo = new QLabel(Widget);
        labelLogo->setObjectName("labelLogo");
        labelLogo->setMinimumSize(QSize(100, 100));
        labelLogo->setMaximumSize(QSize(100, 100));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/images/login_logo.png")));
        labelLogo->setScaledContents(true);

        horizontalLayout_5->addWidget(labelLogo);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        labelTitle = new QLabel(Widget);
        labelTitle->setObjectName("labelTitle");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        labelTitle->setFont(font);
        labelTitle->setMouseTracking(false);
        labelTitle->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 0.5);\n"
"border-radius: 3px;"));
        labelTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelUserIcon = new QLabel(Widget);
        labelUserIcon->setObjectName("labelUserIcon");
        labelUserIcon->setMinimumSize(QSize(30, 30));
        labelUserIcon->setMaximumSize(QSize(30, 30));
        labelUserIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/user_icon.png")));
        labelUserIcon->setScaledContents(true);

        horizontalLayout->addWidget(labelUserIcon);

        labelUsername = new QLabel(Widget);
        labelUsername->setObjectName("labelUsername");
        labelUsername->setMinimumSize(QSize(50, 0));
        labelUsername->setMaximumSize(QSize(16777215, 16777215));
        labelUsername->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 0.5);\n"
"border-radius: 10px;\n"
"font-weight: bold;"));
        labelUsername->setLineWidth(1);
        labelUsername->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(labelUsername);

        lineEditUsername = new QLineEdit(Widget);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setMinimumSize(QSize(180, 0));
        lineEditUsername->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);"));

        horizontalLayout->addWidget(lineEditUsername);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        labelPwdIcon = new QLabel(Widget);
        labelPwdIcon->setObjectName("labelPwdIcon");
        labelPwdIcon->setMinimumSize(QSize(30, 30));
        labelPwdIcon->setMaximumSize(QSize(30, 30));
        labelPwdIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/password_icon.png")));
        labelPwdIcon->setScaledContents(true);

        horizontalLayout_2->addWidget(labelPwdIcon);

        labelPassword = new QLabel(Widget);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setMinimumSize(QSize(50, 0));
        labelPassword->setMaximumSize(QSize(16777215, 16777215));
        labelPassword->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 0.5);\n"
"border-radius: 10px;\n"
"font-weight: bold;"));
        labelPassword->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(labelPassword);

        lineEditPassword = new QLineEdit(Widget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setMinimumSize(QSize(180, 0));
        lineEditPassword->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);"));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEditPassword);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButtonLogin = new QPushButton(Widget);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setMinimumSize(QSize(120, 30));
        pushButtonLogin->setStyleSheet(QString::fromUtf8("QPushButton {\"\n"
"    background-color: #2c7adf;\"\n"
"    \"color: white;\"\n"
"    \"border-radius: 15px;\"  // \350\277\231\351\207\214\350\256\276\347\275\256\345\234\206\350\247\222\345\244\247\345\260\217\n"
"    \"font-weight: bold;\"\n"
"    \"}\";\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #4a8fe7;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1c5ab0;\n"
"}"));

        horizontalLayout_4->addWidget(pushButtonLogin);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        labelLogo->setText(QString());
        labelTitle->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        labelUserIcon->setText(QString());
        labelUsername->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        lineEditUsername->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        labelPwdIcon->setText(QString());
        labelPassword->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201\357\274\232", nullptr));
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
