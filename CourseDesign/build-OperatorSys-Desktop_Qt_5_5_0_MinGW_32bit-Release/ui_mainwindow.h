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
#include <QtWidgets/QPushButton>
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
    QPushButton *MoreJob;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableWidget *ExternalMemory;
    QTableWidget *Memory;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(818, 661);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MoreJob = new QPushButton(centralWidget);
        MoreJob->setObjectName(QStringLiteral("MoreJob"));
        MoreJob->setGeometry(QRect(640, 220, 75, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 571, 441));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ExternalMemory = new QTableWidget(widget);
        if (ExternalMemory->columnCount() < 5)
            ExternalMemory->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ExternalMemory->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ExternalMemory->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ExternalMemory->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ExternalMemory->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ExternalMemory->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (ExternalMemory->rowCount() < 7)
            ExternalMemory->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(6, __qtablewidgetitem11);
        ExternalMemory->setObjectName(QStringLiteral("ExternalMemory"));

        verticalLayout->addWidget(ExternalMemory);

        Memory = new QTableWidget(widget);
        if (Memory->columnCount() < 5)
            Memory->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(4, __qtablewidgetitem16);
        if (Memory->rowCount() < 7)
            Memory->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(6, __qtablewidgetitem23);
        Memory->setObjectName(QStringLiteral("Memory"));

        verticalLayout->addWidget(Memory);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 818, 23));
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
        MoreJob->setText(QApplication::translate("MainWindow", "MoreJob", 0));
        QTableWidgetItem *___qtablewidgetitem = ExternalMemory->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\232\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = ExternalMemory->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\345\206\205\345\255\230", 0));
        QTableWidgetItem *___qtablewidgetitem2 = ExternalMemory->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\347\243\201\345\270\246\346\234\272", 0));
        QTableWidgetItem *___qtablewidgetitem3 = ExternalMemory->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem4 = ExternalMemory->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\210\260\350\276\276\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem5 = ExternalMemory->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2321", 0));
        QTableWidgetItem *___qtablewidgetitem6 = ExternalMemory->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2322", 0));
        QTableWidgetItem *___qtablewidgetitem7 = ExternalMemory->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2323", 0));
        QTableWidgetItem *___qtablewidgetitem8 = ExternalMemory->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2324", 0));
        QTableWidgetItem *___qtablewidgetitem9 = ExternalMemory->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2325", 0));
        QTableWidgetItem *___qtablewidgetitem10 = ExternalMemory->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2326", 0));
        QTableWidgetItem *___qtablewidgetitem11 = ExternalMemory->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2327", 0));
        QTableWidgetItem *___qtablewidgetitem12 = Memory->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\232\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem13 = Memory->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\345\206\205\345\255\230", 0));
        QTableWidgetItem *___qtablewidgetitem14 = Memory->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\347\243\201\345\270\246\346\234\272", 0));
        QTableWidgetItem *___qtablewidgetitem15 = Memory->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem16 = Memory->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\345\267\262\347\273\217\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem17 = Memory->verticalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2131", 0));
        QTableWidgetItem *___qtablewidgetitem18 = Memory->verticalHeaderItem(1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2132", 0));
        QTableWidgetItem *___qtablewidgetitem19 = Memory->verticalHeaderItem(2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2133", 0));
        QTableWidgetItem *___qtablewidgetitem20 = Memory->verticalHeaderItem(3);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2134", 0));
        QTableWidgetItem *___qtablewidgetitem21 = Memory->verticalHeaderItem(4);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2135", 0));
        QTableWidgetItem *___qtablewidgetitem22 = Memory->verticalHeaderItem(5);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2136", 0));
        QTableWidgetItem *___qtablewidgetitem23 = Memory->verticalHeaderItem(6);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2137", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
