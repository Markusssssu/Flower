#include "supplier.h"

Supplier::Supplier() : id(0) {}

Supplier::Supplier(QString lastName, QString firstName, QString middleName, QString facilityType, QString address) :
    lastName(lastName), firstName(firstName), middleName(middleName), facilityType(facilityType), address(address) {}

QString Supplier::getLastName() const { return lastName; }
QString Supplier::getFirstName() const { return firstName; }
QString Supplier::getMiddleName() const { return middleName; }
QString Supplier::getFacilityType() const { return facilityType; }
QString Supplier::getAddress() const { return address; }
int Supplier::getId() const { return id; }

void Supplier::setLastName(const QString &value) { lastName = value; }
void Supplier::setFirstName(const QString &value) { firstName = value; }
void Supplier::setMiddleName(const QString &value) { middleName = value; }
void Supplier::setFacilityType(const QString &value) { facilityType = value; }
void Supplier::setAddress(const QString &value) { address = value; }
void Supplier::setId(int value) { id = value; }
