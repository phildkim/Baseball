#include "UserDialog.h"
#include "ui_UserDialog.h"

static int MAJOR_LEAGUE_USER[MAX_SIZE][MAX_SIZE]
{
    {INF, 680, 680, INF, INF, INF, INF, INF, 1390, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 2070, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {680, INF, INF, 340, 340, INF, 650, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {680, INF, INF, 340, 340, INF, 650, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, 340, 340, INF, INF, 110, INF, INF, 1500, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, 340, 340, INF, INF, 110, INF, INF, 1500, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, 110, 110, INF, 300, 830, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, 300, INF, 580, INF, INF, 870, 1115, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, 830, 580, INF, INF, 560, 650, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {1390, INF, INF, 1500, 1500, INF, INF, INF, INF, INF, INF, INF, 300, INF, INF, 465, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, 560, INF, INF, 460, INF, INF, 415, 415, 235, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, 870, 650, INF, 460, INF, 230, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 740, INF, INF},
    {INF, INF, INF, INF, INF, INF, 1115, INF, INF, INF, 230, INF, INF, INF, INF, 680, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 790, 965},
    {INF, INF, INF, INF, INF, INF, INF, INF, 300, INF, INF, INF, INF, 80, 80, INF, INF, INF, INF, 430, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, 415, INF, INF, 80, INF, INF, 240, INF, 250, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, 415, INF, INF, 80, INF, INF, 240, INF, 250, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, 465, 235, INF, 680, INF, INF, INF, INF, INF, 310, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 240, 240, INF, INF, 90, INF, 210, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 90, INF, 225, INF, 115, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 250, 250, 310, INF, 225, INF, INF, 260, INF, INF, INF, INF, INF, INF, INF, 375, 790, INF},
    {2070, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 430, INF, INF, INF, 210, INF, INF, INF, 225, 430, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 115, 260, 225, INF, INF, 315, 315, INF, 195, 195, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 430, INF, INF, 195, 195, INF, INF, INF, INF, INF, INF, 1255},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 315, 195, INF, INF, 80, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 315, 195, INF, INF, 80, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 80, 80, INF, 90, 90, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 195, INF, INF, INF, 90, INF, INF, 560, INF, 930},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 195, INF, INF, INF, 90, INF, INF, 560, INF, 930},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 740, INF, INF, INF, INF, INF, INF, INF, 375, INF, INF, INF, INF, INF, INF, 560, 560, INF, INF, 600},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 790, INF, INF, INF, INF, INF, INF, 790, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 210},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 965, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1255, INF, INF, INF, 930, 930, 600, 210, INF},
};

std::vector<std::string> MLB_TEAMS_USER = {
    "Seattle" ,         // 0
    "San Francisco",    // 1
    "Oakland",          // 2
    "Los Angeles",      // 3
    "Anaheim",          // 4
    "San Diego",        // 5
    "Phoenix",          // 6
    "Denver",           // 7
    "Minneapolis",      // 8
    "Kansas",           // 9
    "Arlington",        // 10
    "Houston",          // 11
    "Milwaukee",        // 12
    "Chicago",          // 13
    "Chicago",          // 14
    "St. Louis",        // 15
    "Detroit",          // 16
    "Cleveland",        // 17
    "Cincinnati",       // 18
    "Toronto",          // 19
    "Pittsburgh",       // 20
    "Boston",           // 21
    "South Bronxz",     // 22
    "Queens",           // 23
    "Philadelphia",     // 24
    "Baltimore",        // 25
    "Washington",       // 26
    "Atlanta",          // 27
    "St. Petersburg",   // 28
    "Miami"             // 29
};

UserDialog::UserDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDialog)
{
    ui->setupUi(this);

    // starting from california stadiums only
    ui->comboBox_CaliforniaStadium->addItem("Dodger Stadium");
    ui->comboBox_CaliforniaStadium->addItem("Angels Stadium of Anaheim");
    ui->comboBox_CaliforniaStadium->addItem("AT&T Park");
    ui->comboBox_CaliforniaStadium->addItem("O.co Coliseum");
    ui->comboBox_CaliforniaStadium->addItem("Petco Park");

    ui->pushButton_SavePurchase->setEnabled(false);
    ui->pushButton_SavePurchase->setVisible(false);
    ui->pushButton_SaveTravels->setVisible(false);
    ui->pushButton_SaveTravels->setEnabled(false);

    ui->label_TotalPurchases->setVisible(false);
    ui->textBrowser_Purchase->setVisible(false);
    ui->label_TotalDistance->setVisible(false);
    ui->textBrowser_TotalDistance->setVisible(false);

}

UserDialog::~UserDialog()
{
    delete ui;
}

// txt files
QString UserDialog::UserLoadTextFile(const QString& filename)
{
    // PROCESS: Open the text file to read and display QMessageBox if an error occurs
    QString txt_file = USER_DIRECTORY;
    txt_file.append(filename);
    QFile file(txt_file);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, tr("Unable to open file to load"), file.errorString());
        exit(1);
    }
    /*
    *
    *   C++ DATA STRUCTURE USING HEAP
    *
    **/
    QTextStream in(&file);
    in.setCodec("UTF-8");
    while(!in.atEnd())
    {
        size_t i = 0;
        QString qStr = in.readLine();
        *user_str += qStr.toStdString() + '\n';
        userHeap->Enqueue(*user_str, i);
        userHeapSort->heap_sort(user_str);
        ++i;
    }
    file.close();
    return QString::fromStdString(userHeapSort->heap_display().c_str());
}
void UserDialog::UserSaveTextFile(const QString& filename, int choice)
{
    if(choice == 1)
    {
        // INPUT - Set directory path to QFile
        QString txt_file = USER_DIRECTORY;
        txt_file.append(filename);
        QFile file(txt_file);

        // PROCESS: Open the text file write and display QMessageBox if an error occurs
        if(!file.open(QFile::WriteOnly | QFile::Text | QFile::Append))
        {
            QMessageBox::warning(this, tr("Unable to open file to save"), file.errorString());
            return;
        }

        // PROCESS: Overwrite the text file to ensure everything is updated properly
        QTextStream out(&file);
        out.setCodec("UTF-8");

        out << "\n\nSOUVENIRS PURCHASES:\n$" << QString::number(souvenirCost) << "\n";

        // PROCESS: Flush and close the file
        file.flush();
        file.close();
    }
    else if(choice == 2)
    {
        // INPUT - Set directory path to QFile
        QString txt_file = USER_DIRECTORY;
        txt_file.append(filename);
        QFile file(txt_file);

        // PROCESS: Open the text file write and display QMessageBox if an error occurs
        if(!file.open(QFile::WriteOnly | QFile::Text | QFile::Append))
        {
            QMessageBox::warning(this, tr("Unable to open file to save"), file.errorString());
            return;
        }

        // PROCESS: Overwrite the text file to ensure everything is updated properly
        QTextStream out(&file);
        out.setCodec("UTF-8");
        out << totalDistance << "\n";

        // PROCESS: Flush and close the file
        file.flush();
        file.close();
    }

}

void UserDialog::LoadTextFileQT(const QString& filename)
{
    // PROCESS: Open the text file to read and display QMessageBox if an error occurs
    QString txt_file = USER_DIRECTORY;
    txt_file.append(filename);
    QFile file(txt_file);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, tr("Unable to open file to load"), file.errorString());
        exit(1);
    }
    /*
    *
    *   C++ DATA STRUCTURE USING HEAP
    *
    **/
    QTextStream in(&file);
    in.setCodec("UTF-8");

    // initialize c++ data structures
    userHeap = new DataStructures<std::string,double>(MAX);
    userHeapSort = new MyHeap<std::string>;
    user_str = new std::string[MAX];
    size_t i = 0;

    while(!in.atEnd() && i < MAX_SIZE)
    {
        QString qStr = in.readLine();
        int position = qStr.indexOf(NAMES);

        if(position >= 0)
        {
            // finds stadium name
            Stadium_Names = qStr.right(position + NAMES.length() + qStr.length());
            Stadium_List = Stadium_Names.split(NAMES);
            Stadium_List.removeAll("");


            // add to listwidgets
            ui->listWidget_Planner->addItems(Stadium_List);
            ui->comboBox_CaliforniaStadium->addItems(Stadium_List);
            ui->comboBox_DestintionStadium->addItems(Stadium_List);

            // store it c++ data structure
            *user_str += Stadium_Names.toStdString();
            userHeap->Enqueue(*user_str, i);
            userHeapSort->heap_sort(user_str);

            ++i;
        }
    }
    ui->textBrowser->setText(userHeapSort->heap_display().c_str());
    file.close();
}

// user selects
void UserDialog::on_pushButton_SelectHomeTeam_clicked()
{
    homeTeam = ui->comboBox_HomeStadium->currentText();
    ui->label_HomeTeamResult->setText(homeTeam);
}
void UserDialog::on_pushButton_SelectAwayTeam_clicked()
{
    awayTeam = ui->comboBox_DestintionStadium->currentText();
    ui->label_AwayTeamResult->setText(awayTeam);
}

// calculate
void UserDialog::on_pushButton_Calculate_clicked()
{
    ui->label_TotalDistance->setVisible(true);
    ui->textBrowser_TotalDistance->setVisible(true);

    Graph<int> map(MAX_SIZE);
    for(int i = 0; i < MAX_SIZE; ++i)
    {
        for(int j = 0; j < MAX_SIZE; ++j)
            if(MAJOR_LEAGUE_USER[i][j] != INF)
                map.addEdge(i, j, MAJOR_LEAGUE_USER[i][j]);
    }
    int souce = QString::number(ui->comboBox_HomeStadium->currentIndex()-1).toInt();
    int dest = QString::number(ui->comboBox_DestintionStadium->currentIndex()-1).toInt();
    if(souce != dest)
    {
        ui->textBrowser_TotalDistance->setText(map.find_distance(souce, dest, MLB_TEAMS_USER).c_str());
        totalDistance += map.find_distance(souce, dest, MLB_TEAMS_USER).c_str();
    }
    else
    {
        int button = QMessageBox::question(this,
                                           tr("Confirm Same Location"),
                                           tr("Are you sure you want go to the same stadium \"%1\"?").arg(ui->comboBox_HomeStadium->currentText()),
                                           QMessageBox::Yes | QMessageBox::No);
        if(button == QMessageBox::Yes)
        {
            ui->textBrowser_TotalDistance->setText(QString::number(10));
        }
    }
    ui->pushButton_SaveTravels->setVisible(true);
    ui->pushButton_SaveTravels->setEnabled(true);
}
void UserDialog::on_pushButton_PurchaseButton_clicked()
{
    souvenirItem = ui->comboBox_SouvenirsList->currentText();
    ui->label_PurchaseResult->setText(souvenirItem);
}
void UserDialog::on_pushButton_CalculatePurchases_clicked()
{
    ui->textBrowser_Purchase->setVisible(true);
    ui->label_TotalPurchases->setVisible(true);
    ui->textBrowser_Purchase->setVisible(true);

    QStringList SouvenirPrice = souvenirItem.split("$");
    foreach (QString price, SouvenirPrice) {
        souvenirCost += price.toDouble();
    }
    ui->textBrowser_Purchase->setText("$" + QString::number(souvenirCost));
    ui->pushButton_SavePurchase->setEnabled(true);
    ui->pushButton_SavePurchase->setVisible(true);
}

// Write purchase on text file
void UserDialog::on_pushButton_SavePurchase_clicked()
{
    UserSaveTextFile("Purchase.txt",1);
}
// Write travel on text file
void UserDialog::on_pushButton_SaveTravels_clicked()
{
    UserSaveTextFile("Distance.txt",2);
}
void UserDialog::on_pushButton_Logout_clicked()
{
    close();
}


void UserDialog::on_radioButton_MLB_clicked()
{
    Graph<int> shortestDistance(MAX_SIZE);
    for(int i = 0; i < MAX_SIZE; ++i)
    {
        for(int j = 0; j < MAX_SIZE; ++j)
            if(MAJOR_LEAGUE_USER[i][j] != INF)
                shortestDistance.addEdge(i, j, MAJOR_LEAGUE_USER[i][j]);
    }

    ui->textBrowser_ShortestDistance->setText(shortestDistance.print_dijkstra(3,MLB_TEAMS_USER).c_str());
}
void UserDialog::on_pushButton_FindShortestPath_clicked()
{
    Graph<int> TSM(MAX_SIZE);
    for(int i = 0; i < MAX_SIZE; ++i)
    {
        for(int j = 0; j < MAX_SIZE; ++j)
            if(MAJOR_LEAGUE_USER[i][j] != INF)
                TSM.addEdge(i, j, MAJOR_LEAGUE_USER[i][j]);
    }
    ui->textBrowser_ShortestPathResult->setText(TSM.find_shortest(3,6,MLB_TEAMS_USER).c_str());
    //ui->textBrowser_ShortestPathResult->setText(TSM.print_prim(3,MLB_TEAMS_USER).c_str());
}
void UserDialog::on_pushButton_ClearPath_clicked()
{
    ui->listWidget_SelectedTeams->clear();
    ui->listWidget_Planner->clearSelection();
    ui->textBrowser_ShortestPathResult->clear();
    SHORTEST_PATH.clear();
}
void UserDialog::on_pushButton_PlannerTeamsSelected_clicked()
{
    HOME_TEAM = ui->comboBox_CaliforniaStadium->currentText();
    ui->textBrowser_ShortestPathResult->setText("STARTING POINT:\n" + HOME_TEAM + "\n\nDESTINIATIONS:\n" + SHORTEST_PATH);
}

void UserDialog::on_listWidget_Planner_itemClicked(QListWidgetItem *item)
{
    ui->listWidget_SelectedTeams->addItem(item->listWidget()->currentItem()->text());
    SHORTEST_PATH += item->listWidget()->currentItem()->text() + '\n';


}
void UserDialog::on_listWidget_SelectedTeams_itemDoubleClicked(QListWidgetItem *item)
{
    // show team info
    TEAM_INFO = item->listWidget()->currentItem()->text();
    ui->textBrowser_ShortestPathResult->setText(TEAM_INFO);
}

void UserDialog::on_pushButton_clicked()
{
    LoadTextFileQT("MLB.txt");
}
