#include "ui_hellodialog.h"
#include "hellodialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    HelloDialog w;
    w.show();
    // 让 QApplication 对象进入事件循环
    return a.exec();
}


