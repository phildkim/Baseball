#ifndef USERDIALOG_H
#define USERDIALOG_H
#include <QDialog>
#include <QStringList>
#include <QtWidgets>
#include <QtCore>
#include <QtGui>
// c++ header files
#include "DataStructures.h"
#include "Heap.h"
#include "graph.h"

namespace Ui {
class UserDialog;
}
class UserDialog : public QDialog
{
    Q_OBJECT

    const QString USER_DIRECTORY = "/Users/phildkim86/Qt/CS_08/BASEBALL/build-BaseballPlanner-Desktop_Qt_5_9_2_clang_64bit-Debug/";
public:
    explicit UserDialog(QWidget *parent = 0);
    ~UserDialog();





private slots:
    void UserSaveTextFile(const QString& filename, int choice);
    QString UserLoadTextFile(const QString& filename);

    void LoadTextFileQT(const QString& filename);

    void on_pushButton_SelectHomeTeam_clicked();
    void on_pushButton_SelectAwayTeam_clicked();
    void on_pushButton_Calculate_clicked();
    void on_pushButton_PurchaseButton_clicked();
    void on_pushButton_CalculatePurchases_clicked();
    void on_pushButton_SavePurchase_clicked();
    void on_pushButton_SaveTravels_clicked();
    void on_pushButton_Logout_clicked();


    void on_radioButton_MLB_clicked();
    void on_pushButton_FindShortestPath_clicked();
    void on_pushButton_ClearPath_clicked();


    void on_pushButton_PlannerTeamsSelected_clicked();
    void on_listWidget_Planner_itemClicked(QListWidgetItem *item);
    void on_listWidget_SelectedTeams_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

private:
    Ui::UserDialog *ui;

    QStringList Selected_Stadiums;
    QStringList Stadium_List;
    QString Stadium_Names;
    // stadium title from text text
    const QString NAMES = "BaseBallStadiumName: ";





    // show team info
    QString TEAM_INFO;

    // to find shortest path
    QString HOME_TEAM;
    QString SHORTEST_PATH;

    // list of stadium names for user to select and also to use for shortest path
    QString STADIUM_NAME;







    // keeping track of travels
    QString totalDistance;

    // finding distance between two cities
    QString homeTeam;
    QString awayTeam;

    // keep track of souvenir purchases
    QString souvenirItem;
    double souvenirCost;

    // c++ data structure using heap
    DataStructures<std::string,double> *userHeap;       // Heap data structure
    MyHeap<std::string> *userHeapSort;                  // Sort the heap
    std::string *user_str;                              // std string used to convert qstring to use in heap

};

#endif // USERDIALOG_H
