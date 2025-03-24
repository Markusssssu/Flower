#include "seller.h"

Seller::Seller() : id(0) {}

Seller::Seller(QString lastName, QString firstName, QString middleName, QString address) :
    lastName(lastName), firstName(firstName), middleName(middleName), address(address) {}

QString Seller::getLastName() const { return lastName; }
QString Seller::getFirstName() const { return firstName; }
QString Seller::getMiddleName() const { return middleName; }
QString Seller::getAddress() const { return address; }
int Seller::getId() const { return id; }

void Seller::setLastName(const QString &value) { lastName = value; }
void Seller::setFirstName(const QString &value) { firstName = value; }
void Seller::setMiddleName(const QString &value) { middleName = value; }
void Seller::setAddress(const QString &value) { address = value; }
void Seller::setId(int value) { id = value; }
