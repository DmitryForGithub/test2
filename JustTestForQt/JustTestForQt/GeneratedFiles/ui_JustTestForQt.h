/********************************************************************************
** Form generated from reading UI file 'JustTestForQt.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUSTTESTFORQT_H
#define UI_JUSTTESTFORQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JustTestForQtClass
{
public:
    QAction *actiontab_1;
    QAction *actiontab_2;
    QAction *actiontab_3;
    QAction *actiontab_4;
    QAction *actiontab_5;
    QWidget *centralWidget;
    QGridLayout *gridLayout_8;
    QTabWidget *tabWidget;
    QWidget *tab_6;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_startFor1;
    QPushButton *pushButton_pauseFor1;
    QPushButton *pushButton_stopFor1;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QLCDNumber *lcdNumber;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_startFor2;
    QPushButton *pushButton_pauseFor2;
    QPushButton *pushButton_restart;
    QPushButton *pushButton_stopFor2;
    QWidget *tab_3;
    QGridLayout *gridLayout_11;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_9;
    QLabel *label_2;
    QLineEdit *lineEdit_min;
    QLabel *label_3;
    QLineEdit *lineEdit_max;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_10;
    QLabel *label_4;
    QLCDNumber *lcdNumber_2;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_generate;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_16;
    QLabel *label_5;
    QLineEdit *lineEdit_set;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_7;
    QLCDNumber *lcdNumber_3;
    QGridLayout *gridLayout_13;
    QPushButton *pushButton_setTime;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_startForEye;
    QPushButton *pushButton_stopForEye;
    QWidget *tab_5;
    QGridLayout *gridLayout_18;
    QSpacerItem *horizontalSpacer_9;
    QGridLayout *gridLayout_17;
    QPushButton *pushButton_testForIni;
    QPushButton *pushButton_openExe;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JustTestForQtClass)
    {
        if (JustTestForQtClass->objectName().isEmpty())
            JustTestForQtClass->setObjectName(QStringLiteral("JustTestForQtClass"));
        JustTestForQtClass->resize(747, 400);
        actiontab_1 = new QAction(JustTestForQtClass);
        actiontab_1->setObjectName(QStringLiteral("actiontab_1"));
        actiontab_2 = new QAction(JustTestForQtClass);
        actiontab_2->setObjectName(QStringLiteral("actiontab_2"));
        actiontab_3 = new QAction(JustTestForQtClass);
        actiontab_3->setObjectName(QStringLiteral("actiontab_3"));
        actiontab_4 = new QAction(JustTestForQtClass);
        actiontab_4->setObjectName(QStringLiteral("actiontab_4"));
        actiontab_5 = new QAction(JustTestForQtClass);
        actiontab_5->setObjectName(QStringLiteral("actiontab_5"));
        centralWidget = new QWidget(JustTestForQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_8 = new QGridLayout(centralWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_4->addWidget(textEdit, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        pushButton_startFor1 = new QPushButton(tab);
        pushButton_startFor1->setObjectName(QStringLiteral("pushButton_startFor1"));

        gridLayout_3->addWidget(pushButton_startFor1, 0, 1, 1, 1);

        pushButton_pauseFor1 = new QPushButton(tab);
        pushButton_pauseFor1->setObjectName(QStringLiteral("pushButton_pauseFor1"));

        gridLayout_3->addWidget(pushButton_pauseFor1, 0, 2, 1, 1);

        pushButton_stopFor1 = new QPushButton(tab);
        pushButton_stopFor1->setObjectName(QStringLiteral("pushButton_stopFor1"));

        gridLayout_3->addWidget(pushButton_stopFor1, 0, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        lcdNumber = new QLCDNumber(tab_2);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        gridLayout_6->addWidget(lcdNumber, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        pushButton_startFor2 = new QPushButton(tab_2);
        pushButton_startFor2->setObjectName(QStringLiteral("pushButton_startFor2"));

        gridLayout_5->addWidget(pushButton_startFor2, 0, 1, 1, 1);

        pushButton_pauseFor2 = new QPushButton(tab_2);
        pushButton_pauseFor2->setObjectName(QStringLiteral("pushButton_pauseFor2"));

        gridLayout_5->addWidget(pushButton_pauseFor2, 0, 2, 1, 1);

        pushButton_restart = new QPushButton(tab_2);
        pushButton_restart->setObjectName(QStringLiteral("pushButton_restart"));

        gridLayout_5->addWidget(pushButton_restart, 0, 3, 1, 1);

        pushButton_stopFor2 = new QPushButton(tab_2);
        pushButton_stopFor2->setObjectName(QStringLiteral("pushButton_stopFor2"));

        gridLayout_5->addWidget(pushButton_stopFor2, 0, 4, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_11 = new QGridLayout(tab_3);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        verticalSpacer = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(200, 0));
        label_2->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setPointSize(18);
        label_2->setFont(font);

        gridLayout_9->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_min = new QLineEdit(tab_3);
        lineEdit_min->setObjectName(QStringLiteral("lineEdit_min"));
        lineEdit_min->setMinimumSize(QSize(120, 0));
        lineEdit_min->setMaximumSize(QSize(120, 16777215));

        gridLayout_9->addWidget(lineEdit_min, 0, 1, 1, 1);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(200, 0));
        label_3->setMaximumSize(QSize(200, 16777215));
        label_3->setFont(font);

        gridLayout_9->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_max = new QLineEdit(tab_3);
        lineEdit_max->setObjectName(QStringLiteral("lineEdit_max"));
        lineEdit_max->setMaximumSize(QSize(120, 16777215));

        gridLayout_9->addWidget(lineEdit_max, 1, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_9, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_12, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(150, 0));
        label_4->setMaximumSize(QSize(150, 16777215));
        QFont font1;
        font1.setPointSize(25);
        label_4->setFont(font1);

        gridLayout_10->addWidget(label_4, 0, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(tab_3);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setMinimumSize(QSize(180, 0));
        lcdNumber_2->setMaximumSize(QSize(180, 16777215));

        gridLayout_10->addWidget(lcdNumber_2, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 2, 1, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        pushButton_clear = new QPushButton(tab_3);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));

        gridLayout_7->addWidget(pushButton_clear, 0, 1, 1, 1);

        pushButton_generate = new QPushButton(tab_3);
        pushButton_generate->setObjectName(QStringLiteral("pushButton_generate"));

        gridLayout_7->addWidget(pushButton_generate, 0, 2, 1, 1);


        gridLayout_11->addLayout(gridLayout_7, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_2, 4, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_14 = new QGridLayout(tab_4);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_16->addWidget(label_5, 0, 0, 1, 1);

        lineEdit_set = new QLineEdit(tab_4);
        lineEdit_set->setObjectName(QStringLiteral("lineEdit_set"));

        gridLayout_16->addWidget(lineEdit_set, 0, 1, 1, 1);

        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_16->addWidget(label_11, 0, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_7, 0, 3, 1, 1);


        gridLayout_14->addLayout(gridLayout_16, 0, 0, 1, 1);

        lcdNumber_3 = new QLCDNumber(tab_4);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));

        gridLayout_14->addWidget(lcdNumber_3, 1, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        pushButton_setTime = new QPushButton(tab_4);
        pushButton_setTime->setObjectName(QStringLiteral("pushButton_setTime"));

        gridLayout_13->addWidget(pushButton_setTime, 0, 0, 1, 1);

        pushButton_reset = new QPushButton(tab_4);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));

        gridLayout_13->addWidget(pushButton_reset, 0, 1, 1, 1);

        pushButton_pause = new QPushButton(tab_4);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));

        gridLayout_13->addWidget(pushButton_pause, 0, 2, 1, 1);

        pushButton_startForEye = new QPushButton(tab_4);
        pushButton_startForEye->setObjectName(QStringLiteral("pushButton_startForEye"));

        gridLayout_13->addWidget(pushButton_startForEye, 0, 3, 1, 1);

        pushButton_stopForEye = new QPushButton(tab_4);
        pushButton_stopForEye->setObjectName(QStringLiteral("pushButton_stopForEye"));

        gridLayout_13->addWidget(pushButton_stopForEye, 0, 4, 1, 1);


        gridLayout_14->addLayout(gridLayout_13, 2, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_18 = new QGridLayout(tab_5);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        horizontalSpacer_9 = new QSpacerItem(544, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        pushButton_testForIni = new QPushButton(tab_5);
        pushButton_testForIni->setObjectName(QStringLiteral("pushButton_testForIni"));

        gridLayout_17->addWidget(pushButton_testForIni, 0, 0, 1, 1);

        pushButton_openExe = new QPushButton(tab_5);
        pushButton_openExe->setObjectName(QStringLiteral("pushButton_openExe"));

        gridLayout_17->addWidget(pushButton_openExe, 1, 0, 1, 1);


        gridLayout_18->addLayout(gridLayout_17, 0, 1, 1, 1);

        tabWidget->addTab(tab_5, QString());

        gridLayout_8->addWidget(tabWidget, 0, 0, 1, 1);

        JustTestForQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(JustTestForQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 747, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        JustTestForQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JustTestForQtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        JustTestForQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(JustTestForQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        JustTestForQtClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actiontab_1);
        menu->addAction(actiontab_2);
        menu->addAction(actiontab_3);
        menu->addAction(actiontab_4);
        menu->addAction(actiontab_5);

        retranslateUi(JustTestForQtClass);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(JustTestForQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *JustTestForQtClass)
    {
        JustTestForQtClass->setWindowTitle(QApplication::translate("JustTestForQtClass", "JustTestForQt", 0));
        actiontab_1->setText(QApplication::translate("JustTestForQtClass", "\345\256\232\346\227\266\345\210\267\346\226\260", 0));
        actiontab_2->setText(QApplication::translate("JustTestForQtClass", "\350\256\241\346\227\266\345\231\250", 0));
        actiontab_3->setText(QApplication::translate("JustTestForQtClass", "\351\232\217\346\234\272\346\225\260\347\224\237\346\210\220\345\231\250", 0));
        actiontab_4->setText(QApplication::translate("JustTestForQtClass", "\346\212\244\347\234\274", 0));
        actiontab_5->setText(QApplication::translate("JustTestForQtClass", "\345\220\257\345\212\250\345\272\224\347\224\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("JustTestForQtClass", "\351\241\265", 0));
        label->setText(QApplication::translate("JustTestForQtClass", "\345\210\267\346\226\260\346\227\266\351\227\264", 0));
        pushButton_startFor1->setText(QApplication::translate("JustTestForQtClass", "\345\274\200\345\247\213", 0));
        pushButton_pauseFor1->setText(QApplication::translate("JustTestForQtClass", "\346\232\202\345\201\234", 0));
        pushButton_stopFor1->setText(QApplication::translate("JustTestForQtClass", "\347\273\223\346\235\237", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("JustTestForQtClass", "\345\256\232\346\227\266\345\210\267\346\226\260", 0));
        pushButton_startFor2->setText(QApplication::translate("JustTestForQtClass", "\345\274\200\345\247\213", 0));
        pushButton_pauseFor2->setText(QApplication::translate("JustTestForQtClass", "\346\232\202\345\201\234", 0));
        pushButton_restart->setText(QApplication::translate("JustTestForQtClass", "\351\207\215\347\275\256", 0));
        pushButton_stopFor2->setText(QApplication::translate("JustTestForQtClass", "\347\273\223\346\235\237", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("JustTestForQtClass", "\350\256\241\346\227\266\345\231\250", 0));
        label_2->setText(QApplication::translate("JustTestForQtClass", "\346\234\200\345\260\217\346\225\260", 0));
        label_3->setText(QApplication::translate("JustTestForQtClass", "\346\234\200\345\244\247\346\225\260", 0));
        label_4->setText(QApplication::translate("JustTestForQtClass", "\351\232\217\346\234\272\346\225\260", 0));
        pushButton_clear->setText(QApplication::translate("JustTestForQtClass", "\346\270\205\347\251\272", 0));
        pushButton_generate->setText(QApplication::translate("JustTestForQtClass", "\347\224\237\346\210\220", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("JustTestForQtClass", "\351\232\217\346\234\272\346\225\260\347\224\237\346\210\220\345\231\250", 0));
        label_5->setText(QApplication::translate("JustTestForQtClass", "\350\256\276\347\275\256\346\227\266\351\227\264", 0));
        label_11->setText(QApplication::translate("JustTestForQtClass", "\345\210\206\351\222\237", 0));
        pushButton_setTime->setText(QApplication::translate("JustTestForQtClass", "\350\256\276\347\275\256\346\227\266\351\227\264", 0));
        pushButton_reset->setText(QApplication::translate("JustTestForQtClass", "\351\207\215\347\275\256", 0));
        pushButton_pause->setText(QApplication::translate("JustTestForQtClass", "\346\232\202\345\201\234", 0));
        pushButton_startForEye->setText(QApplication::translate("JustTestForQtClass", "\345\220\257\345\212\250/\347\273\247\347\273\255", 0));
        pushButton_stopForEye->setText(QApplication::translate("JustTestForQtClass", "\347\273\223\346\235\237", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("JustTestForQtClass", "\346\212\244\347\234\274", 0));
        pushButton_testForIni->setText(QApplication::translate("JustTestForQtClass", "testForIni", 0));
        pushButton_openExe->setText(QApplication::translate("JustTestForQtClass", "\346\211\223\345\274\200QQ\345\276\256\344\277\241Quicker", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("JustTestForQtClass", "\345\220\257\345\212\250\345\272\224\347\224\250", 0));
        menu->setTitle(QApplication::translate("JustTestForQtClass", "\350\217\234\345\215\225\351\241\265", 0));
    } // retranslateUi

};

namespace Ui {
    class JustTestForQtClass: public Ui_JustTestForQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUSTTESTFORQT_H
