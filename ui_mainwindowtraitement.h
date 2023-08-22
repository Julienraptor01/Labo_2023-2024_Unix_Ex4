/********************************************************************************
** Form generated from reading UI file 'mainwindowtraitement.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWTRAITEMENT_H
#define UI_MAINWINDOWTRAITEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowTraitement
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEditGroupeTraite;
    QLCDNumber *lcdNumberDejaTraites;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditEtudiantTraite;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowTraitement)
    {
        if (MainWindowTraitement->objectName().isEmpty())
            MainWindowTraitement->setObjectName(QString::fromUtf8("MainWindowTraitement"));
        MainWindowTraitement->resize(310, 168);
        centralwidget = new QWidget(MainWindowTraitement);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 111, 21));
        lineEditGroupeTraite = new QLineEdit(centralwidget);
        lineEditGroupeTraite->setObjectName(QString::fromUtf8("lineEditGroupeTraite"));
        lineEditGroupeTraite->setGeometry(QRect(150, 20, 141, 25));
        lineEditGroupeTraite->setReadOnly(true);
        lcdNumberDejaTraites = new QLCDNumber(centralwidget);
        lcdNumberDejaTraites->setObjectName(QString::fromUtf8("lcdNumberDejaTraites"));
        lcdNumberDejaTraites->setGeometry(QRect(150, 50, 141, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lcdNumberDejaTraites->setFont(font);
        lcdNumberDejaTraites->setAutoFillBackground(false);
        lcdNumberDejaTraites->setStyleSheet(QString::fromUtf8("background-color:rgb(252, 233, 79)"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 101, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 131, 21));
        lineEditEtudiantTraite = new QLineEdit(centralwidget);
        lineEditEtudiantTraite->setObjectName(QString::fromUtf8("lineEditEtudiantTraite"));
        lineEditEtudiantTraite->setGeometry(QRect(150, 110, 141, 25));
        lineEditEtudiantTraite->setReadOnly(true);
        MainWindowTraitement->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowTraitement);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 310, 22));
        MainWindowTraitement->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowTraitement);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowTraitement->setStatusBar(statusbar);

        retranslateUi(MainWindowTraitement);

        QMetaObject::connectSlotsByName(MainWindowTraitement);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowTraitement)
    {
        MainWindowTraitement->setWindowTitle(QApplication::translate("MainWindowTraitement", "Traitement", nullptr));
        label->setText(QApplication::translate("MainWindowTraitement", "Groupe trait\303\251 :", nullptr));
        label_2->setText(QApplication::translate("MainWindowTraitement", "D\303\251j\303\240 trait\303\251s :", nullptr));
        label_3->setText(QApplication::translate("MainWindowTraitement", "Etudiant trait\303\251 :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowTraitement: public Ui_MainWindowTraitement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWTRAITEMENT_H
