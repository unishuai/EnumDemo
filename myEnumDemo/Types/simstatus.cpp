#include "simstatus.h"


SimStatus::SimStatus(QObject *parent) : QObject(parent)
{

}

//template<typename statusType>
//QString SimStatus::statusToString(statusType status)
//{
//    //
//    QMetaEnum metaEnm=QMetaEnum::fromType<statusType>();
//    return metaEnm.valueToKey(status);
//}

//template<typename statusType>
//statusType SimStatus::stringToStatus(QString statusKey)
//{
//    QMetaEnum metaEnm=QMetaEnum::fromType<statusType>();
//    //转化为枚举类型
//    return metaEnm.keyToValue(statusKey.toStdString().data());

//}




