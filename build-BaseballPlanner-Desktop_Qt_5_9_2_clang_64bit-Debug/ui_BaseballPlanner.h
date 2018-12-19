/********************************************************************************
** Form generated from reading UI file 'BaseballPlanner.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEBALLPLANNER_H
#define UI_BASEBALLPLANNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaseballPlanner
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_Login;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Exit;
    QGroupBox *groupBox_Map;
    QLabel *label_Map;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BaseballPlanner)
    {
        if (BaseballPlanner->objectName().isEmpty())
            BaseballPlanner->setObjectName(QStringLiteral("BaseballPlanner"));
        BaseballPlanner->resize(855, 569);
        centralWidget = new QWidget(BaseballPlanner);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_Login = new QGroupBox(centralWidget);
        groupBox_Login->setObjectName(QStringLiteral("groupBox_Login"));
        groupBox_Login->setGeometry(QRect(70, 20, 191, 241));
        QFont font;
        font.setPointSize(18);
        groupBox_Login->setFont(font);
        groupBox_Login->setAlignment(Qt::AlignCenter);
        lineEdit_Username = new QLineEdit(groupBox_Login);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(20, 50, 151, 31));
        QFont font1;
        font1.setPointSize(16);
        lineEdit_Username->setFont(font1);
        lineEdit_Password = new QLineEdit(groupBox_Login);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(20, 100, 151, 31));
        lineEdit_Password->setFont(font1);
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        pushButton_Login = new QPushButton(groupBox_Login);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(10, 140, 171, 41));
        pushButton_Exit = new QPushButton(groupBox_Login);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(10, 180, 171, 41));
        groupBox_Map = new QGroupBox(centralWidget);
        groupBox_Map->setObjectName(QStringLiteral("groupBox_Map"));
        groupBox_Map->setGeometry(QRect(270, 20, 511, 401));
        groupBox_Map->setFont(font);
        groupBox_Map->setAlignment(Qt::AlignCenter);
        label_Map = new QLabel(groupBox_Map);
        label_Map->setObjectName(QStringLiteral("label_Map"));
        label_Map->setGeometry(QRect(0, 30, 521, 371));
        BaseballPlanner->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BaseballPlanner);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 855, 22));
        BaseballPlanner->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BaseballPlanner);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BaseballPlanner->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BaseballPlanner);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BaseballPlanner->setStatusBar(statusBar);

        retranslateUi(BaseballPlanner);

        QMetaObject::connectSlotsByName(BaseballPlanner);
    } // setupUi

    void retranslateUi(QMainWindow *BaseballPlanner)
    {
        BaseballPlanner->setWindowTitle(QApplication::translate("BaseballPlanner", "BaseballPlanner", Q_NULLPTR));
        groupBox_Login->setTitle(QApplication::translate("BaseballPlanner", "LOGIN", Q_NULLPTR));
        lineEdit_Username->setPlaceholderText(QApplication::translate("BaseballPlanner", "Admin or User", Q_NULLPTR));
        lineEdit_Password->setPlaceholderText(QApplication::translate("BaseballPlanner", "Password", Q_NULLPTR));
        pushButton_Login->setText(QApplication::translate("BaseballPlanner", "LOGIN", Q_NULLPTR));
        pushButton_Exit->setText(QApplication::translate("BaseballPlanner", "EXIT", Q_NULLPTR));
        groupBox_Map->setTitle(QApplication::translate("BaseballPlanner", "MAJOR LEAGUE BASEBALL", Q_NULLPTR));
        label_Map->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BaseballPlanner: public Ui_BaseballPlanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEBALLPLANNER_H
