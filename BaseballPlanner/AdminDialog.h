#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H
#include <QDialog>
#include <QtWidgets>
#include <QtCore>
#include <QtGui>
// c++ header files
#include "DataStructures.h"
#include "Heap.h"
#include "graph.h"


namespace Ui {
class AdminDialog;
}

class AdminDialog : public QDialog
{
    Q_OBJECT

    const QString ADMIN_DIRECTORY = "/Users/phildkim86/Qt/CS_08/BASEBALL/build-BaseballPlanner-Desktop_Qt_5_9_2_clang_64bit-Debug/";
public:
    explicit AdminDialog(QWidget *parent = 0);
    ~AdminDialog();


private slots:
    // souvenirs settings
    void SouvenirsSetting(const QString& setting);

    // TEXT FILES ITEMS
    void LoadTextFile(const QString& filename);
    void SaveTextFile(const QString& filename);
    QString LoadTextFileToTextBrowser(const QString& filename);

    // ADMIN SELECTION: TEAMS OR ITEMS
    bool on_radioButton_Souvenirs_clicked();
    bool on_radioButton_MLBTeams_clicked();
    bool on_radioButton_SignOut_clicked();

    // ITEMS EDIT SELECTIONS: ADD, EDIT, DELETE
    bool on_radioButton_AddItem_clicked();
    bool on_radioButton_EditItem_clicked();
    bool on_radioButton_DeleteItem_clicked();
    bool on_radioButton_CancelItem_clicked();

    // ITEMS SUBMIT AND SAVED TO TEXT FILE
    void on_pushButton_AddItems_clicked();
    void on_pushButton_DeleteItems_clicked();
    void on_pushButton_EditItems_clicked();


    // MLB TEAMS SETTINGS
    void MLBTeamsSettings(const QString& setting);

    // TEXT FILES TEAMS
    void LoadTeamsTextFile(const QString& filename);
    void SaveTeamsTextFile(const QString& filename);

    // ITEMS EDIT SELECTIONS: ADD, EDIT
    bool on_radioButton_AddTeam_clicked();
    bool on_radioButton_EditTeam_clicked();
    bool on_radioButton_CancelTeam_clicked();


    // TEAMS SUBMIT AND SAVED TO TEXT FILE
    void on_pushButton_SubmitAddress_clicked();
    void on_pushButton_CancelTeams_clicked();
    void on_pushButton_SubmitStadium_clicked();
    void on_pushButton_CSZ_clicked();
    void on_pushButton_Capacity_clicked();
    void on_pushButton_Phone_clicked();
    void on_pushButton_Cancel_clicked();
    void on_pushButton_SubmitTeam_clicked();
    void on_pushButton_SubmitDate_clicked();
    void on_pushButton_Edit_clicked();


    // RADIO BUTTON TO ADD NEW TEAM
    bool on_radioButton_StadiunName_clicked();
    bool on_radioButton_TeamName_clicked();
    bool on_radioButton_Phonr_clicked();
    bool on_radioButton_Address_clicked();
    bool on_radioButton_CSZ_clicked();
    bool on_radioButton_Capacity_clicked();
    bool on_radioButton_Date_clicked();



    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_radioButton_4_clicked();
    void on_radioButton_5_clicked();
    void on_radioButton_6_clicked();
    void on_pushButton_AddToMatrix_clicked();

private:
    Ui::AdminDialog *ui;

    // QString to add new team
    QString StadiumName;
    QString TeamName;
    QString StreetAddress;
    QString CityStateZip;
    QString PhoneNumber;
    QString DateOpened;
    QString SeatingCapacity;

    // QStringList to store text file data
    QStringList MLB_List;
    QStringList Souvenirs_List;

    // c++ data structure using heap
    DataStructures<std::string,double> *adminHeap;      // Heap data structure
    MyHeap<std::string> *adminHeapSort;                 // Sort the heap
    std::string *str;                                  // std string used to convert qstring to use in heap

};

#endif // ADMINDIALOG_H
