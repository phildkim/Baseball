/********************************************************************************
** Form generated from reading UI file 'AdminDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser_Admin;
    QGroupBox *groupBox_MLBTeams;
    QRadioButton *radioButton_EditTeam;
    QRadioButton *radioButton_AddTeam;
    QGroupBox *groupBox_AddTeams;
    QLineEdit *lineEdit_EditTeams;
    QLabel *label_Stadium;
    QLabel *label_Team;
    QPushButton *pushButton_SubmitAddress;
    QPushButton *pushButton_CancelTeams;
    QLabel *label_Phone;
    QLabel *label_Zip;
    QLabel *label_CityStateZip;
    QLabel *label_Date;
    QLabel *label_Capacity;
    QLabel *label_Address;
    QPushButton *pushButton_SubmitTeam;
    QPushButton *pushButton_SubmitStadium;
    QPushButton *pushButton_CSZ;
    QPushButton *pushButton_Capacity;
    QPushButton *pushButton_Phone;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_StadiunName;
    QRadioButton *radioButton_TeamName;
    QRadioButton *radioButton_Address;
    QRadioButton *radioButton_CSZ;
    QRadioButton *radioButton_Phonr;
    QRadioButton *radioButton_Date;
    QRadioButton *radioButton_Capacity;
    QPushButton *pushButton_SubmitDate;
    QGroupBox *groupBox_EditTeams;
    QListWidget *listWidget_MLBTeams;
    QPushButton *pushButton_Edit;
    QTextBrowser *textBrowser_Teams;
    QRadioButton *radioButton_CancelTeam;
    QPushButton *pushButton_AddToMatrix;
    QLineEdit *lineEdit_Row;
    QLabel *label_Row;
    QLabel *label_Col;
    QLineEdit *lineEdit_Col;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_Souvenirs;
    QRadioButton *radioButton_MLBTeams;
    QRadioButton *radioButton_SignOut;
    QGroupBox *groupBox_Souvenirs;
    QPushButton *pushButton_AddItems;
    QPushButton *pushButton_DeleteItems;
    QPushButton *pushButton_EditItems;
    QLineEdit *lineEdit_ItemPrice;
    QLineEdit *lineEdit_ItemName;
    QLabel *label_ItemPrice;
    QLabel *label_ItemName;
    QLabel *label_ItemSelection;
    QListWidget *listWidget_Souvenirs;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_SouvenirEdit;
    QRadioButton *radioButton_AddItem;
    QRadioButton *radioButton_EditItem;
    QRadioButton *radioButton_DeleteItem;
    QRadioButton *radioButton_CancelItem;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName(QStringLiteral("AdminDialog"));
        AdminDialog->resize(984, 900);
        QFont font;
        font.setPointSize(9);
        AdminDialog->setFont(font);
        horizontalLayout = new QHBoxLayout(AdminDialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(AdminDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        textBrowser_Admin = new QTextBrowser(groupBox);
        textBrowser_Admin->setObjectName(QStringLiteral("textBrowser_Admin"));
        textBrowser_Admin->setGeometry(QRect(260, 30, 441, 131));
        QFont font1;
        font1.setPointSize(20);
        textBrowser_Admin->setFont(font1);
        groupBox_MLBTeams = new QGroupBox(groupBox);
        groupBox_MLBTeams->setObjectName(QStringLiteral("groupBox_MLBTeams"));
        groupBox_MLBTeams->setGeometry(QRect(50, 180, 551, 691));
        QFont font2;
        font2.setPointSize(18);
        groupBox_MLBTeams->setFont(font2);
        groupBox_MLBTeams->setAlignment(Qt::AlignCenter);
        radioButton_EditTeam = new QRadioButton(groupBox_MLBTeams);
        radioButton_EditTeam->setObjectName(QStringLiteral("radioButton_EditTeam"));
        radioButton_EditTeam->setGeometry(QRect(250, 80, 89, 23));
        QFont font3;
        font3.setPointSize(16);
        radioButton_EditTeam->setFont(font3);
        radioButton_AddTeam = new QRadioButton(groupBox_MLBTeams);
        radioButton_AddTeam->setObjectName(QStringLiteral("radioButton_AddTeam"));
        radioButton_AddTeam->setGeometry(QRect(250, 50, 91, 23));
        radioButton_AddTeam->setFont(font3);
        groupBox_AddTeams = new QGroupBox(groupBox_MLBTeams);
        groupBox_AddTeams->setObjectName(QStringLiteral("groupBox_AddTeams"));
        groupBox_AddTeams->setGeometry(QRect(20, 140, 441, 541));
        groupBox_AddTeams->setAlignment(Qt::AlignCenter);
        lineEdit_EditTeams = new QLineEdit(groupBox_AddTeams);
        lineEdit_EditTeams->setObjectName(QStringLiteral("lineEdit_EditTeams"));
        lineEdit_EditTeams->setGeometry(QRect(170, 70, 231, 41));
        lineEdit_EditTeams->setFont(font3);
        label_Stadium = new QLabel(groupBox_AddTeams);
        label_Stadium->setObjectName(QStringLiteral("label_Stadium"));
        label_Stadium->setGeometry(QRect(170, 30, 201, 41));
        label_Stadium->setFont(font3);
        label_Team = new QLabel(groupBox_AddTeams);
        label_Team->setObjectName(QStringLiteral("label_Team"));
        label_Team->setGeometry(QRect(170, 30, 201, 41));
        label_Team->setFont(font3);
        pushButton_SubmitAddress = new QPushButton(groupBox_AddTeams);
        pushButton_SubmitAddress->setObjectName(QStringLiteral("pushButton_SubmitAddress"));
        pushButton_SubmitAddress->setGeometry(QRect(170, 120, 81, 41));
        pushButton_SubmitAddress->setAutoDefault(false);
        pushButton_CancelTeams = new QPushButton(groupBox_AddTeams);
        pushButton_CancelTeams->setObjectName(QStringLiteral("pushButton_CancelTeams"));
        pushButton_CancelTeams->setGeometry(QRect(290, 120, 111, 41));
        pushButton_CancelTeams->setAutoDefault(false);
        label_Phone = new QLabel(groupBox_AddTeams);
        label_Phone->setObjectName(QStringLiteral("label_Phone"));
        label_Phone->setGeometry(QRect(170, 30, 201, 41));
        label_Phone->setFont(font3);
        label_Zip = new QLabel(groupBox_AddTeams);
        label_Zip->setObjectName(QStringLiteral("label_Zip"));
        label_Zip->setGeometry(QRect(170, 30, 201, 41));
        label_Zip->setFont(font3);
        label_CityStateZip = new QLabel(groupBox_AddTeams);
        label_CityStateZip->setObjectName(QStringLiteral("label_CityStateZip"));
        label_CityStateZip->setGeometry(QRect(170, 30, 201, 41));
        label_CityStateZip->setFont(font3);
        label_Date = new QLabel(groupBox_AddTeams);
        label_Date->setObjectName(QStringLiteral("label_Date"));
        label_Date->setGeometry(QRect(170, 30, 201, 41));
        label_Date->setFont(font3);
        label_Capacity = new QLabel(groupBox_AddTeams);
        label_Capacity->setObjectName(QStringLiteral("label_Capacity"));
        label_Capacity->setGeometry(QRect(170, 30, 201, 41));
        label_Capacity->setFont(font3);
        label_Address = new QLabel(groupBox_AddTeams);
        label_Address->setObjectName(QStringLiteral("label_Address"));
        label_Address->setGeometry(QRect(170, 30, 201, 41));
        label_Address->setFont(font3);
        pushButton_SubmitTeam = new QPushButton(groupBox_AddTeams);
        pushButton_SubmitTeam->setObjectName(QStringLiteral("pushButton_SubmitTeam"));
        pushButton_SubmitTeam->setGeometry(QRect(170, 120, 111, 41));
        pushButton_SubmitTeam->setAutoDefault(false);
        pushButton_SubmitStadium = new QPushButton(groupBox_AddTeams);
        pushButton_SubmitStadium->setObjectName(QStringLiteral("pushButton_SubmitStadium"));
        pushButton_SubmitStadium->setGeometry(QRect(170, 120, 111, 41));
        pushButton_SubmitStadium->setAutoDefault(false);
        pushButton_CSZ = new QPushButton(groupBox_AddTeams);
        pushButton_CSZ->setObjectName(QStringLiteral("pushButton_CSZ"));
        pushButton_CSZ->setGeometry(QRect(170, 120, 111, 41));
        pushButton_CSZ->setAutoDefault(false);
        pushButton_Capacity = new QPushButton(groupBox_AddTeams);
        pushButton_Capacity->setObjectName(QStringLiteral("pushButton_Capacity"));
        pushButton_Capacity->setGeometry(QRect(170, 120, 111, 41));
        pushButton_Capacity->setAutoDefault(false);
        pushButton_Phone = new QPushButton(groupBox_AddTeams);
        pushButton_Phone->setObjectName(QStringLiteral("pushButton_Phone"));
        pushButton_Phone->setGeometry(QRect(170, 120, 111, 41));
        pushButton_Phone->setAutoDefault(false);
        layoutWidget = new QWidget(groupBox_AddTeams);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(14, 38, 141, 171));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_StadiunName = new QRadioButton(layoutWidget);
        radioButton_StadiunName->setObjectName(QStringLiteral("radioButton_StadiunName"));
        radioButton_StadiunName->setFont(font3);

        verticalLayout_2->addWidget(radioButton_StadiunName);

        radioButton_TeamName = new QRadioButton(layoutWidget);
        radioButton_TeamName->setObjectName(QStringLiteral("radioButton_TeamName"));
        radioButton_TeamName->setFont(font3);

        verticalLayout_2->addWidget(radioButton_TeamName);

        radioButton_Address = new QRadioButton(layoutWidget);
        radioButton_Address->setObjectName(QStringLiteral("radioButton_Address"));
        radioButton_Address->setFont(font3);

        verticalLayout_2->addWidget(radioButton_Address);

        radioButton_CSZ = new QRadioButton(layoutWidget);
        radioButton_CSZ->setObjectName(QStringLiteral("radioButton_CSZ"));
        radioButton_CSZ->setFont(font3);

        verticalLayout_2->addWidget(radioButton_CSZ);

        radioButton_Phonr = new QRadioButton(layoutWidget);
        radioButton_Phonr->setObjectName(QStringLiteral("radioButton_Phonr"));
        radioButton_Phonr->setFont(font3);

        verticalLayout_2->addWidget(radioButton_Phonr);

        radioButton_Date = new QRadioButton(layoutWidget);
        radioButton_Date->setObjectName(QStringLiteral("radioButton_Date"));
        radioButton_Date->setFont(font3);

        verticalLayout_2->addWidget(radioButton_Date);

        radioButton_Capacity = new QRadioButton(layoutWidget);
        radioButton_Capacity->setObjectName(QStringLiteral("radioButton_Capacity"));
        radioButton_Capacity->setFont(font3);

        verticalLayout_2->addWidget(radioButton_Capacity);

        pushButton_SubmitDate = new QPushButton(groupBox_AddTeams);
        pushButton_SubmitDate->setObjectName(QStringLiteral("pushButton_SubmitDate"));
        pushButton_SubmitDate->setGeometry(QRect(170, 120, 111, 41));
        pushButton_SubmitDate->setAutoDefault(false);
        groupBox_EditTeams = new QGroupBox(groupBox_AddTeams);
        groupBox_EditTeams->setObjectName(QStringLiteral("groupBox_EditTeams"));
        groupBox_EditTeams->setGeometry(QRect(10, 210, 421, 331));
        groupBox_EditTeams->setAlignment(Qt::AlignCenter);
        listWidget_MLBTeams = new QListWidget(groupBox_EditTeams);
        listWidget_MLBTeams->setObjectName(QStringLiteral("listWidget_MLBTeams"));
        listWidget_MLBTeams->setGeometry(QRect(10, 30, 401, 291));
        listWidget_MLBTeams->setFont(font2);
        pushButton_Edit = new QPushButton(groupBox_AddTeams);
        pushButton_Edit->setObjectName(QStringLiteral("pushButton_Edit"));
        pushButton_Edit->setGeometry(QRect(170, 120, 111, 41));
        pushButton_Edit->setAutoDefault(false);
        textBrowser_Teams = new QTextBrowser(groupBox_MLBTeams);
        textBrowser_Teams->setObjectName(QStringLiteral("textBrowser_Teams"));
        textBrowser_Teams->setGeometry(QRect(40, 50, 191, 81));
        radioButton_CancelTeam = new QRadioButton(groupBox_MLBTeams);
        radioButton_CancelTeam->setObjectName(QStringLiteral("radioButton_CancelTeam"));
        radioButton_CancelTeam->setGeometry(QRect(250, 110, 101, 23));
        radioButton_CancelTeam->setFont(font3);
        pushButton_AddToMatrix = new QPushButton(groupBox_MLBTeams);
        pushButton_AddToMatrix->setObjectName(QStringLiteral("pushButton_AddToMatrix"));
        pushButton_AddToMatrix->setGeometry(QRect(360, 120, 101, 31));
        pushButton_AddToMatrix->setAutoDefault(false);
        lineEdit_Row = new QLineEdit(groupBox_MLBTeams);
        lineEdit_Row->setObjectName(QStringLiteral("lineEdit_Row"));
        lineEdit_Row->setGeometry(QRect(360, 50, 101, 21));
        label_Row = new QLabel(groupBox_MLBTeams);
        label_Row->setObjectName(QStringLiteral("label_Row"));
        label_Row->setGeometry(QRect(370, 30, 91, 16));
        label_Col = new QLabel(groupBox_MLBTeams);
        label_Col->setObjectName(QStringLiteral("label_Col"));
        label_Col->setGeometry(QRect(370, 70, 91, 16));
        lineEdit_Col = new QLineEdit(groupBox_MLBTeams);
        lineEdit_Col->setObjectName(QStringLiteral("lineEdit_Col"));
        lineEdit_Col->setGeometry(QRect(360, 90, 101, 21));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(740, 30, 141, 131));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_Souvenirs = new QRadioButton(layoutWidget1);
        radioButton_Souvenirs->setObjectName(QStringLiteral("radioButton_Souvenirs"));
        radioButton_Souvenirs->setFont(font3);

        verticalLayout->addWidget(radioButton_Souvenirs);

        radioButton_MLBTeams = new QRadioButton(layoutWidget1);
        radioButton_MLBTeams->setObjectName(QStringLiteral("radioButton_MLBTeams"));
        radioButton_MLBTeams->setFont(font3);

        verticalLayout->addWidget(radioButton_MLBTeams);

        radioButton_SignOut = new QRadioButton(layoutWidget1);
        radioButton_SignOut->setObjectName(QStringLiteral("radioButton_SignOut"));
        radioButton_SignOut->setFont(font3);

        verticalLayout->addWidget(radioButton_SignOut);

        groupBox_Souvenirs = new QGroupBox(groupBox);
        groupBox_Souvenirs->setObjectName(QStringLiteral("groupBox_Souvenirs"));
        groupBox_Souvenirs->setGeometry(QRect(610, 180, 351, 511));
        groupBox_Souvenirs->setFont(font2);
        groupBox_Souvenirs->setAlignment(Qt::AlignCenter);
        pushButton_AddItems = new QPushButton(groupBox_Souvenirs);
        pushButton_AddItems->setObjectName(QStringLiteral("pushButton_AddItems"));
        pushButton_AddItems->setGeometry(QRect(20, 230, 291, 41));
        pushButton_AddItems->setAutoDefault(false);
        pushButton_DeleteItems = new QPushButton(groupBox_Souvenirs);
        pushButton_DeleteItems->setObjectName(QStringLiteral("pushButton_DeleteItems"));
        pushButton_DeleteItems->setGeometry(QRect(20, 230, 261, 41));
        pushButton_DeleteItems->setAutoDefault(false);
        pushButton_EditItems = new QPushButton(groupBox_Souvenirs);
        pushButton_EditItems->setObjectName(QStringLiteral("pushButton_EditItems"));
        pushButton_EditItems->setGeometry(QRect(20, 230, 261, 41));
        pushButton_EditItems->setAutoDefault(false);
        lineEdit_ItemPrice = new QLineEdit(groupBox_Souvenirs);
        lineEdit_ItemPrice->setObjectName(QStringLiteral("lineEdit_ItemPrice"));
        lineEdit_ItemPrice->setGeometry(QRect(20, 181, 281, 31));
        lineEdit_ItemName = new QLineEdit(groupBox_Souvenirs);
        lineEdit_ItemName->setObjectName(QStringLiteral("lineEdit_ItemName"));
        lineEdit_ItemName->setGeometry(QRect(20, 110, 281, 31));
        lineEdit_ItemName->setFont(font3);
        label_ItemPrice = new QLabel(groupBox_Souvenirs);
        label_ItemPrice->setObjectName(QStringLiteral("label_ItemPrice"));
        label_ItemPrice->setGeometry(QRect(20, 160, 261, 20));
        label_ItemPrice->setFont(font3);
        label_ItemName = new QLabel(groupBox_Souvenirs);
        label_ItemName->setObjectName(QStringLiteral("label_ItemName"));
        label_ItemName->setGeometry(QRect(24, 85, 251, 19));
        label_ItemName->setFont(font3);
        label_ItemSelection = new QLabel(groupBox_Souvenirs);
        label_ItemSelection->setObjectName(QStringLiteral("label_ItemSelection"));
        label_ItemSelection->setGeometry(QRect(20, 280, 251, 31));
        label_ItemSelection->setFont(font3);
        label_ItemSelection->setAlignment(Qt::AlignCenter);
        listWidget_Souvenirs = new QListWidget(groupBox_Souvenirs);
        listWidget_Souvenirs->setObjectName(QStringLiteral("listWidget_Souvenirs"));
        listWidget_Souvenirs->setGeometry(QRect(20, 310, 281, 171));
        layoutWidget2 = new QWidget(groupBox_Souvenirs);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 40, 341, 23));
        horizontalLayout_SouvenirEdit = new QHBoxLayout(layoutWidget2);
        horizontalLayout_SouvenirEdit->setObjectName(QStringLiteral("horizontalLayout_SouvenirEdit"));
        horizontalLayout_SouvenirEdit->setContentsMargins(0, 0, 0, 0);
        radioButton_AddItem = new QRadioButton(layoutWidget2);
        radioButton_AddItem->setObjectName(QStringLiteral("radioButton_AddItem"));
        radioButton_AddItem->setFont(font3);

        horizontalLayout_SouvenirEdit->addWidget(radioButton_AddItem);

        radioButton_EditItem = new QRadioButton(layoutWidget2);
        radioButton_EditItem->setObjectName(QStringLiteral("radioButton_EditItem"));
        radioButton_EditItem->setFont(font3);

        horizontalLayout_SouvenirEdit->addWidget(radioButton_EditItem);

        radioButton_DeleteItem = new QRadioButton(layoutWidget2);
        radioButton_DeleteItem->setObjectName(QStringLiteral("radioButton_DeleteItem"));
        radioButton_DeleteItem->setFont(font3);

        horizontalLayout_SouvenirEdit->addWidget(radioButton_DeleteItem);

        radioButton_CancelItem = new QRadioButton(layoutWidget2);
        radioButton_CancelItem->setObjectName(QStringLiteral("radioButton_CancelItem"));
        radioButton_CancelItem->setFont(font3);

        horizontalLayout_SouvenirEdit->addWidget(radioButton_CancelItem);

        layoutWidget->raise();
        lineEdit_ItemPrice->raise();
        lineEdit_ItemName->raise();
        label_ItemPrice->raise();
        label_ItemName->raise();
        pushButton_DeleteItems->raise();
        pushButton_EditItems->raise();
        pushButton_AddItems->raise();
        label_ItemSelection->raise();
        listWidget_Souvenirs->raise();
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 40, 161, 20));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 70, 161, 20));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 100, 161, 20));
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(160, 40, 161, 20));
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(160, 70, 161, 20));
        radioButton_6 = new QRadioButton(groupBox);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(160, 100, 161, 20));

        horizontalLayout->addWidget(groupBox);


        retranslateUi(AdminDialog);

        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QApplication::translate("AdminDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AdminDialog", "ADMINISTRATOR ONLY", Q_NULLPTR));
        groupBox_MLBTeams->setTitle(QApplication::translate("AdminDialog", "MLB TEAMS", Q_NULLPTR));
        radioButton_EditTeam->setText(QApplication::translate("AdminDialog", "EDIT", Q_NULLPTR));
        radioButton_AddTeam->setText(QApplication::translate("AdminDialog", "ADD", Q_NULLPTR));
        groupBox_AddTeams->setTitle(QApplication::translate("AdminDialog", "ADD MLB TEAM", Q_NULLPTR));
        label_Stadium->setText(QApplication::translate("AdminDialog", "Enter the stadium name:", Q_NULLPTR));
        label_Team->setText(QApplication::translate("AdminDialog", "Enter the team name:", Q_NULLPTR));
        pushButton_SubmitAddress->setText(QApplication::translate("AdminDialog", "ADDRESS", Q_NULLPTR));
        pushButton_CancelTeams->setText(QApplication::translate("AdminDialog", "CANCEL", Q_NULLPTR));
        label_Phone->setText(QApplication::translate("AdminDialog", "Enter the phone number:", Q_NULLPTR));
        label_Zip->setText(QApplication::translate("AdminDialog", "Enter the Zip:", Q_NULLPTR));
        label_CityStateZip->setText(QApplication::translate("AdminDialog", "Enter City, State, Zip:", Q_NULLPTR));
        label_Date->setText(QApplication::translate("AdminDialog", "Enter Date opened", Q_NULLPTR));
        label_Capacity->setText(QApplication::translate("AdminDialog", "Enter the Zip:", Q_NULLPTR));
        label_Address->setText(QApplication::translate("AdminDialog", "Enter the Address:", Q_NULLPTR));
        pushButton_SubmitTeam->setText(QApplication::translate("AdminDialog", "TEAM", Q_NULLPTR));
        pushButton_SubmitStadium->setText(QApplication::translate("AdminDialog", "STADIUM", Q_NULLPTR));
        pushButton_CSZ->setText(QApplication::translate("AdminDialog", "C S Z", Q_NULLPTR));
        pushButton_Capacity->setText(QApplication::translate("AdminDialog", "MAX", Q_NULLPTR));
        pushButton_Phone->setText(QApplication::translate("AdminDialog", "Phone", Q_NULLPTR));
        radioButton_StadiunName->setText(QApplication::translate("AdminDialog", "Stadium Name", Q_NULLPTR));
        radioButton_TeamName->setText(QApplication::translate("AdminDialog", "Team Name", Q_NULLPTR));
        radioButton_Address->setText(QApplication::translate("AdminDialog", "Street Address", Q_NULLPTR));
        radioButton_CSZ->setText(QApplication::translate("AdminDialog", "City State Zip", Q_NULLPTR));
        radioButton_Phonr->setText(QApplication::translate("AdminDialog", "Phone", Q_NULLPTR));
        radioButton_Date->setText(QApplication::translate("AdminDialog", "Date Opened", Q_NULLPTR));
        radioButton_Capacity->setText(QApplication::translate("AdminDialog", "Capacity", Q_NULLPTR));
        pushButton_SubmitDate->setText(QApplication::translate("AdminDialog", "DATE", Q_NULLPTR));
        groupBox_EditTeams->setTitle(QApplication::translate("AdminDialog", "EDIT SELECTION", Q_NULLPTR));
        pushButton_Edit->setText(QApplication::translate("AdminDialog", "Edit", Q_NULLPTR));
        radioButton_CancelTeam->setText(QApplication::translate("AdminDialog", "CANCEL", Q_NULLPTR));
        pushButton_AddToMatrix->setText(QApplication::translate("AdminDialog", "ADD MATR", Q_NULLPTR));
        label_Row->setText(QApplication::translate("AdminDialog", "Enter the row:", Q_NULLPTR));
        label_Col->setText(QApplication::translate("AdminDialog", "Enter the col:", Q_NULLPTR));
        radioButton_Souvenirs->setText(QApplication::translate("AdminDialog", "SOUVENIRS", Q_NULLPTR));
        radioButton_MLBTeams->setText(QApplication::translate("AdminDialog", "MLB TEAM", Q_NULLPTR));
        radioButton_SignOut->setText(QApplication::translate("AdminDialog", "SIGN OUT", Q_NULLPTR));
        groupBox_Souvenirs->setTitle(QApplication::translate("AdminDialog", "SOUVENIRS", Q_NULLPTR));
        pushButton_AddItems->setText(QApplication::translate("AdminDialog", "Add Items", Q_NULLPTR));
        pushButton_DeleteItems->setText(QApplication::translate("AdminDialog", "Delete Items", Q_NULLPTR));
        pushButton_EditItems->setText(QApplication::translate("AdminDialog", "Edit Items", Q_NULLPTR));
        lineEdit_ItemPrice->setPlaceholderText(QApplication::translate("AdminDialog", "0.00", Q_NULLPTR));
        lineEdit_ItemName->setPlaceholderText(QApplication::translate("AdminDialog", "\"Item's name\"", Q_NULLPTR));
        label_ItemPrice->setText(QApplication::translate("AdminDialog", "Enter item price $:", Q_NULLPTR));
        label_ItemName->setText(QApplication::translate("AdminDialog", "Enter item name:", Q_NULLPTR));
        label_ItemSelection->setText(QApplication::translate("AdminDialog", "Select an item:", Q_NULLPTR));
        radioButton_AddItem->setText(QApplication::translate("AdminDialog", "ADD", Q_NULLPTR));
        radioButton_EditItem->setText(QApplication::translate("AdminDialog", "EDIT", Q_NULLPTR));
        radioButton_DeleteItem->setText(QApplication::translate("AdminDialog", "DELETE", Q_NULLPTR));
        radioButton_CancelItem->setText(QApplication::translate("AdminDialog", "CANCEL", Q_NULLPTR));
        radioButton->setText(QApplication::translate("AdminDialog", "MAJOR LEAGUE", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("AdminDialog", "AMERICAN LEAGUE", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("AdminDialog", "NATIONAL LEAGUE", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("AdminDialog", "STADIUMS", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("AdminDialog", "GRASS", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("AdminDialog", "DATE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
