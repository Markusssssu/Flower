#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <QString>

class Supplier
{
public:
    Supplier();
    Supplier(QString lastName, QString firstName, QString middleName, QString facilityType, QString address);

    QString getLastName() const;
    QString getFirstName() const;
    QString getMiddleName() const;
    QString getFacilityType() const;
    QString getAddress() const;
    int getId() const;

    void setLastName(const QString &value);
    void setFirstName(const QString &value);
    void setMiddleName(const QString &value);
    void setFacilityType(const QString &value);
    void setAddress(const QString &value);
    void setId(int value);

private:
    int id;
    QString lastName;
    QString firstName;
    QString middleName;
    QString facilityType; // теплица, оранжерея, открытый грунт
    QString address;
};

#endif // SUPPLIER_H
