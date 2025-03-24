#ifndef SELLER_H
#define SELLER_H

#include <QString>

class Seller
{
public:
    Seller();
    Seller(QString lastName, QString firstName, QString middleName, QString address);

    QString getLastName() const;
    QString getFirstName() const;
    QString getMiddleName() const;
    QString getAddress() const;
    int getId() const;

    void setLastName(const QString &value);
    void setFirstName(const QString &value);
    void setMiddleName(const QString &value);
    void setAddress(const QString &value);
    void setId(int value);

private:
    int id;
    QString lastName;
    QString firstName;
    QString middleName;
    QString address;
};

#endif // SELLER_H
