/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_8;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_0;
    QPushButton *pushButton_point;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(237, 366);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 231, 71));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
" qproperty-alignment: 'AlignVCenter | AlignRight';\n"
" border-botton: 1px solid gray;\n"
"}\n"
"background-color : white;"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(-1, 70, 61, 61));
        QFont font1;
        font1.setPointSize(12);
        pushButton_clear->setFont(font1);
        pushButton_clear->setToolTipDuration(0);
        pushButton_plus_minus = new QPushButton(centralwidget);
        pushButton_plus_minus->setObjectName("pushButton_plus_minus");
        pushButton_plus_minus->setGeometry(QRect(58, 70, 61, 61));
        pushButton_plus_minus->setFont(font1);
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        pushButton_percent->setGeometry(QRect(117, 70, 61, 61));
        pushButton_percent->setFont(font1);
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(176, 70, 61, 61));
        pushButton_divide->setFont(font1);
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255,151,57);\n"
"color: white;\n"
"border:1px solid gray\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient (x1:0, y1:0; x2:0, y2:1,\n"
"								stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(58, 129, 61, 61));
        pushButton_8->setFont(font1);
        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName("pushButton_multiply");
        pushButton_multiply->setGeometry(QRect(176, 129, 61, 61));
        pushButton_multiply->setFont(font1);
        pushButton_multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255,151,57);\n"
"color: white;\n"
"border:1px solid gray\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient (x1:0, y1:0; x2:0, y2:1,\n"
"								stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(-1, 129, 61, 61));
        pushButton_7->setFont(font1);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(117, 129, 61, 61));
        pushButton_9->setFont(font1);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(58, 188, 61, 61));
        pushButton_5->setFont(font1);
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(176, 188, 61, 61));
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255,151,57);\n"
"color: white;\n"
"border:1px solid gray\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient (x1:0, y1:0; x2:0, y2:1,\n"
"								stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(-1, 188, 61, 61));
        pushButton_4->setFont(font1);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(117, 188, 61, 61));
        pushButton_6->setFont(font1);
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName("pushButton_equal");
        pushButton_equal->setGeometry(QRect(176, 306, 61, 61));
        pushButton_equal->setFont(font1);
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255,151,57);\n"
"color: white;\n"
"border:1px solid gray\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient (x1:0, y1:0; x2:0, y2:1,\n"
"								stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(-1, 306, 120, 61));
        pushButton_0->setFont(font1);
        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName("pushButton_point");
        pushButton_point->setGeometry(QRect(117, 306, 61, 61));
        pushButton_point->setFont(font1);
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(176, 247, 61, 61));
        pushButton_plus->setFont(font1);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(255,151,57);\n"
"color: white;\n"
"border:1px solid gray\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: qlineargradient (x1:0, y1:0; x2:0, y2:1,\n"
"								stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(58, 247, 61, 61));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(117, 247, 61, 61));
        pushButton_3->setFont(font1);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(-1, 247, 61, 61));
        pushButton_1->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_plus_minus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
