#include "mainwindow.h"
#include <QApplication>
#include"Types/simstatus.h"
#include<iostream>
#include<QMetaEnum>

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    return a.exec();

    //这里我试一试枚举转字符串
    QString data=SimStatus::statusToString<SimStatus::Status>(SimStatus::Collided);
    std::cout<<data.toStdString()<<std::endl;

    //反向操作也试一试
    /**=================by unishuai====================
    *由于这里定义了模板函数，所以这里是需要手动指定模板的值的，不然还是会有问题的
    *===================2024-06-16 ====================*/
    SimStatus::Status a=SimStatus::stringToStatus<SimStatus::Status>(data);
    std::cout<<a<<"--";
    QMetaEnum b=QMetaEnum::fromType<SimStatus::Status>();
//    QString c=b.valueToKey();

//    std::cout<<c.toStdString().data();


}
