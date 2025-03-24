#include "flower.h"

Flower::Flower() : price(0), supplierId(0) {}

Flower::Flower(QString name, QString type, QString country, QString season, QString variety, double price, int supplierId) :
    name(name), type(type), country(country), season(season), variety(variety), price(price), supplierId(supplierId) {}

QString Flower::getName() const { return name; }
QString Flower::getType() const { return type; }
QString Flower::getCountry() const { return country; }
QString Flower::getSeason() const { return season; }
QString Flower::getVariety() const { return variety; }
double Flower::getPrice() const { return price; }
int Flower::getSupplierId() const { return supplierId; }

void Flower::setName(const QString &value) { name = value; }
void Flower::setType(const QString &value) { type = value; }
void Flower::setCountry(const QString &value) { country = value; }
void Flower::setSeason(const QString &value) { season = value; }
void Flower::setVariety(const QString &value) { variety = value; }
void Flower::setPrice(double value) { price = value; }
void Flower::setSupplierId(int value) { supplierId = value; }
