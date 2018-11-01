/********************************************************************************
** Form generated from reading UI file 'VortexElectromagneticClient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VORTEXELECTROMAGNETICCLIENT_H
#define UI_VORTEXELECTROMAGNETICCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VortexElectromagneticClientClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *Transmitter0;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VortexElectromagneticClientClass)
    {
        if (VortexElectromagneticClientClass->objectName().isEmpty())
            VortexElectromagneticClientClass->setObjectName(QStringLiteral("VortexElectromagneticClientClass"));
        VortexElectromagneticClientClass->resize(1090, 863);
        centralWidget = new QWidget(VortexElectromagneticClientClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(800, 641));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(13);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setDocumentMode(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Transmitter0 = new QGroupBox(tab);
        Transmitter0->setObjectName(QStringLiteral("Transmitter0"));
        Transmitter0->setGeometry(QRect(11, 11, 510, 341));
        Transmitter0->setMinimumSize(QSize(0, 0));
        Transmitter0->setMaximumSize(QSize(510, 16777215));
        label = new QLabel(Transmitter0);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 34, 90, 20));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label_2 = new QLabel(Transmitter0);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(251, 34, 80, 20));
        label_2->setFont(font1);
        lineEdit = new QLineEdit(Transmitter0);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(109, 38, 135, 21));
        lineEdit->setMinimumSize(QSize(135, 0));
        QFont font2;
        font2.setPointSize(9);
        lineEdit->setFont(font2);
        lineEdit_2 = new QLineEdit(Transmitter0);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(338, 38, 60, 21));
        lineEdit_2->setMinimumSize(QSize(55, 0));
        lineEdit_2->setFont(font2);
        pushButton = new QPushButton(Transmitter0);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(405, 34, 93, 29));
        pushButton->setFont(font1);
        lineEdit_3 = new QLineEdit(Transmitter0);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(12, 74, 171, 21));
        lineEdit_3->setFont(font2);
        pushButton_2 = new QPushButton(Transmitter0);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(405, 70, 93, 29));
        pushButton_2->setFont(font1);
        listWidget = new QListWidget(Transmitter0);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(220, 220, 220, 255));
        brush1.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setCheckState(Qt::PartiallyChecked);
        __qlistwidgetitem->setBackground(brush1);
        __qlistwidgetitem->setForeground(brush);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 120, 481, 192));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font3.setPointSize(10);
        listWidget->setFont(font3);
        listWidget->setFrameShadow(QFrame::Plain);
        listWidget->setTabKeyNavigation(true);
        listWidget->setLayoutMode(QListView::SinglePass);
        listWidget->setWordWrap(false);
        listWidget->setSelectionRectVisible(false);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 1, 1, 1);

        VortexElectromagneticClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VortexElectromagneticClientClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1090, 26));
        VortexElectromagneticClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VortexElectromagneticClientClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VortexElectromagneticClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VortexElectromagneticClientClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VortexElectromagneticClientClass->setStatusBar(statusBar);

        retranslateUi(VortexElectromagneticClientClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VortexElectromagneticClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *VortexElectromagneticClientClass)
    {
        VortexElectromagneticClientClass->setWindowTitle(QApplication::translate("VortexElectromagneticClientClass", "VortexElectromagneticClient", Q_NULLPTR));
        Transmitter0->setTitle(QApplication::translate("VortexElectromagneticClientClass", "\345\217\221\345\260\204\346\234\272 1", Q_NULLPTR));
        label->setText(QApplication::translate("VortexElectromagneticClientClass", "IP \345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("VortexElectromagneticClientClass", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("VortexElectromagneticClientClass", "192.168.103.102", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("VortexElectromagneticClientClass", "65536", Q_NULLPTR));
        pushButton->setText(QApplication::translate("VortexElectromagneticClientClass", "\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("VortexElectromagneticClientClass", "\346\211\223\345\274\200", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("VortexElectromagneticClientClass", "\345\217\221\345\260\204\346\234\272 1\344\274\240\350\276\223\344\277\241\346\201\257", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("VortexElectromagneticClientClass", "\346\225\260\346\215\256\344\274\240\350\276\223", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("VortexElectromagneticClientClass", "\345\217\202\346\225\260\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VortexElectromagneticClientClass: public Ui_VortexElectromagneticClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VORTEXELECTROMAGNETICCLIENT_H
