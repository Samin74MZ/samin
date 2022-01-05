#ifndef MYTABLE_H
#define MYTABLE_H

#include <QString>
#include <QWidget>
#include <QVariant>
#include <QList>
#include <QAbstractTableModel>
#include <QSharedPointer>


class MYTABLE : public QAbstractTableModel
{
public:
    explicit MYTABLE(QObject *parent = nullptr);
};

#endif // MYTABLE_H
