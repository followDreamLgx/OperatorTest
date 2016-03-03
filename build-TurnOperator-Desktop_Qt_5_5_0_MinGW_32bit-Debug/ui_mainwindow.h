/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *memoryWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *Turn;
    QRadioButton *DynatisPower;
    QRadioButton *radioButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(721, 375);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        memoryWidget = new QTableWidget(centralWidget);
        if (memoryWidget->columnCount() < 5)
            memoryWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        memoryWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        memoryWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        memoryWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        memoryWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        memoryWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (memoryWidget->rowCount() < 8)
            memoryWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        memoryWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        memoryWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        memoryWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        memoryWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        memoryWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        memoryWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        memoryWidget->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        memoryWidget->setVerticalHeaderItem(7, __qtablewidgetitem12);
        memoryWidget->setObjectName(QStringLiteral("memoryWidget"));
        memoryWidget->setGeometry(QRect(30, 20, 561, 291));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(600, 60, 97, 62));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Turn = new QRadioButton(widget);
        Turn->setObjectName(QStringLiteral("Turn"));

        verticalLayout->addWidget(Turn);

        DynatisPower = new QRadioButton(widget);
        DynatisPower->setObjectName(QStringLiteral("DynatisPower"));

        verticalLayout->addWidget(DynatisPower);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 721, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = memoryWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\232\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = memoryWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\345\206\205\345\255\230", 0));
        QTableWidgetItem *___qtablewidgetitem2 = memoryWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem3 = memoryWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\267\262\347\273\217\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem4 = memoryWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\344\274\230\345\205\210\346\235\203", 0));
        QTableWidgetItem *___qtablewidgetitem5 = memoryWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2131", 0));
        QTableWidgetItem *___qtablewidgetitem6 = memoryWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2132", 0));
        QTableWidgetItem *___qtablewidgetitem7 = memoryWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2133", 0));
        QTableWidgetItem *___qtablewidgetitem8 = memoryWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2134", 0));
        QTableWidgetItem *___qtablewidgetitem9 = memoryWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2135", 0));
        QTableWidgetItem *___qtablewidgetitem10 = memoryWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2136", 0));
        QTableWidgetItem *___qtablewidgetitem11 = memoryWidget->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2137", 0));
        QTableWidgetItem *___qtablewidgetitem12 = memoryWidget->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2138", 0));
        Turn->setText(QApplication::translate("MainWindow", "Turn", 0));
        DynatisPower->setText(QApplication::translate("MainWindow", "DynatisPower", 0));
        radioButton->setText(QApplication::translate("MainWindow", "MultiQueue", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
