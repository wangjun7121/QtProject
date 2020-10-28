#include <QApplication>
#include <QDialog>
#include <QLabel>
 
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    QDialog w;
    QLabel label(&w);
    label.setText("Hello World! 你好 QT!");
    w.show();
    // 让 QApplication 对象进入事件循环
    return a.exec();
}


