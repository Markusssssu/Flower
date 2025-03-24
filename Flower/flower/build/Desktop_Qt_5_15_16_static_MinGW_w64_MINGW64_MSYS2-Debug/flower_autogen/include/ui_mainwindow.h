/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *flowersTab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *flowerNameEdit;
    QLabel *label_2;
    QComboBox *flowerTypeCombo;
    QLabel *label_3;
    QLineEdit *flowerCountryEdit;
    QLabel *label_4;
    QLineEdit *flowerSeasonEdit;
    QLabel *label_5;
    QLineEdit *flowerVarietyEdit;
    QLabel *label_6;
    QLineEdit *flowerPriceEdit;
    QLabel *label_7;
    QComboBox *flowerSupplierCombo;
    QHBoxLayout *horizontalLayout;
    QPushButton *addFlowerButton;
    QPushButton *removeFlowerButton;
    QTableWidget *flowersTable;
    QWidget *suppliersTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QLineEdit *supplierLastNameEdit;
    QLabel *label_9;
    QLineEdit *supplierFirstNameEdit;
    QLabel *label_10;
    QLineEdit *supplierMiddleNameEdit;
    QLabel *label_11;
    QComboBox *supplierFacilityCombo;
    QLabel *label_12;
    QLineEdit *supplierAddressEdit;
    QPushButton *addSupplierButton;
    QTableWidget *suppliersTable;
    QWidget *sellersTab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *label_13;
    QLineEdit *sellerLastNameEdit;
    QLabel *label_14;
    QLineEdit *sellerFirstNameEdit;
    QLabel *label_15;
    QLineEdit *sellerMiddleNameEdit;
    QLabel *label_16;
    QLineEdit *sellerAddressEdit;
    QPushButton *addSellerButton;
    QTableWidget *sellersTable;
    QWidget *queriesTab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_17;
    QLineEdit *query1CountryEdit;
    QPushButton *query1Button;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *query2Button;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *query3Button;
    QTableWidget *queryResultTable;
    QPushButton *saveTableButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        flowersTab = new QWidget();
        flowersTab->setObjectName(QString::fromUtf8("flowersTab"));
        verticalLayout_2 = new QVBoxLayout(flowersTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(flowersTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        flowerNameEdit = new QLineEdit(groupBox);
        flowerNameEdit->setObjectName(QString::fromUtf8("flowerNameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, flowerNameEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        flowerTypeCombo = new QComboBox(groupBox);
        flowerTypeCombo->addItem(QString());
        flowerTypeCombo->addItem(QString());
        flowerTypeCombo->setObjectName(QString::fromUtf8("flowerTypeCombo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, flowerTypeCombo);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        flowerCountryEdit = new QLineEdit(groupBox);
        flowerCountryEdit->setObjectName(QString::fromUtf8("flowerCountryEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, flowerCountryEdit);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        flowerSeasonEdit = new QLineEdit(groupBox);
        flowerSeasonEdit->setObjectName(QString::fromUtf8("flowerSeasonEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, flowerSeasonEdit);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        flowerVarietyEdit = new QLineEdit(groupBox);
        flowerVarietyEdit->setObjectName(QString::fromUtf8("flowerVarietyEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, flowerVarietyEdit);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        flowerPriceEdit = new QLineEdit(groupBox);
        flowerPriceEdit->setObjectName(QString::fromUtf8("flowerPriceEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, flowerPriceEdit);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        flowerSupplierCombo = new QComboBox(groupBox);
        flowerSupplierCombo->setObjectName(QString::fromUtf8("flowerSupplierCombo"));

        formLayout->setWidget(6, QFormLayout::FieldRole, flowerSupplierCombo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addFlowerButton = new QPushButton(groupBox);
        addFlowerButton->setObjectName(QString::fromUtf8("addFlowerButton"));

        horizontalLayout->addWidget(addFlowerButton);

        removeFlowerButton = new QPushButton(groupBox);
        removeFlowerButton->setObjectName(QString::fromUtf8("removeFlowerButton"));

        horizontalLayout->addWidget(removeFlowerButton);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        flowersTable = new QTableWidget(flowersTab);
        flowersTable->setObjectName(QString::fromUtf8("flowersTable"));

        verticalLayout_2->addWidget(flowersTable);

        tabWidget->addTab(flowersTab, QString());
        suppliersTab = new QWidget();
        suppliersTab->setObjectName(QString::fromUtf8("suppliersTab"));
        verticalLayout_3 = new QVBoxLayout(suppliersTab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(suppliersTab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        supplierLastNameEdit = new QLineEdit(groupBox_2);
        supplierLastNameEdit->setObjectName(QString::fromUtf8("supplierLastNameEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, supplierLastNameEdit);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        supplierFirstNameEdit = new QLineEdit(groupBox_2);
        supplierFirstNameEdit->setObjectName(QString::fromUtf8("supplierFirstNameEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, supplierFirstNameEdit);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_10);

        supplierMiddleNameEdit = new QLineEdit(groupBox_2);
        supplierMiddleNameEdit->setObjectName(QString::fromUtf8("supplierMiddleNameEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, supplierMiddleNameEdit);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_11);

        supplierFacilityCombo = new QComboBox(groupBox_2);
        supplierFacilityCombo->addItem(QString());
        supplierFacilityCombo->addItem(QString());
        supplierFacilityCombo->addItem(QString());
        supplierFacilityCombo->setObjectName(QString::fromUtf8("supplierFacilityCombo"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, supplierFacilityCombo);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_12);

        supplierAddressEdit = new QLineEdit(groupBox_2);
        supplierAddressEdit->setObjectName(QString::fromUtf8("supplierAddressEdit"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, supplierAddressEdit);

        addSupplierButton = new QPushButton(groupBox_2);
        addSupplierButton->setObjectName(QString::fromUtf8("addSupplierButton"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, addSupplierButton);


        verticalLayout_3->addWidget(groupBox_2);

        suppliersTable = new QTableWidget(suppliersTab);
        suppliersTable->setObjectName(QString::fromUtf8("suppliersTable"));

        verticalLayout_3->addWidget(suppliersTable);

        tabWidget->addTab(suppliersTab, QString());
        sellersTab = new QWidget();
        sellersTab->setObjectName(QString::fromUtf8("sellersTab"));
        verticalLayout_4 = new QVBoxLayout(sellersTab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_3 = new QGroupBox(sellersTab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_13);

        sellerLastNameEdit = new QLineEdit(groupBox_3);
        sellerLastNameEdit->setObjectName(QString::fromUtf8("sellerLastNameEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, sellerLastNameEdit);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        sellerFirstNameEdit = new QLineEdit(groupBox_3);
        sellerFirstNameEdit->setObjectName(QString::fromUtf8("sellerFirstNameEdit"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, sellerFirstNameEdit);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_15);

        sellerMiddleNameEdit = new QLineEdit(groupBox_3);
        sellerMiddleNameEdit->setObjectName(QString::fromUtf8("sellerMiddleNameEdit"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, sellerMiddleNameEdit);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_16);

        sellerAddressEdit = new QLineEdit(groupBox_3);
        sellerAddressEdit->setObjectName(QString::fromUtf8("sellerAddressEdit"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, sellerAddressEdit);

        addSellerButton = new QPushButton(groupBox_3);
        addSellerButton->setObjectName(QString::fromUtf8("addSellerButton"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, addSellerButton);


        verticalLayout_4->addWidget(groupBox_3);

        sellersTable = new QTableWidget(sellersTab);
        sellersTable->setObjectName(QString::fromUtf8("sellersTable"));

        verticalLayout_4->addWidget(sellersTable);

        tabWidget->addTab(sellersTab, QString());
        queriesTab = new QWidget();
        queriesTab->setObjectName(QString::fromUtf8("queriesTab"));
        verticalLayout_5 = new QVBoxLayout(queriesTab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_4 = new QGroupBox(queriesTab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_2->addWidget(label_17);

        query1CountryEdit = new QLineEdit(groupBox_5);
        query1CountryEdit->setObjectName(QString::fromUtf8("query1CountryEdit"));

        horizontalLayout_2->addWidget(query1CountryEdit);

        query1Button = new QPushButton(groupBox_5);
        query1Button->setObjectName(QString::fromUtf8("query1Button"));

        horizontalLayout_2->addWidget(query1Button);


        verticalLayout_6->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        query2Button = new QPushButton(groupBox_6);
        query2Button->setObjectName(QString::fromUtf8("query2Button"));

        horizontalLayout_3->addWidget(query2Button);


        verticalLayout_6->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(groupBox_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        query3Button = new QPushButton(groupBox_7);
        query3Button->setObjectName(QString::fromUtf8("query3Button"));

        horizontalLayout_4->addWidget(query3Button);


        verticalLayout_6->addWidget(groupBox_7);


        verticalLayout_5->addWidget(groupBox_4);

        queryResultTable = new QTableWidget(queriesTab);
        queryResultTable->setObjectName(QString::fromUtf8("queryResultTable"));

        verticalLayout_5->addWidget(queryResultTable);

        saveTableButton = new QPushButton(queriesTab);
        saveTableButton->setObjectName(QString::fromUtf8("saveTableButton"));

        verticalLayout_5->addWidget(saveTableButton);

        tabWidget->addTab(queriesTab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\243\321\207\320\265\321\202 \321\206\320\262\320\265\321\202\320\276\320\262", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\206\320\262\320\265\321\202\320\276\320\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277:", nullptr));
        flowerTypeCombo->setItemText(0, QCoreApplication::translate("MainWindow", "\321\201\320\260\320\264\320\276\320\262\321\213\320\271", nullptr));
        flowerTypeCombo->setItemText(1, QCoreApplication::translate("MainWindow", "\320\272\320\276\320\274\320\275\320\260\321\202\320\275\321\213\320\271", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\260:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\320\267\320\276\320\275 \321\206\320\262\320\265\321\202\320\265\320\275\320\270\321\217:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272:", nullptr));
        addFlowerButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        removeFlowerButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(flowersTab), QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202\321\213", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\320\276\320\274\320\265\321\211\320\265\320\275\320\270\321\217:", nullptr));
        supplierFacilityCombo->setItemText(0, QCoreApplication::translate("MainWindow", "\321\202\320\265\320\277\320\273\320\270\321\206\320\260", nullptr));
        supplierFacilityCombo->setItemText(1, QCoreApplication::translate("MainWindow", "\320\276\321\200\320\260\320\275\320\266\320\265\321\200\320\265\321\217", nullptr));
        supplierFacilityCombo->setItemText(2, QCoreApplication::translate("MainWindow", "\320\276\321\202\320\272\321\200\321\213\321\202\321\213\320\271 \320\263\321\200\321\203\320\275\321\202", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201:", nullptr));
        addSupplierButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(suppliersTab), QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\270", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\200\320\276\320\264\320\260\320\262\321\206\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201:", nullptr));
        addSellerButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sellersTab), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\260\320\262\321\206\321\213", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\200\320\276\321\201\321\213", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "1. \320\246\320\262\320\265\321\202\321\213 \320\277\320\276 \321\201\321\202\321\200\320\260\320\275\320\265", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\260:", nullptr));
        query1Button->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "2. \320\237\321\200\320\276\320\264\320\260\320\262\321\206\321\213 \321\201\320\260\320\274\321\213\321\205 \320\264\320\276\321\200\320\276\320\263\320\270\321\205 \321\206\320\262\320\265\321\202\320\276\320\262", nullptr));
        query2Button->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "3. \320\237\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\270 \321\202\320\265\320\277\320\273\320\270\321\207\320\275\321\213\321\205 \321\206\320\262\320\265\321\202\320\276\320\262", nullptr));
        query3Button->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        saveTableButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(queriesTab), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\200\320\276\321\201\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
