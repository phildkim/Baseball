/********************************************************************************
** Form generated from reading UI file 'UserDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDIALOG_H
#define UI_USERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_UserDialog
{
public:
    QGroupBox *groupBox_ShortestDistance;
    QTextBrowser *textBrowser_ShortestDistance;
    QRadioButton *radioButton_MLB;
    QRadioButton *radioButton_AL;
    QRadioButton *radioButton_NL;
    QGroupBox *groupBox_Planner;
    QLabel *label_CaliforniaStadium;
    QComboBox *comboBox_CaliforniaStadium;
    QListWidget *listWidget_Planner;
    QLabel *label_StadiumSelected;
    QPushButton *pushButton_FindShortestPath;
    QPushButton *pushButton_ClearPath;
    QPushButton *pushButton_PlannerTeamsSelected;
    QListWidget *listWidget_SelectedTeams;
    QTextBrowser *textBrowser_ShortestPathResult;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QPushButton *pushButton_Calculate;
    QTextBrowser *textBrowser_TotalDistance;
    QComboBox *comboBox_HomeStadium;
    QLabel *label_HomeStadium;
    QLabel *label_DestinationStadium;
    QComboBox *comboBox_DestintionStadium;
    QPushButton *pushButton_SelectHomeTeam;
    QLabel *label_HomeTeam;
    QLabel *label_HomeTeamResult;
    QLabel *label_TotalDistance;
    QLabel *label_SouvenirList;
    QPushButton *pushButton_PurchaseButton;
    QLabel *label_Purchase;
    QLabel *label_PurchaseResult;
    QPushButton *pushButton_CalculatePurchases;
    QTextBrowser *textBrowser_Purchase;
    QLabel *label_TotalPurchases;
    QComboBox *comboBox_SouvenirsList;
    QPushButton *pushButton_SavePurchase;
    QPushButton *pushButton_SaveTravels;
    QLabel *label_AwayTeam;
    QPushButton *pushButton_SelectAwayTeam;
    QPushButton *pushButton_Logout;
    QLabel *label_AwayTeamResult;
    QPushButton *pushButton_Info;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *UserDialog)
    {
        if (UserDialog->objectName().isEmpty())
            UserDialog->setObjectName(QStringLiteral("UserDialog"));
        UserDialog->resize(1391, 1304);
        QFont font;
        font.setPointSize(15);
        UserDialog->setFont(font);
        groupBox_ShortestDistance = new QGroupBox(UserDialog);
        groupBox_ShortestDistance->setObjectName(QStringLiteral("groupBox_ShortestDistance"));
        groupBox_ShortestDistance->setGeometry(QRect(40, 680, 701, 581));
        QFont font1;
        font1.setPointSize(18);
        groupBox_ShortestDistance->setFont(font1);
        groupBox_ShortestDistance->setAlignment(Qt::AlignCenter);
        textBrowser_ShortestDistance = new QTextBrowser(groupBox_ShortestDistance);
        textBrowser_ShortestDistance->setObjectName(QStringLiteral("textBrowser_ShortestDistance"));
        textBrowser_ShortestDistance->setGeometry(QRect(10, 80, 671, 491));
        QFont font2;
        font2.setPointSize(12);
        textBrowser_ShortestDistance->setFont(font2);
        radioButton_MLB = new QRadioButton(groupBox_ShortestDistance);
        radioButton_MLB->setObjectName(QStringLiteral("radioButton_MLB"));
        radioButton_MLB->setGeometry(QRect(60, 50, 53, 20));
        radioButton_AL = new QRadioButton(groupBox_ShortestDistance);
        radioButton_AL->setObjectName(QStringLiteral("radioButton_AL"));
        radioButton_AL->setGeometry(QRect(280, 50, 41, 20));
        radioButton_NL = new QRadioButton(groupBox_ShortestDistance);
        radioButton_NL->setObjectName(QStringLiteral("radioButton_NL"));
        radioButton_NL->setGeometry(QRect(500, 50, 42, 20));
        groupBox_Planner = new QGroupBox(UserDialog);
        groupBox_Planner->setObjectName(QStringLiteral("groupBox_Planner"));
        groupBox_Planner->setGeometry(QRect(20, 10, 641, 651));
        groupBox_Planner->setFont(font1);
        groupBox_Planner->setAlignment(Qt::AlignCenter);
        label_CaliforniaStadium = new QLabel(groupBox_Planner);
        label_CaliforniaStadium->setObjectName(QStringLiteral("label_CaliforniaStadium"));
        label_CaliforniaStadium->setGeometry(QRect(20, 30, 251, 41));
        QFont font3;
        font3.setPointSize(16);
        label_CaliforniaStadium->setFont(font3);
        label_CaliforniaStadium->setAlignment(Qt::AlignCenter);
        comboBox_CaliforniaStadium = new QComboBox(groupBox_Planner);
        comboBox_CaliforniaStadium->setObjectName(QStringLiteral("comboBox_CaliforniaStadium"));
        comboBox_CaliforniaStadium->setGeometry(QRect(20, 60, 261, 41));
        comboBox_CaliforniaStadium->setFont(font2);
        comboBox_CaliforniaStadium->setInputMethodHints(Qt::ImhNone);
        listWidget_Planner = new QListWidget(groupBox_Planner);
        listWidget_Planner->setObjectName(QStringLiteral("listWidget_Planner"));
        listWidget_Planner->setGeometry(QRect(20, 130, 251, 461));
        listWidget_Planner->setFont(font3);
        listWidget_Planner->setSelectionMode(QAbstractItemView::SingleSelection);
        label_StadiumSelected = new QLabel(groupBox_Planner);
        label_StadiumSelected->setObjectName(QStringLiteral("label_StadiumSelected"));
        label_StadiumSelected->setGeometry(QRect(20, 90, 251, 41));
        label_StadiumSelected->setFont(font3);
        label_StadiumSelected->setAlignment(Qt::AlignCenter);
        pushButton_FindShortestPath = new QPushButton(groupBox_Planner);
        pushButton_FindShortestPath->setObjectName(QStringLiteral("pushButton_FindShortestPath"));
        pushButton_FindShortestPath->setGeometry(QRect(320, 70, 301, 31));
        pushButton_FindShortestPath->setAutoDefault(false);
        pushButton_ClearPath = new QPushButton(groupBox_Planner);
        pushButton_ClearPath->setObjectName(QStringLiteral("pushButton_ClearPath"));
        pushButton_ClearPath->setGeometry(QRect(320, 600, 301, 31));
        pushButton_ClearPath->setAutoDefault(false);
        pushButton_PlannerTeamsSelected = new QPushButton(groupBox_Planner);
        pushButton_PlannerTeamsSelected->setObjectName(QStringLiteral("pushButton_PlannerTeamsSelected"));
        pushButton_PlannerTeamsSelected->setGeometry(QRect(20, 600, 251, 32));
        pushButton_PlannerTeamsSelected->setAutoDefault(false);
        listWidget_SelectedTeams = new QListWidget(groupBox_Planner);
        listWidget_SelectedTeams->setObjectName(QStringLiteral("listWidget_SelectedTeams"));
        listWidget_SelectedTeams->setGeometry(QRect(330, 130, 281, 281));
        listWidget_SelectedTeams->setFont(font3);
        listWidget_SelectedTeams->setEditTriggers(QAbstractItemView::DoubleClicked);
        listWidget_SelectedTeams->setSelectionMode(QAbstractItemView::SingleSelection);
        textBrowser_ShortestPathResult = new QTextBrowser(groupBox_Planner);
        textBrowser_ShortestPathResult->setObjectName(QStringLiteral("textBrowser_ShortestPathResult"));
        textBrowser_ShortestPathResult->setGeometry(QRect(330, 410, 281, 192));
        pushButton = new QPushButton(groupBox_Planner);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 40, 113, 32));
        groupBox = new QGroupBox(UserDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(670, 660, 701, 581));
        groupBox->setFont(font1);
        groupBox->setAlignment(Qt::AlignCenter);
        pushButton_Calculate = new QPushButton(groupBox);
        pushButton_Calculate->setObjectName(QStringLiteral("pushButton_Calculate"));
        pushButton_Calculate->setGeometry(QRect(130, 230, 181, 31));
        pushButton_Calculate->setFont(font2);
        pushButton_Calculate->setAutoDefault(false);
        textBrowser_TotalDistance = new QTextBrowser(groupBox);
        textBrowser_TotalDistance->setObjectName(QStringLiteral("textBrowser_TotalDistance"));
        textBrowser_TotalDistance->setGeometry(QRect(50, 280, 361, 181));
        textBrowser_TotalDistance->setFont(font3);
        comboBox_HomeStadium = new QComboBox(groupBox);
        comboBox_HomeStadium->setObjectName(QStringLiteral("comboBox_HomeStadium"));
        comboBox_HomeStadium->setGeometry(QRect(30, 90, 181, 41));
        comboBox_HomeStadium->setFont(font2);
        comboBox_HomeStadium->setInputMethodHints(Qt::ImhNone);
        label_HomeStadium = new QLabel(groupBox);
        label_HomeStadium->setObjectName(QStringLiteral("label_HomeStadium"));
        label_HomeStadium->setGeometry(QRect(30, 60, 161, 31));
        QFont font4;
        font4.setPointSize(14);
        label_HomeStadium->setFont(font4);
        label_HomeStadium->setAlignment(Qt::AlignCenter);
        label_DestinationStadium = new QLabel(groupBox);
        label_DestinationStadium->setObjectName(QStringLiteral("label_DestinationStadium"));
        label_DestinationStadium->setGeometry(QRect(240, 60, 241, 31));
        label_DestinationStadium->setFont(font4);
        label_DestinationStadium->setAlignment(Qt::AlignCenter);
        comboBox_DestintionStadium = new QComboBox(groupBox);
        comboBox_DestintionStadium->setObjectName(QStringLiteral("comboBox_DestintionStadium"));
        comboBox_DestintionStadium->setGeometry(QRect(260, 90, 181, 41));
        comboBox_DestintionStadium->setFont(font2);
        pushButton_SelectHomeTeam = new QPushButton(groupBox);
        pushButton_SelectHomeTeam->setObjectName(QStringLiteral("pushButton_SelectHomeTeam"));
        pushButton_SelectHomeTeam->setGeometry(QRect(30, 130, 181, 41));
        pushButton_SelectHomeTeam->setFont(font2);
        pushButton_SelectHomeTeam->setAutoDefault(false);
        label_HomeTeam = new QLabel(groupBox);
        label_HomeTeam->setObjectName(QStringLiteral("label_HomeTeam"));
        label_HomeTeam->setGeometry(QRect(30, 170, 111, 41));
        label_HomeTeam->setFont(font2);
        label_HomeTeam->setAlignment(Qt::AlignCenter);
        label_HomeTeamResult = new QLabel(groupBox);
        label_HomeTeamResult->setObjectName(QStringLiteral("label_HomeTeamResult"));
        label_HomeTeamResult->setGeometry(QRect(70, 190, 161, 41));
        label_HomeTeamResult->setFont(font2);
        label_HomeTeamResult->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_TotalDistance = new QLabel(groupBox);
        label_TotalDistance->setObjectName(QStringLiteral("label_TotalDistance"));
        label_TotalDistance->setGeometry(QRect(100, 250, 221, 41));
        label_TotalDistance->setFont(font1);
        label_TotalDistance->setAlignment(Qt::AlignCenter);
        label_SouvenirList = new QLabel(groupBox);
        label_SouvenirList->setObjectName(QStringLiteral("label_SouvenirList"));
        label_SouvenirList->setGeometry(QRect(490, 60, 171, 31));
        label_SouvenirList->setFont(font4);
        label_SouvenirList->setAlignment(Qt::AlignCenter);
        pushButton_PurchaseButton = new QPushButton(groupBox);
        pushButton_PurchaseButton->setObjectName(QStringLiteral("pushButton_PurchaseButton"));
        pushButton_PurchaseButton->setGeometry(QRect(490, 130, 181, 41));
        pushButton_PurchaseButton->setFont(font2);
        pushButton_PurchaseButton->setAutoDefault(false);
        label_Purchase = new QLabel(groupBox);
        label_Purchase->setObjectName(QStringLiteral("label_Purchase"));
        label_Purchase->setGeometry(QRect(500, 170, 181, 41));
        label_Purchase->setFont(font2);
        label_Purchase->setAlignment(Qt::AlignCenter);
        label_PurchaseResult = new QLabel(groupBox);
        label_PurchaseResult->setObjectName(QStringLiteral("label_PurchaseResult"));
        label_PurchaseResult->setGeometry(QRect(510, 200, 211, 41));
        label_PurchaseResult->setFont(font2);
        label_PurchaseResult->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_CalculatePurchases = new QPushButton(groupBox);
        pushButton_CalculatePurchases->setObjectName(QStringLiteral("pushButton_CalculatePurchases"));
        pushButton_CalculatePurchases->setGeometry(QRect(440, 230, 181, 31));
        pushButton_CalculatePurchases->setFont(font2);
        pushButton_CalculatePurchases->setAutoDefault(false);
        textBrowser_Purchase = new QTextBrowser(groupBox);
        textBrowser_Purchase->setObjectName(QStringLiteral("textBrowser_Purchase"));
        textBrowser_Purchase->setGeometry(QRect(430, 280, 221, 181));
        textBrowser_Purchase->setFont(font1);
        label_TotalPurchases = new QLabel(groupBox);
        label_TotalPurchases->setObjectName(QStringLiteral("label_TotalPurchases"));
        label_TotalPurchases->setGeometry(QRect(450, 250, 171, 41));
        label_TotalPurchases->setFont(font3);
        label_TotalPurchases->setAlignment(Qt::AlignCenter);
        comboBox_SouvenirsList = new QComboBox(groupBox);
        comboBox_SouvenirsList->setObjectName(QStringLiteral("comboBox_SouvenirsList"));
        comboBox_SouvenirsList->setGeometry(QRect(490, 90, 181, 41));
        comboBox_SouvenirsList->setFont(font2);
        pushButton_SavePurchase = new QPushButton(groupBox);
        pushButton_SavePurchase->setObjectName(QStringLiteral("pushButton_SavePurchase"));
        pushButton_SavePurchase->setGeometry(QRect(480, 470, 91, 51));
        pushButton_SavePurchase->setAutoDefault(false);
        pushButton_SaveTravels = new QPushButton(groupBox);
        pushButton_SaveTravels->setObjectName(QStringLiteral("pushButton_SaveTravels"));
        pushButton_SaveTravels->setGeometry(QRect(140, 470, 131, 51));
        pushButton_SaveTravels->setFont(font3);
        pushButton_SaveTravels->setAutoDefault(false);
        label_AwayTeam = new QLabel(groupBox);
        label_AwayTeam->setObjectName(QStringLiteral("label_AwayTeam"));
        label_AwayTeam->setGeometry(QRect(270, 170, 111, 41));
        label_AwayTeam->setFont(font2);
        label_AwayTeam->setAlignment(Qt::AlignCenter);
        pushButton_SelectAwayTeam = new QPushButton(groupBox);
        pushButton_SelectAwayTeam->setObjectName(QStringLiteral("pushButton_SelectAwayTeam"));
        pushButton_SelectAwayTeam->setGeometry(QRect(260, 130, 181, 41));
        pushButton_SelectAwayTeam->setFont(font2);
        pushButton_SelectAwayTeam->setAutoDefault(false);
        pushButton_Logout = new QPushButton(groupBox);
        pushButton_Logout->setObjectName(QStringLiteral("pushButton_Logout"));
        pushButton_Logout->setGeometry(QRect(430, 530, 191, 51));
        pushButton_Logout->setAutoDefault(false);
        label_AwayTeamResult = new QLabel(groupBox);
        label_AwayTeamResult->setObjectName(QStringLiteral("label_AwayTeamResult"));
        label_AwayTeamResult->setGeometry(QRect(300, 200, 161, 41));
        label_AwayTeamResult->setFont(font2);
        label_AwayTeamResult->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_Info = new QPushButton(groupBox);
        pushButton_Info->setObjectName(QStringLiteral("pushButton_Info"));
        pushButton_Info->setGeometry(QRect(30, 40, 181, 31));
        pushButton_Info->setFont(font2);
        pushButton_Info->setAutoDefault(false);
        textBrowser = new QTextBrowser(UserDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(680, 130, 421, 451));

        retranslateUi(UserDialog);

        listWidget_Planner->setCurrentRow(-1);
        listWidget_SelectedTeams->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(UserDialog);
    } // setupUi

    void retranslateUi(QDialog *UserDialog)
    {
        UserDialog->setWindowTitle(QApplication::translate("UserDialog", "Dialog", Q_NULLPTR));
        groupBox_ShortestDistance->setTitle(QApplication::translate("UserDialog", "SHORTEST DISTANCE", Q_NULLPTR));
        radioButton_MLB->setText(QApplication::translate("UserDialog", "MLB", Q_NULLPTR));
        radioButton_AL->setText(QApplication::translate("UserDialog", "AL", Q_NULLPTR));
        radioButton_NL->setText(QApplication::translate("UserDialog", "NL", Q_NULLPTR));
        groupBox_Planner->setTitle(QApplication::translate("UserDialog", "PLANNER", Q_NULLPTR));
        label_CaliforniaStadium->setText(QApplication::translate("UserDialog", "Select home stadium:", Q_NULLPTR));
        label_StadiumSelected->setText(QApplication::translate("UserDialog", "Select teams:", Q_NULLPTR));
        pushButton_FindShortestPath->setText(QApplication::translate("UserDialog", "FIND SHORTEST PATH", Q_NULLPTR));
        pushButton_ClearPath->setText(QApplication::translate("UserDialog", "CLEAR", Q_NULLPTR));
        pushButton_PlannerTeamsSelected->setText(QApplication::translate("UserDialog", "TEAMS SELECED", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UserDialog", "test", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("UserDialog", "PLAN YOUR NEXT BASEBALL TRIP WITH US!", Q_NULLPTR));
        pushButton_Calculate->setText(QApplication::translate("UserDialog", "CALCULATE DISTANCE", Q_NULLPTR));
        label_HomeStadium->setText(QApplication::translate("UserDialog", "Select home stadium:", Q_NULLPTR));
        label_DestinationStadium->setText(QApplication::translate("UserDialog", "Select destination stadium:", Q_NULLPTR));
        pushButton_SelectHomeTeam->setText(QApplication::translate("UserDialog", "CONFIRM SELECTION", Q_NULLPTR));
        label_HomeTeam->setText(QApplication::translate("UserDialog", "HOME TEAM:", Q_NULLPTR));
        label_HomeTeamResult->setText(QString());
        label_TotalDistance->setText(QApplication::translate("UserDialog", "TOTAL DISTANCE:", Q_NULLPTR));
        label_SouvenirList->setText(QApplication::translate("UserDialog", "Souvenirs List:", Q_NULLPTR));
        pushButton_PurchaseButton->setText(QApplication::translate("UserDialog", "PURCHASE SELECTION", Q_NULLPTR));
        label_Purchase->setText(QApplication::translate("UserDialog", "PURCHASED ITEMS:", Q_NULLPTR));
        label_PurchaseResult->setText(QString());
        pushButton_CalculatePurchases->setText(QApplication::translate("UserDialog", "CALCULATE SOUVENIRS", Q_NULLPTR));
        label_TotalPurchases->setText(QApplication::translate("UserDialog", "TOTAL COST:", Q_NULLPTR));
        pushButton_SavePurchase->setText(QApplication::translate("UserDialog", "SAVE", Q_NULLPTR));
        pushButton_SaveTravels->setText(QApplication::translate("UserDialog", "SAVE", Q_NULLPTR));
        label_AwayTeam->setText(QApplication::translate("UserDialog", "AWAY TEAM:", Q_NULLPTR));
        pushButton_SelectAwayTeam->setText(QApplication::translate("UserDialog", "CONFIRM SELECTION", Q_NULLPTR));
        pushButton_Logout->setText(QApplication::translate("UserDialog", "LOG OUT", Q_NULLPTR));
        label_AwayTeamResult->setText(QString());
        pushButton_Info->setText(QApplication::translate("UserDialog", "INFO  SELECTION", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserDialog: public Ui_UserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDIALOG_H
