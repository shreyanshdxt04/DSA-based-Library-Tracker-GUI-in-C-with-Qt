/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *addBtn;
    QPushButton *borrowBtn;
    QPushButton *returnBtn;
    QPushButton *showAllBtn;
    QPushButton *showIssuedBtn;
    QLineEdit *idEdit;
    QLineEdit *titleEdit;
    QLineEdit *authorEdit;
    QLineEdit *userEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QListWidget *outputArea;
    QLabel *label_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("BankGothic Md BT")});
        font.setPointSize(20);
        MainWindow->setFont(font);
        MainWindow->setIconSize(QSize(90, 90));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 10, 401, 71));
        label->setFrameShape(QFrame::Shape::NoFrame);
        label->setTextFormat(Qt::TextFormat::RichText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        addBtn = new QPushButton(centralwidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(490, 99, 251, 41));
        borrowBtn = new QPushButton(centralwidget);
        borrowBtn->setObjectName("borrowBtn");
        borrowBtn->setGeometry(QRect(490, 149, 251, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BankGothic Md BT")});
        font1.setPointSize(14);
        borrowBtn->setFont(font1);
        returnBtn = new QPushButton(centralwidget);
        returnBtn->setObjectName("returnBtn");
        returnBtn->setGeometry(QRect(490, 199, 251, 41));
        returnBtn->setFont(font1);
        showAllBtn = new QPushButton(centralwidget);
        showAllBtn->setObjectName("showAllBtn");
        showAllBtn->setGeometry(QRect(490, 249, 251, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BankGothic Md BT")});
        font2.setPointSize(11);
        showAllBtn->setFont(font2);
        showIssuedBtn = new QPushButton(centralwidget);
        showIssuedBtn->setObjectName("showIssuedBtn");
        showIssuedBtn->setGeometry(QRect(490, 299, 251, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("BankGothic Md BT")});
        font3.setPointSize(8);
        showIssuedBtn->setFont(font3);
        idEdit = new QLineEdit(centralwidget);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(210, 129, 251, 41));
        titleEdit = new QLineEdit(centralwidget);
        titleEdit->setObjectName("titleEdit");
        titleEdit->setGeometry(QRect(210, 179, 251, 41));
        authorEdit = new QLineEdit(centralwidget);
        authorEdit->setObjectName("authorEdit");
        authorEdit->setGeometry(QRect(210, 229, 251, 41));
        userEdit = new QLineEdit(centralwidget);
        userEdit->setObjectName("userEdit");
        userEdit->setGeometry(QRect(210, 279, 251, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 129, 161, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BankGothic Md BT")});
        font4.setPointSize(16);
        label_2->setFont(font4);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 179, 161, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("BankGothic Md BT")});
        font5.setPointSize(22);
        label_3->setFont(font5);
        label_3->setFrameShadow(QFrame::Shadow::Sunken);
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 229, 161, 41));
        label_4->setFont(font4);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 279, 161, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("BankGothic Md BT")});
        font6.setPointSize(12);
        label_5->setFont(font6);
        outputArea = new QListWidget(centralwidget);
        outputArea->setObjectName("outputArea");
        outputArea->setGeometry(QRect(210, 350, 531, 181));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 350, 161, 41));
        label_6->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "LIBRARY TRACKER", nullptr));
        addBtn->setText(QCoreApplication::translate("MainWindow", "ADD BOOK", nullptr));
        borrowBtn->setText(QCoreApplication::translate("MainWindow", "BORROW BOOK", nullptr));
        returnBtn->setText(QCoreApplication::translate("MainWindow", "RETURN BOOK", nullptr));
        showAllBtn->setText(QCoreApplication::translate("MainWindow", "SHOW ALL BOOKS", nullptr));
        showIssuedBtn->setText(QCoreApplication::translate("MainWindow", "SHOW BORROWED BOOK", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "BOOK ID:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TITLE:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "AUTHOR:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "USER NAME:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "BOOK LIST:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
