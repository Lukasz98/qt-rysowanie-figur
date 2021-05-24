/********************************************************************************
** Form generated from reading UI file 'mywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWINDOW_H
#define UI_MYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWindow
{
public:
    QWidget *centralWidget;
    QFrame *rysujFrame;
    QGroupBox *groupBox;
    QPushButton *exitButton;
    QSlider *horizontalSlider;
    QLabel *label;
    QGroupBox *groupBox_2;
    QRadioButton *linia_button;
    QRadioButton *okrag_button;
    QRadioButton *elipsa_button;
    QRadioButton *bezi_button;
    QRadioButton *bSkejany;
    QPushButton *zapisz_beziego_button;
    QPushButton *zapisz_bSklejanego;
    QPushButton *dodaj_do_sklejanego;
    QCheckBox *checkBox;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyWindow)
    {
        if (MyWindow->objectName().isEmpty())
            MyWindow->setObjectName(QString::fromUtf8("MyWindow"));
        MyWindow->resize(931, 754);
        centralWidget = new QWidget(MyWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        rysujFrame = new QFrame(centralWidget);
        rysujFrame->setObjectName(QString::fromUtf8("rysujFrame"));
        rysujFrame->setGeometry(QRect(10, 10, 600, 600));
        rysujFrame->setFrameShape(QFrame::StyledPanel);
        rysujFrame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(630, 10, 241, 601));
        exitButton = new QPushButton(groupBox);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(70, 560, 75, 23));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 510, 160, 50));
        horizontalSlider->setMinimumSize(QSize(0, 50));
        horizontalSlider->setBaseSize(QSize(0, 50));
        horizontalSlider->setMinimum(4);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 500, 151, 31));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 60, 120, 181));
        groupBox_2->setCheckable(false);
        linia_button = new QRadioButton(groupBox_2);
        linia_button->setObjectName(QString::fromUtf8("linia_button"));
        linia_button->setGeometry(QRect(20, 30, 91, 19));
        linia_button->setChecked(true);
        okrag_button = new QRadioButton(groupBox_2);
        okrag_button->setObjectName(QString::fromUtf8("okrag_button"));
        okrag_button->setGeometry(QRect(20, 60, 91, 19));
        elipsa_button = new QRadioButton(groupBox_2);
        elipsa_button->setObjectName(QString::fromUtf8("elipsa_button"));
        elipsa_button->setGeometry(QRect(20, 90, 91, 19));
        bezi_button = new QRadioButton(groupBox_2);
        bezi_button->setObjectName(QString::fromUtf8("bezi_button"));
        bezi_button->setGeometry(QRect(20, 120, 91, 19));
        bSkejany = new QRadioButton(groupBox_2);
        bSkejany->setObjectName(QString::fromUtf8("bSkejany"));
        bSkejany->setGeometry(QRect(20, 150, 91, 19));
        zapisz_beziego_button = new QPushButton(groupBox);
        zapisz_beziego_button->setObjectName(QString::fromUtf8("zapisz_beziego_button"));
        zapisz_beziego_button->setGeometry(QRect(20, 250, 121, 21));
        zapisz_bSklejanego = new QPushButton(groupBox);
        zapisz_bSklejanego->setObjectName(QString::fromUtf8("zapisz_bSklejanego"));
        zapisz_bSklejanego->setGeometry(QRect(20, 280, 121, 21));
        dodaj_do_sklejanego = new QPushButton(groupBox);
        dodaj_do_sklejanego->setObjectName(QString::fromUtf8("dodaj_do_sklejanego"));
        dodaj_do_sklejanego->setGeometry(QRect(20, 310, 191, 21));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 350, 121, 19));
        MyWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 931, 18));
        MyWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MyWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyWindow->setStatusBar(statusBar);

        retranslateUi(MyWindow);

        QMetaObject::connectSlotsByName(MyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyWindow)
    {
        MyWindow->setWindowTitle(QCoreApplication::translate("MyWindow", "MyWindow", nullptr));
        groupBox->setTitle(QString());
        exitButton->setText(QCoreApplication::translate("MyWindow", "Wyj\305\233cie", nullptr));
        label->setText(QCoreApplication::translate("MyWindow", "Wierzcho\305\202ki elipsy", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MyWindow", "Typ rysowania", nullptr));
        linia_button->setText(QCoreApplication::translate("MyWindow", "Linia", nullptr));
        okrag_button->setText(QCoreApplication::translate("MyWindow", "Okr\304\205g", nullptr));
        elipsa_button->setText(QCoreApplication::translate("MyWindow", "Elipsa", nullptr));
        bezi_button->setText(QCoreApplication::translate("MyWindow", "Bezi", nullptr));
        bSkejany->setText(QCoreApplication::translate("MyWindow", "B-sklejany", nullptr));
        zapisz_beziego_button->setText(QCoreApplication::translate("MyWindow", "Zapisz Beziego", nullptr));
        zapisz_bSklejanego->setText(QCoreApplication::translate("MyWindow", "Zapisz B-sklejanego", nullptr));
        dodaj_do_sklejanego->setText(QCoreApplication::translate("MyWindow", "Dodaj punkt do b-sklejanego", nullptr));
        checkBox->setText(QCoreApplication::translate("MyWindow", "Tryb jasny", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWindow: public Ui_MyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWINDOW_H
