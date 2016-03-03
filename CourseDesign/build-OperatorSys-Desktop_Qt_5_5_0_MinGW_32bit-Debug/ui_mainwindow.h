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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QTableWidget *ExternalMemory;
    QPushButton *pushButton_2;
    QTableWidget *Memory;
    QTableWidget *SourseTable;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *FCFS;
    QRadioButton *SJF;
    QRadioButton *PAS;
    QTableWidget *CPU;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *MoreJob;
    QRadioButton *Single;
    QRadioButton *MultipassSys;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *FCFSPRO;
    QRadioButton *SJFPRO;
    QRadioButton *PASPRO;
    QRadioButton *TUREPRO;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(985, 722);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 10, 691, 441));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        ExternalMemory = new QTableWidget(layoutWidget);
        if (ExternalMemory->columnCount() < 6)
            ExternalMemory->setColumnCount(6);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ExternalMemory->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (ExternalMemory->rowCount() < 7)
            ExternalMemory->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        ExternalMemory->setVerticalHeaderItem(6, __qtablewidgetitem12);
        ExternalMemory->setObjectName(QStringLiteral("ExternalMemory"));

        verticalLayout->addWidget(ExternalMemory);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        Memory = new QTableWidget(layoutWidget);
        if (Memory->columnCount() < 6)
            Memory->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        Memory->setHorizontalHeaderItem(5, __qtablewidgetitem18);
        if (Memory->rowCount() < 7)
            Memory->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(5, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        Memory->setVerticalHeaderItem(6, __qtablewidgetitem25);
        Memory->setObjectName(QStringLiteral("Memory"));

        verticalLayout->addWidget(Memory);

        SourseTable = new QTableWidget(centralWidget);
        if (SourseTable->columnCount() < 1)
            SourseTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        SourseTable->setHorizontalHeaderItem(0, __qtablewidgetitem26);
        if (SourseTable->rowCount() < 2)
            SourseTable->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        SourseTable->setVerticalHeaderItem(0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        SourseTable->setVerticalHeaderItem(1, __qtablewidgetitem28);
        SourseTable->setObjectName(QStringLiteral("SourseTable"));
        SourseTable->setGeometry(QRect(670, 550, 161, 91));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(740, 60, 97, 62));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        FCFS = new QRadioButton(layoutWidget1);
        FCFS->setObjectName(QStringLiteral("FCFS"));

        verticalLayout_3->addWidget(FCFS);

        SJF = new QRadioButton(layoutWidget1);
        SJF->setObjectName(QStringLiteral("SJF"));

        verticalLayout_3->addWidget(SJF);

        PAS = new QRadioButton(layoutWidget1);
        PAS->setObjectName(QStringLiteral("PAS"));

        verticalLayout_3->addWidget(PAS);

        CPU = new QTableWidget(centralWidget);
        if (CPU->columnCount() < 6)
            CPU->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        CPU->setHorizontalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        CPU->setHorizontalHeaderItem(1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        CPU->setHorizontalHeaderItem(2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        CPU->setHorizontalHeaderItem(3, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        CPU->setHorizontalHeaderItem(4, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        CPU->setHorizontalHeaderItem(5, __qtablewidgetitem34);
        if (CPU->rowCount() < 1)
            CPU->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        CPU->setVerticalHeaderItem(0, __qtablewidgetitem35);
        CPU->setObjectName(QStringLiteral("CPU"));
        CPU->setGeometry(QRect(40, 470, 691, 61));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(740, 140, 97, 137));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        MoreJob = new QPushButton(layoutWidget2);
        MoreJob->setObjectName(QStringLiteral("MoreJob"));

        verticalLayout_2->addWidget(MoreJob);

        Single = new QRadioButton(layoutWidget2);
        Single->setObjectName(QStringLiteral("Single"));

        verticalLayout_2->addWidget(Single);

        MultipassSys = new QRadioButton(layoutWidget2);
        MultipassSys->setObjectName(QStringLiteral("MultipassSys"));

        verticalLayout_2->addWidget(MultipassSys);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(740, 290, 91, 84));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        FCFSPRO = new QRadioButton(layoutWidget3);
        FCFSPRO->setObjectName(QStringLiteral("FCFSPRO"));

        verticalLayout_4->addWidget(FCFSPRO);

        SJFPRO = new QRadioButton(layoutWidget3);
        SJFPRO->setObjectName(QStringLiteral("SJFPRO"));

        verticalLayout_4->addWidget(SJFPRO);

        PASPRO = new QRadioButton(layoutWidget3);
        PASPRO->setObjectName(QStringLiteral("PASPRO"));

        verticalLayout_4->addWidget(PASPRO);

        TUREPRO = new QRadioButton(centralWidget);
        TUREPRO->setObjectName(QStringLiteral("TUREPRO"));
        TUREPRO->setGeometry(QRect(580, 580, 89, 16));
        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        SourseTable->raise();
        CPU->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        TUREPRO->raise();
        SJFPRO->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 985, 23));
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
        pushButton->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\232", 0));
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
        QTableWidgetItem *___qtablewidgetitem5 = ExternalMemory->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\344\274\230\345\205\210\347\272\247", 0));
        QTableWidgetItem *___qtablewidgetitem6 = ExternalMemory->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2321", 0));
        QTableWidgetItem *___qtablewidgetitem7 = ExternalMemory->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2322", 0));
        QTableWidgetItem *___qtablewidgetitem8 = ExternalMemory->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2323", 0));
        QTableWidgetItem *___qtablewidgetitem9 = ExternalMemory->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2324", 0));
        QTableWidgetItem *___qtablewidgetitem10 = ExternalMemory->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2325", 0));
        QTableWidgetItem *___qtablewidgetitem11 = ExternalMemory->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2326", 0));
        QTableWidgetItem *___qtablewidgetitem12 = ExternalMemory->verticalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\2327", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\213", 0));
        QTableWidgetItem *___qtablewidgetitem13 = Memory->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\232\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem14 = Memory->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\345\206\205\345\255\230", 0));
        QTableWidgetItem *___qtablewidgetitem15 = Memory->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\347\243\201\345\270\246\346\234\272", 0));
        QTableWidgetItem *___qtablewidgetitem16 = Memory->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem17 = Memory->horizontalHeaderItem(4);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\345\267\262\347\273\217\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem18 = Memory->horizontalHeaderItem(5);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\344\274\230\345\205\210\347\272\247", 0));
        QTableWidgetItem *___qtablewidgetitem19 = Memory->verticalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2131", 0));
        QTableWidgetItem *___qtablewidgetitem20 = Memory->verticalHeaderItem(1);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2132", 0));
        QTableWidgetItem *___qtablewidgetitem21 = Memory->verticalHeaderItem(2);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2133", 0));
        QTableWidgetItem *___qtablewidgetitem22 = Memory->verticalHeaderItem(3);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2134", 0));
        QTableWidgetItem *___qtablewidgetitem23 = Memory->verticalHeaderItem(4);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2135", 0));
        QTableWidgetItem *___qtablewidgetitem24 = Memory->verticalHeaderItem(5);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2136", 0));
        QTableWidgetItem *___qtablewidgetitem25 = Memory->verticalHeaderItem(6);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "\350\277\233\347\250\2137", 0));
        QTableWidgetItem *___qtablewidgetitem26 = SourseTable->horizontalHeaderItem(0);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\350\265\204\346\272\220", 0));
        QTableWidgetItem *___qtablewidgetitem27 = SourseTable->verticalHeaderItem(0);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\351\207\217", 0));
        QTableWidgetItem *___qtablewidgetitem28 = SourseTable->verticalHeaderItem(1);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "\347\243\201\345\270\246\346\234\272\351\207\217", 0));
        FCFS->setText(QApplication::translate("MainWindow", "FCFS", 0));
        SJF->setText(QApplication::translate("MainWindow", "SJF", 0));
        PAS->setText(QApplication::translate("MainWindow", "PAS", 0));
        QTableWidgetItem *___qtablewidgetitem29 = CPU->horizontalHeaderItem(0);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "\344\275\234\344\270\232\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem30 = CPU->horizontalHeaderItem(1);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\345\206\205\345\255\230", 0));
        QTableWidgetItem *___qtablewidgetitem31 = CPU->horizontalHeaderItem(2);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\347\243\201\345\270\246\346\234\272", 0));
        QTableWidgetItem *___qtablewidgetitem32 = CPU->horizontalHeaderItem(3);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "\346\211\200\351\234\200\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem33 = CPU->horizontalHeaderItem(4);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "\345\267\262\347\273\217\350\277\220\350\241\214\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem34 = CPU->horizontalHeaderItem(5);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "\344\274\230\345\205\210\347\272\247", 0));
        QTableWidgetItem *___qtablewidgetitem35 = CPU->verticalHeaderItem(0);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "CPU", 0));
        MoreJob->setText(QApplication::translate("MainWindow", "MoreJob", 0));
        Single->setText(QApplication::translate("MainWindow", "SingleSys", 0));
        MultipassSys->setText(QApplication::translate("MainWindow", "MultipassSys", 0));
        FCFSPRO->setText(QApplication::translate("MainWindow", "FCFSPRO", 0));
        SJFPRO->setText(QApplication::translate("MainWindow", "SJFPRO", 0));
        PASPRO->setText(QApplication::translate("MainWindow", "PASPRO", 0));
        TUREPRO->setText(QApplication::translate("MainWindow", "\346\261\237\346\231\223\351\212\256", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
