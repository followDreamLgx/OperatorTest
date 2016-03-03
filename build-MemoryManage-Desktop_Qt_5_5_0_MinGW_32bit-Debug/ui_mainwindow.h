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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *Memory;
    QTableWidget *Quest;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Again;
    QRadioButton *Worst;
    QRadioButton *LoopFit;
    QRadioButton *FirstFit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(868, 721);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Memory = new QTableWidget(centralWidget);
        if (Memory->columnCount() < 5)
            Memory->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (Memory->rowCount() < 10)
            Memory->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(9, __qtablewidgetitem14);
        Memory->setObjectName(QStringLiteral("Memory"));
        Memory->setGeometry(QRect(170, 70, 551, 331));
        Quest = new QTableWidget(centralWidget);
        if (Quest->columnCount() < 1)
            Quest->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        Quest->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        if (Quest->rowCount() < 10)
            Quest->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        Quest->setVerticalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        Quest->setVerticalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        Quest->setVerticalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        Quest->setVerticalHeaderItem(3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        Quest->setVerticalHeaderItem(4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        Quest->setVerticalHeaderItem(5, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        Quest->setVerticalHeaderItem(6, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        Quest->setVerticalHeaderItem(7, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        Quest->setVerticalHeaderItem(8, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        Quest->setVerticalHeaderItem(9, __qtablewidgetitem25);
        Quest->setObjectName(QStringLiteral("Quest"));
        Quest->setGeometry(QRect(10, 70, 141, 331));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Quest->sizePolicy().hasHeightForWidth());
        Quest->setSizePolicy(sizePolicy);
        Quest->setMaximumSize(QSize(16777215, 16777215));
        Quest->setAutoScroll(true);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 30, 284, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Again = new QPushButton(layoutWidget);
        Again->setObjectName(QStringLiteral("Again"));

        horizontalLayout->addWidget(Again);

        Worst = new QRadioButton(layoutWidget);
        Worst->setObjectName(QStringLiteral("Worst"));

        horizontalLayout->addWidget(Worst);

        LoopFit = new QRadioButton(layoutWidget);
        LoopFit->setObjectName(QStringLiteral("LoopFit"));

        horizontalLayout->addWidget(LoopFit);

        FirstFit = new QRadioButton(layoutWidget);
        FirstFit->setObjectName(QStringLiteral("FirstFit"));

        horizontalLayout->addWidget(FirstFit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 868, 23));
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
        QTableWidgetItem *___qtablewidgetitem = Memory->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\265\267\345\247\213\345\234\260\345\235\200", 0));
        QTableWidgetItem *___qtablewidgetitem1 = Memory->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\244\247\345\260\217", 0));
        QTableWidgetItem *___qtablewidgetitem2 = Memory->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\350\242\253\344\275\277\347\224\250", 0));
        QTableWidgetItem *___qtablewidgetitem3 = Memory->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\351\234\200\350\246\201\345\215\240\347\224\250\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem4 = Memory->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\267\262\347\273\217\345\215\240\347\224\250\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem5 = Memory->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", 0));
        QTableWidgetItem *___qtablewidgetitem6 = Memory->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", 0));
        QTableWidgetItem *___qtablewidgetitem7 = Memory->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", 0));
        QTableWidgetItem *___qtablewidgetitem8 = Memory->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", 0));
        QTableWidgetItem *___qtablewidgetitem9 = Memory->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", 0));
        QTableWidgetItem *___qtablewidgetitem10 = Memory->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", 0));
        QTableWidgetItem *___qtablewidgetitem11 = Memory->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", 0));
        QTableWidgetItem *___qtablewidgetitem12 = Memory->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", 0));
        QTableWidgetItem *___qtablewidgetitem13 = Memory->verticalHeaderItem(8);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", 0));
        QTableWidgetItem *___qtablewidgetitem14 = Memory->verticalHeaderItem(9);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", 0));
        QTableWidgetItem *___qtablewidgetitem15 = Quest->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\351\234\200\346\261\202", 0));
        QTableWidgetItem *___qtablewidgetitem16 = Quest->verticalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0));
        QTableWidgetItem *___qtablewidgetitem17 = Quest->verticalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0));
        QTableWidgetItem *___qtablewidgetitem18 = Quest->verticalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0));
        QTableWidgetItem *___qtablewidgetitem19 = Quest->verticalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0));
        QTableWidgetItem *___qtablewidgetitem20 = Quest->verticalHeaderItem(4);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0));
        QTableWidgetItem *___qtablewidgetitem21 = Quest->verticalHeaderItem(5);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0));
        QTableWidgetItem *___qtablewidgetitem22 = Quest->verticalHeaderItem(6);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0));
        QTableWidgetItem *___qtablewidgetitem23 = Quest->verticalHeaderItem(7);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0));
        QTableWidgetItem *___qtablewidgetitem24 = Quest->verticalHeaderItem(8);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0));
        QTableWidgetItem *___qtablewidgetitem25 = Quest->verticalHeaderItem(9);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "\350\257\267\346\261\202", 0));
        Again->setText(QApplication::translate("MainWindow", "Again", 0));
        Worst->setText(QApplication::translate("MainWindow", "Best", 0));
        LoopFit->setText(QApplication::translate("MainWindow", "LoopFit", 0));
        FirstFit->setText(QApplication::translate("MainWindow", "FirstFit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
