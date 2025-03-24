#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Настройка таблиц
    ui->flowersTable->setColumnCount(7);
    ui->flowersTable->setHorizontalHeaderLabels({"ID", "Название", "Тип", "Страна", "Сезон", "Сорт", "Цена"});

    ui->suppliersTable->setColumnCount(6);
    ui->suppliersTable->setHorizontalHeaderLabels({"ID", "Фамилия", "Имя", "Отчество", "Тип помещения", "Адрес"});

    ui->sellersTable->setColumnCount(5);
    ui->sellersTable->setHorizontalHeaderLabels({"ID", "Фамилия", "Имя", "Отчество", "Адрес"});

    ui->queryResultTable->setColumnCount(1);
    ui->queryResultTable->setHorizontalHeaderLabels({"Результат"});

    // Пример начальных данных
    suppliers.append(Supplier("Иванов", "Иван", "Иванович", "теплица", "ул. Садовая, 1"));
    suppliers.append(Supplier("Петров", "Петр", "Петрович", "оранжерея", "ул. Цветочная, 5"));
    suppliers.append(Supplier("Сидоров", "Сидор", "Сидорович", "открытый грунт", "ул. Полевая, 10"));

    sellers.append(Seller("Кузнецова", "Анна", "Сергеевна", "ул. Торговая, 3"));
    sellers.append(Seller("Смирнов", "Дмитрий", "Васильевич", "ул. Розовая, 7"));

    flowers.append(Flower("Роза", "садовый", "Нидерланды", "лето", "Гран При", 150.0, 1));
    flowers.append(Flower("Орхидея", "комнатный", "Таиланд", "весна", "Фаленопсис", 200.0, 2));
    flowers.append(Flower("Тюльпан", "садовый", "Нидерланды", "весна", "Красный", 80.0, 1));
    flowers.append(Flower("Фиалка", "комнатный", "Россия", "круглый год", "Узамбарская", 50.0, 3));

    updateFlowersTable();
    updateSuppliersTable();
    updateSellersTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateFlowersTable()
{
    ui->flowersTable->setRowCount(0);
    for (const Flower &flower : flowers) {
        int row = ui->flowersTable->rowCount();
        ui->flowersTable->insertRow(row);

        ui->flowersTable->setItem(row, 0, new QTableWidgetItem(QString::number(flowerIdCounter)));
        ui->flowersTable->setItem(row, 1, new QTableWidgetItem(flower.getName()));
        ui->flowersTable->setItem(row, 2, new QTableWidgetItem(flower.getType()));
        ui->flowersTable->setItem(row, 3, new QTableWidgetItem(flower.getCountry()));
        ui->flowersTable->setItem(row, 4, new QTableWidgetItem(flower.getSeason()));
        ui->flowersTable->setItem(row, 5, new QTableWidgetItem(flower.getVariety()));
        ui->flowersTable->setItem(row, 6, new QTableWidgetItem(QString::number(flower.getPrice())));
    }
}

void MainWindow::updateSuppliersTable()
{
    ui->suppliersTable->setRowCount(0);
    for (const Supplier &supplier : suppliers) {
        int row = ui->suppliersTable->rowCount();
        ui->suppliersTable->insertRow(row);

        ui->suppliersTable->setItem(row, 0, new QTableWidgetItem(QString::number(supplier.getId())));
        ui->suppliersTable->setItem(row, 1, new QTableWidgetItem(supplier.getLastName()));
        ui->suppliersTable->setItem(row, 2, new QTableWidgetItem(supplier.getFirstName()));
        ui->suppliersTable->setItem(row, 3, new QTableWidgetItem(supplier.getMiddleName()));
        ui->suppliersTable->setItem(row, 4, new QTableWidgetItem(supplier.getFacilityType()));
        ui->suppliersTable->setItem(row, 5, new QTableWidgetItem(supplier.getAddress()));
    }
}

void MainWindow::updateSellersTable()
{
    ui->sellersTable->setRowCount(0);
    for (const Seller &seller : sellers) {
        int row = ui->sellersTable->rowCount();
        ui->sellersTable->insertRow(row);

        ui->sellersTable->setItem(row, 0, new QTableWidgetItem(QString::number(seller.getId())));
        ui->sellersTable->setItem(row, 1, new QTableWidgetItem(seller.getLastName()));
        ui->sellersTable->setItem(row, 2, new QTableWidgetItem(seller.getFirstName()));
        ui->sellersTable->setItem(row, 3, new QTableWidgetItem(seller.getMiddleName()));
        ui->sellersTable->setItem(row, 4, new QTableWidgetItem(seller.getAddress()));
    }
}

void MainWindow::on_addFlowerButton_clicked()
{
    QString name = ui->flowerNameEdit->text();
    QString type = ui->flowerTypeCombo->currentText();
    QString country = ui->flowerCountryEdit->text();
    QString season = ui->flowerSeasonEdit->text();
    QString variety = ui->flowerVarietyEdit->text();
    double price = ui->flowerPriceEdit->text().toDouble();
    int supplierId = ui->flowerSupplierCombo->currentData().toInt();

    if (name.isEmpty() || country.isEmpty() || season.isEmpty() || variety.isEmpty() || price <= 0) {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля для цветка");
        return;
    }

    flowers.append(Flower(name, type, country, season, variety, price, supplierId));
    flowerIdCounter++;
    updateFlowersTable();

    // Очистка полей
    ui->flowerNameEdit->clear();
    ui->flowerCountryEdit->clear();
    ui->flowerSeasonEdit->clear();
    ui->flowerVarietyEdit->clear();
    ui->flowerPriceEdit->clear();
}

void MainWindow::on_removeFlowerButton_clicked()
{
    int row = ui->flowersTable->currentRow();
    if (row == -1) {
        QMessageBox::warning(this, "Ошибка", "Выберите цветок для удаления");
        return;
    }

    flowers.removeAt(row);
    updateFlowersTable();
}

void MainWindow::on_addSupplierButton_clicked()
{
    QString lastName = ui->supplierLastNameEdit->text();
    QString firstName = ui->supplierFirstNameEdit->text();
    QString middleName = ui->supplierMiddleNameEdit->text();
    QString facilityType = ui->supplierFacilityCombo->currentText();
    QString address = ui->supplierAddressEdit->text();

    if (lastName.isEmpty() || firstName.isEmpty() || address.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните обязательные поля для поставщика");
        return;
    }

    Supplier newSupplier(lastName, firstName, middleName, facilityType, address);
    newSupplier.setId(supplierIdCounter);
    suppliers.append(newSupplier);
    supplierIdCounter++;
    updateSuppliersTable();

    // Обновляем комбо-бокс с поставщиками
    ui->flowerSupplierCombo->clear();
    for (const Supplier &supplier : suppliers) {
        ui->flowerSupplierCombo->addItem(
            QString("%1 %2.%3.").arg(supplier.getLastName())
                .arg(supplier.getFirstName().left(1))
                .arg(supplier.getMiddleName().left(1)),
            supplier.getId());
    }

    // Очистка полей
    ui->supplierLastNameEdit->clear();
    ui->supplierFirstNameEdit->clear();
    ui->supplierMiddleNameEdit->clear();
    ui->supplierAddressEdit->clear();
}

void MainWindow::on_addSellerButton_clicked()
{
    QString lastName = ui->sellerLastNameEdit->text();
    QString firstName = ui->sellerFirstNameEdit->text();
    QString middleName = ui->sellerMiddleNameEdit->text();
    QString address = ui->sellerAddressEdit->text();

    if (lastName.isEmpty() || firstName.isEmpty() || address.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните обязательные поля для продавца");
        return;
    }

    Seller newSeller(lastName, firstName, middleName, address);
    newSeller.setId(sellerIdCounter);
    sellers.append(newSeller);
    sellerIdCounter++;
    updateSellersTable();

    // Очистка полей
    ui->sellerLastNameEdit->clear();
    ui->sellerFirstNameEdit->clear();
    ui->sellerMiddleNameEdit->clear();
    ui->sellerAddressEdit->clear();
}

void MainWindow::on_query1Button_clicked()
{
    QString country = ui->query1CountryEdit->text();
    if (country.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите страну для поиска");
        return;
    }

    QList<QStringList> result;
    for (const Flower &flower : flowers) {
        if (flower.getCountry().toLower() == country.toLower()) {
            QStringList row;
            row << flower.getName() << flower.getType() << flower.getCountry()
                << flower.getSeason() << flower.getVariety() << QString::number(flower.getPrice());
            result.append(row);
        }
    }

    if (result.isEmpty()) {
        QMessageBox::information(this, "Результат", "Цветы из указанной страны не найдены");
        return;
    }

    showQueryResult(result, {"Название", "Тип", "Страна", "Сезон", "Сорт", "Цена"});
}

void MainWindow::on_query2Button_clicked()
{
    if (flowers.isEmpty()) {
        QMessageBox::information(this, "Результат", "Нет данных о цветах");
        return;
    }

    // Находим максимальную цену
    double maxPrice = 0;
    for (const Flower &flower : flowers) {
        if (flower.getPrice() > maxPrice) {
            maxPrice = flower.getPrice();
        }
    }

    // Находим продавцов этих цветов (в реальном приложении нужно связывать цветы с продавцами)
    QList<QStringList> result;
    for (const Seller &seller : sellers) {
        QStringList row;
        row << seller.getLastName() << seller.getFirstName() << seller.getMiddleName() << seller.getAddress();
        result.append(row);
    }

    if (result.isEmpty()) {
        QMessageBox::information(this, "Результат", "Продавцы самых дорогих цветов не найдены");
        return;
    }

    showQueryResult(result, {"Фамилия", "Имя", "Отчество", "Адрес"});
}

void MainWindow::on_query3Button_clicked()
{
    QList<QStringList> result;
    for (const Supplier &supplier : suppliers) {
        if (supplier.getFacilityType().toLower() == "теплица") {
            QStringList row;
            row << supplier.getLastName() << supplier.getFirstName() << supplier.getMiddleName()
                << supplier.getFacilityType() << supplier.getAddress();
            result.append(row);
        }
    }

    if (result.isEmpty()) {
        QMessageBox::information(this, "Результат", "Поставщики тепличных цветов не найдены");
        return;
    }

    showQueryResult(result, {"Фамилия", "Имя", "Отчество", "Тип помещения", "Адрес"});
}

void MainWindow::showQueryResult(const QList<QStringList> &data, const QStringList &headers)
{
    ui->queryResultTable->clear();
    ui->queryResultTable->setColumnCount(headers.size());
    ui->queryResultTable->setHorizontalHeaderLabels(headers);
    ui->queryResultTable->setRowCount(0);

    for (const QStringList &row : data) {
        int newRow = ui->queryResultTable->rowCount();
        ui->queryResultTable->insertRow(newRow);

        for (int col = 0; col < row.size(); ++col) {
            ui->queryResultTable->setItem(newRow, col, new QTableWidgetItem(row[col]));
        }
    }
}

void MainWindow::on_saveTableButton_clicked()
{
    if (ui->queryResultTable->rowCount() == 0) {
        QMessageBox::warning(this, "Ошибка", "Нет данных для сохранения");
        return;
    }

    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить таблицу", "", "Текстовые файлы (*.txt)");
    if (fileName.isEmpty()) {
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл для записи");
        return;
    }

    QTextStream out(&file);

    // Заголовки
    QStringList headers;
    for (int col = 0; col < ui->queryResultTable->columnCount(); ++col) {
        headers << ui->queryResultTable->horizontalHeaderItem(col)->text();
    }
    out << headers.join("\t") << "\n";

    // Данные
    for (int row = 0; row < ui->queryResultTable->rowCount(); ++row) {
        QStringList rowData;
        for (int col = 0; col < ui->queryResultTable->columnCount(); ++col) {
            QTableWidgetItem *item = ui->queryResultTable->item(row, col);
            rowData << (item ? item->text() : "");
        }
        out << rowData.join("\t") << "\n";
    }

    file.close();
    QMessageBox::information(this, "Успех", "Таблица успешно сохранена");
}
