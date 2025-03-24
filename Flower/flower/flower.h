#ifndef FLOWER_H
#define FLOWER_H

#include <QString>

class Flower
{
public:
    Flower();
    Flower(QString name, QString type, QString country, QString season, QString variety, double price, int supplierId);

    QString getName() const;
    QString getType() const;
    QString getCountry() const;
    QString getSeason() const;
    QString getVariety() const;
    double getPrice() const;
    int getSupplierId() const;

    void setName(const QString &value);
    void setType(const QString &value);
    void setCountry(const QString &value);
    void setSeason(const QString &value);
    void setVariety(const QString &value);
    void setPrice(double value);
    void setSupplierId(int value);

private:
    QString name;
    QString type; // садовый или комнатный
    QString country;
    QString season;
    QString variety; // сорт
    double price;
    int supplierId;
};

#endif // FLOWER_H
