#ifndef SIMSTATUS_H
#define SIMSTATUS_H
/******************************************************************************
  @Project Name  : myEnumDemo
  @File Name     : simstatus.h
  @Version       : 1.0
  @Function      : to be determined
  @Author        : unishuai
  @Date          : 2024-06-16
******************************************************************************/
/**=================by unishuai====================
* 这个地方一定要注意，因为使用了模板类，所以是非常的麻烦。。
* 这里有两种解决办法，
*   1.一种是像我下面这样，把模板类的实现转移到.h的头文件里面
*   2.第二种是引用的时候，引用.cpp文件，这个我没有试过，
* 可以参考下面的链接。
* https://blog.csdn.net/weixin_46060711/article/details/124530268
* 编写参考
* https://blog.csdn.net/qq_41673920/article/details/106981742
*===================2024-06-16 ====================*/
#include <QObject>
#include <QMetaEnum>
class SimStatus : public QObject
{
    Q_OBJECT


public:
    explicit SimStatus(QObject *parent = nullptr);
    enum Status {
        Success,
        Failed,
        Collided
    };
    Q_ENUM(Status)
//    //这里先设置一下模板类
//    template<typename statusType>
//    //将枚举类转化为字符串
//    static QString statusToString(statusType status);
//    //这里先设置一下模板类
//    template<typename statusType>
//    //将字符串转化为枚举
//    static statusType stringToStatus(QString statusKey);

    template<typename statusType>
    static statusType stringToStatus(QString statusKey)
    {
        QMetaEnum metaEnm=QMetaEnum::fromType<statusType>();
        //转化为枚举类型
        /**=================by unishuai====================
        *这里是需要一个强制转化的，不然的话还是会出现一点点的问题
        * 这里是一定需要使用强制转化的
        *===================2024-06-16 ====================*/
        return (statusType)metaEnm.keyToValue(statusKey.toStdString().data());

    }

    template<typename statusType>
    static QString statusToString(statusType status)
    {
        //
        QMetaEnum metaEnm=QMetaEnum::fromType<statusType>();
        return metaEnm.valueToKey(status);
    }



private:
    SimStatus();

signals:

public slots:
};

#endif // SIMSTATUS_H
