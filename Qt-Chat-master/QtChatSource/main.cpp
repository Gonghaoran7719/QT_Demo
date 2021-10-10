   #include <QApplication>
#include <QtWidgets>
#include "login.h"

#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());

    //Login::setStyle("black.qss");

    Login w;
    w.show();

    //加载qss start
//    QFile file(":/images/qss/white.qss"); //black white QSS 文件路径
//    file.open(QIODevice::ReadOnly | QIODevice::Text);
//    QString qss(file.readAll());
//    a.setStyleSheet(qss);
    //加载qss end

    
    return a.exec();
}
