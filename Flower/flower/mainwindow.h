#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "flower.h"
#include "supplier.h"
#include "seller.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addFlowerButton_clicked();
    void on_removeFlowerButton_clicked();
    void on_addSupplierButton_clicked();
    void on_addSellerButton_clicked();
    void on_query1Button_clicked();
    void on_query2Button_clicked();
    void on_query3Button_clicked();
    void on_saveTableButton_clicked();

private:
    Ui::MainWindow *ui;
    QList<Flower> flowers;
    QList<Supplier> suppliers;
    QList<Seller> sellers;
    int flowerIdCounter = 1;
    int supplierIdCounter = 1;
    int sellerIdCounter = 1;

    void updateFlowersTable();
    void updateSuppliersTable();
    void updateSellersTable();
    void showQueryResult(const QList<QStringList> &data, const QStringList &headers);
    void saveTableToFile(const QList<QStringList> &data, const QStringList &headers);
};

#endif // MAINWINDOW_H
