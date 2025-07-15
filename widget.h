#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QPaintEvent>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void paintEvent(QPaintEvent *event) override;

private slots:
    void on_pushButtonLogin_clicked();

private:
    Ui::Widget *ui;
    QPixmap m_backgroundImage;
};
#endif // WIDGET_H
