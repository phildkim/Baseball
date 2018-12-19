#include "AdminDialog.h"
#include "ui_AdminDialog.h"

AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);
    ui->textBrowser_Admin->setText("WELCOME ADMIN!!!");
    MLBTeamsSettings("OFF");
    SouvenirsSetting("OFF");
}

AdminDialog::~AdminDialog()
{
    delete ui;
}


/*  --------SOUVERNIRS--------  */

/*
 *
 *      SOUVENIRSS
 *      - SOUVENIR SETTINGS
 */
void AdminDialog::SouvenirsSetting(const QString& setting)
{
    if(setting == "OFF")
    {
        // radio buttons
        ui->radioButton_AddItem->setVisible(false);
        ui->radioButton_EditItem->setVisible(false);
        ui->radioButton_DeleteItem->setVisible(false);
        ui->radioButton_CancelItem->setVisible(false);

        // lineEdit item name
        ui->label_ItemName->setVisible(false);
        ui->lineEdit_ItemName->setVisible(false);
        ui->lineEdit_ItemName->setEnabled(false);

        // lineEdit item price
        ui->label_ItemPrice->setVisible(false);
        ui->lineEdit_ItemPrice->setVisible(false);
        ui->lineEdit_ItemPrice->setEnabled(false);

        // pushButton add items
        ui->pushButton_AddItems->setVisible(false);
        ui->pushButton_AddItems->setEnabled(false);

        // pushButton edit items
        ui->pushButton_EditItems->setVisible(false);
        ui->pushButton_EditItems->setEnabled(false);

        // pushButton delete items
        ui->pushButton_DeleteItems->setVisible(false);
        ui->pushButton_DeleteItems->setEnabled(false);

        // list Widget
        ui->label_ItemSelection->setVisible(false);
        ui->listWidget_Souvenirs->setVisible(false);
        ui->listWidget_Souvenirs->setEnabled(false);

        // Souvenir groupBox
        ui->groupBox_Souvenirs->setVisible(false);

        LoadTextFile("SouvenirList.txt");
    }
    else if(setting == "INIT")
    {
        // radio buttons
        ui->radioButton_AddItem->setVisible(true);
        ui->radioButton_EditItem->setVisible(true);
        ui->radioButton_DeleteItem->setVisible(true);
        ui->radioButton_CancelItem->setVisible(true);

        // lineEdit item name
        ui->label_ItemName->setVisible(false);
        ui->lineEdit_ItemName->setVisible(false);
        ui->lineEdit_ItemName->setEnabled(false);

        // lineEdit item price
        ui->label_ItemPrice->setVisible(false);
        ui->lineEdit_ItemPrice->setVisible(false);
        ui->lineEdit_ItemPrice->setEnabled(false);

        // pushButton add items
        ui->pushButton_AddItems->setVisible(false);
        ui->pushButton_AddItems->setEnabled(false);

        // pushButton edit items
        ui->pushButton_EditItems->setVisible(false);
        ui->pushButton_EditItems->setEnabled(false);

        // pushButton delete items
        ui->pushButton_DeleteItems->setVisible(false);
        ui->pushButton_DeleteItems->setEnabled(false);

        // list Widget
        ui->label_ItemSelection->setVisible(false);
        ui->listWidget_Souvenirs->setVisible(false);
        ui->listWidget_Souvenirs->setEnabled(false);

        // Souvenir groupBox
        ui->groupBox_Souvenirs->setVisible(true);
    }
    else if(setting == "ADD")
    {
        // radio buttons
        ui->radioButton_AddItem->setVisible(true);
        ui->radioButton_EditItem->setVisible(true);
        ui->radioButton_DeleteItem->setVisible(true);
        ui->radioButton_CancelItem->setVisible(true);

        // lineEdit item name
        ui->label_ItemName->setVisible(true);
        ui->lineEdit_ItemName->setVisible(true);
        ui->lineEdit_ItemName->setEnabled(true);

        // lineEdit item price
        ui->label_ItemPrice->setVisible(true);
        ui->lineEdit_ItemPrice->setVisible(true);
        ui->lineEdit_ItemPrice->setEnabled(true);

        // pushButton add items
        ui->pushButton_AddItems->setVisible(true);
        ui->pushButton_AddItems->setEnabled(true);

        // pushButton edit items
        ui->pushButton_EditItems->setVisible(false);
        ui->pushButton_EditItems->setEnabled(false);

        // pushButton delete items
        ui->pushButton_DeleteItems->setVisible(false);
        ui->pushButton_DeleteItems->setEnabled(false);

        // list Widget
        ui->label_ItemSelection->setVisible(false);
        ui->listWidget_Souvenirs->setVisible(false);
        ui->listWidget_Souvenirs->setEnabled(false);

        // Souvenir groupBox
        ui->groupBox_Souvenirs->setVisible(true);
    }
    else if(setting == "EDIT")
    {
        // radio buttons
        ui->radioButton_AddItem->setVisible(true);
        ui->radioButton_EditItem->setVisible(true);
        ui->radioButton_DeleteItem->setVisible(true);
        ui->radioButton_CancelItem->setVisible(true);

        // lineEdit item name
        ui->label_ItemName->setVisible(true);
        ui->lineEdit_ItemName->setVisible(true);
        ui->lineEdit_ItemName->setEnabled(true);

        // lineEdit item price
        ui->label_ItemPrice->setVisible(true);
        ui->lineEdit_ItemPrice->setVisible(true);
        ui->lineEdit_ItemPrice->setEnabled(true);

        // pushButton add items
        ui->pushButton_AddItems->setVisible(false);
        ui->pushButton_AddItems->setEnabled(false);

        // pushButton edit items
        ui->pushButton_EditItems->setVisible(true);
        ui->pushButton_EditItems->setEnabled(true);

        // pushButton delete items
        ui->pushButton_DeleteItems->setVisible(false);
        ui->pushButton_DeleteItems->setEnabled(false);

        // list Widget
        ui->label_ItemSelection->setVisible(true);
        ui->listWidget_Souvenirs->setVisible(true);
        ui->listWidget_Souvenirs->setEnabled(true);

        // Souvenir groupBox
        ui->groupBox_Souvenirs->setVisible(true);
    }
    else if(setting == "DEL")
    {
        // radio buttons
        ui->radioButton_AddItem->setVisible(true);
        ui->radioButton_EditItem->setVisible(true);
        ui->radioButton_DeleteItem->setVisible(true);
        ui->radioButton_CancelItem->setVisible(true);

        // lineEdit item name
        ui->label_ItemName->setVisible(false);
        ui->lineEdit_ItemName->setVisible(false);
        ui->lineEdit_ItemName->setEnabled(false);

        // lineEdit item price
        ui->label_ItemPrice->setVisible(false);
        ui->lineEdit_ItemPrice->setVisible(false);
        ui->lineEdit_ItemPrice->setEnabled(false);

        // pushButton add items
        ui->pushButton_AddItems->setVisible(false);
        ui->pushButton_AddItems->setEnabled(false);

        // pushButton edit items
        ui->pushButton_EditItems->setVisible(false);
        ui->pushButton_EditItems->setEnabled(false);

        // pushButton delete items
        ui->pushButton_DeleteItems->setVisible(true);
        ui->pushButton_DeleteItems->setEnabled(true);

        // list Widget
        ui->label_ItemSelection->setVisible(true);
        ui->listWidget_Souvenirs->setVisible(true);
        ui->listWidget_Souvenirs->setEnabled(true);

        // Souvenir groupBox
        ui->groupBox_Souvenirs->setVisible(true);
    }
    else if(setting == "CANCEL")
    {
        ui->groupBox_Souvenirs->setVisible(false);
    }
}

/*
 *
 *      TEXT FILES
 *      -Load Text file
 *      -Save Text file
 *      Load Text file as a QString
 */
void AdminDialog::LoadTextFile(const QString& filename)
{
    // INPUT - Set directory path to QFile
    QString txt_file = ADMIN_DIRECTORY;
    txt_file.append(filename);
    QFile file(txt_file);

    // PROCESS: Open the text file to read and display QMessageBox if an error occurs
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,
                             tr("Unable to open file to load"),
                             file.errorString());
        return;
    }

    // INPUT - QTextStream to read in the text file for GUI
    QTextStream in(&file);
    in.setCodec("UTF-8");
    size_t i = 0;

    // PROCESS: While loop to read in each line to the QListWidget
    while(!in.atEnd())
    {
        // qt QStringList to QtListWidgets
        QString qStr = in.readLine();
        Souvenirs_List.append(qStr);
        ++i;
    }

    // add to list widget for editing items
    ui->listWidget_Souvenirs->addItems(Souvenirs_List);

    // close the file
    file.close();
}
void AdminDialog::SaveTextFile(const QString& filename)
{
    // INPUT - Set directory path to QFile
    QString txt_file = ADMIN_DIRECTORY;
    txt_file.append(filename);
    QFile file(txt_file);

    // PROCESS: Open the text file write and display QMessageBox if an error occurs
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,
                             tr("Unable to open file to save"),
                             file.errorString());
        return;
    }

    // PROCESS: Overwrite the text file to ensure everything is updated properly
    QTextStream out(&file);
    out.setCodec("UTF-8");

    // PROCESS: For loop to write to a text file whatever is on the list widget
    for(int row = 0; row < ui->listWidget_Souvenirs->count(); ++row)
    {
        QListWidgetItem *items = ui->listWidget_Souvenirs->item(row);
        out << items->text().simplified() << '\n';
    }

    // PROCESS: Flush and close the file
    file.flush();
    file.close();
}
QString AdminDialog::LoadTextFileToTextBrowser(const QString& filename)
{
    // INPUT - Set directory path to QFile
    QString txt_file = ADMIN_DIRECTORY;
    txt_file.append(filename);
    QFile file(txt_file);

    // PROCESS: Open the text file to read and display QMessageBox if an error occurs
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,
                             tr("Unable to open file to load"),
                             file.errorString());
        exit(1);
    }

    // INPUT - QTextStream to read in the text file for GUI
    QTextStream in(&file);
    in.setCodec("UTF-8");
    size_t i = 0;
    // initialize c++ data structures
    adminHeap = new DataStructures<std::string,double>(MAX);
    adminHeapSort = new MyHeap<std::string>;
    str = new std::string[MAX];

    // PROCESS: While loop to read in each line to the QListWidget
    while(!in.atEnd())
    {
        // c++ data structure to view to user
        QString qStr = in.readLine();
        *str += qStr.toStdString() + '\n';
        adminHeap->Enqueue(*str, i);
        adminHeapSort->heap_sort(str);
        ++i;
    }
    // close the file
    file.close();

    return QString::fromStdString(adminHeapSort->heap_display().c_str());
}

/*
 *
 *      ADMIN SELECTIONS
 *      -TEAMS radioButton to modify teams
 *      -ITEMS radioButton to modify items
 *      -SIGNOUT radioButton to signout of admin
 */
bool AdminDialog::on_radioButton_Souvenirs_clicked()
{
    SouvenirsSetting("INIT");
    ui->groupBox_MLBTeams->setVisible(false);
    return ui->radioButton_Souvenirs->isChecked();
}
bool AdminDialog::on_radioButton_MLBTeams_clicked()
{
    MLBTeamsSettings("INIT");
    ui->groupBox_Souvenirs->setVisible(false);
    return ui->radioButton_MLBTeams->isChecked();
}
bool AdminDialog::on_radioButton_SignOut_clicked()
{
    close();
    return ui->radioButton_SignOut->isChecked();
}

/*
 *
 *      ADMIN SELECTION:
 *      -ADD radio button to set settings to add
 *      -EDIT radioButton to set settings to edit
 *      -DELETE radioButton to set settings to delete
 *
 */
bool AdminDialog::on_radioButton_AddItem_clicked()
{
    SouvenirsSetting("ADD");
    return ui->radioButton_AddItem->isChecked();
}
bool AdminDialog::on_radioButton_EditItem_clicked()
{
    SouvenirsSetting("EDIT");
    return ui->radioButton_EditItem->isChecked();
}
bool AdminDialog::on_radioButton_DeleteItem_clicked()
{
    SouvenirsSetting("DEL");
    return ui->radioButton_DeleteItem->isChecked();
}
bool AdminDialog::on_radioButton_CancelItem_clicked()
{
    SouvenirsSetting("CANCEL");
    return ui->groupBox_MLBTeams->isChecked();
}

/*
 *
 *      SAVE TO TEXT FILE:
 *      -ADD ITEMS pushButton to save to text file
 *      -EDIT ITEMS pushButton to save to text file
 *      -DELETE ITEMS pushButton to save to text file
 *
 */
void AdminDialog::on_pushButton_AddItems_clicked()
{
    QString item_name = ui->lineEdit_ItemName->text();         // INPUT - User entry for item name
    QString item_price = ui->lineEdit_ItemPrice->text();    // INPUT - User entry for item price
    QString item = item_name + " $" + item_price;              // OUTPUT - Concatanate the two strings

    // PROCESS: Add new string to list widget and write the text file
    ui->listWidget_Souvenirs->addItem(new QListWidgetItem(item));
    SaveTextFile("SouvenirList.txt");

    // OUTPUT: Display a successfully QMessageBox massage to the user
    QMessageBox::information(this,
                             tr("Added Item Successful"),
                             tr("\"%1\" has been added to your souvenir list.").arg(item_name));

    // PROCESS: Clear the lineEdits
    ui->lineEdit_ItemName->clear();
    ui->lineEdit_ItemPrice->clear();
}
void AdminDialog::on_pushButton_DeleteItems_clicked()
{
    QString delete_item = ui->listWidget_Souvenirs->currentItem()->text();
    int button = QMessageBox::question(this,
                                       tr("Confirm Remove"),
                                       tr("Are you sure you want to remove \"%1\"?").arg(delete_item),
                                       QMessageBox::Yes | QMessageBox::No);
    if(button == QMessageBox::Yes)
    {
        QListWidgetItem *remove_item = ui->listWidget_Souvenirs->takeItem(ui->listWidget_Souvenirs->currentRow());
        delete remove_item;
        SaveTextFile("SouvenirList.txt");
        QMessageBox::information(this,
                                 tr("Remove Successful"),
                                 tr("\"%1\" has been removed from your souvenir list.").arg(delete_item));
    }
    // PROCESS: Clear the lineEdits
    ui->lineEdit_ItemName->clear();
    ui->lineEdit_ItemPrice->clear();
}
void AdminDialog::on_pushButton_EditItems_clicked()
{
    QString item_name = ui->lineEdit_ItemName->text();         // INPUT - User entry for item name
    QString item_price = ui->lineEdit_ItemPrice->text();    // INPUT - User entry for item price
    QString item = item_name + " $" + item_price;              // OUTPUT - Concatanate the two strings

    QListWidgetItem *edit_item = ui->listWidget_Souvenirs->currentItem();
    edit_item->setText(item);
    SaveTextFile("SouvenirList.txt");

    QMessageBox::information(this,
                             tr("Edited Item Successful"),
                             tr("\"%1\" has been edited in your souvenir list.").arg(item));
    // PROCESS: Clear the lineEdits
    ui->lineEdit_ItemName->clear();
    ui->lineEdit_ItemPrice->clear();
}





/* --------MLBTEAMS-------- */

/*
 *
 *      MLB TEXT FILE
 *      - Load Text File
 *      - Save Text File
 *
 */
void AdminDialog::LoadTeamsTextFile(const QString& filename)
{
    // INPUT - Set directory path to QFile
    QString txt_file = ADMIN_DIRECTORY;
    txt_file.append(filename);
    QFile file(txt_file);

    // PROCESS: Open the text file to read and display QMessageBox if an error occurs
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,
                             tr("Unable to open file to load"),
                             file.errorString());
        return;
    }

    // INPUT - QTextStream to read in the text file for GUI
    QTextStream in(&file);
    in.setCodec("UTF-8");
    size_t i = 0;

    // PROCESS: While loop to read in each line to the QListWidget
    while(!in.atEnd())
    {
        // qt QStringList to QtListWidgets
        QString qStr = in.readLine();
        MLB_List.append(qStr);
        ++i;
    }

    // add to list widget for editing items
    ui->listWidget_MLBTeams->addItems(MLB_List);

    // close the file
    file.close();
}
void AdminDialog::SaveTeamsTextFile(const QString& filename)
{
    // INPUT - Set directory path to QFile
    QString txt_file = ADMIN_DIRECTORY;
    txt_file.append(filename);
    QFile file(txt_file);

    // PROCESS: Open the text file write and display QMessageBox if an error occurs
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,
                             tr("Unable to open file to save"),
                             file.errorString());
        return;
    }

    // PROCESS: Overwrite the text file to ensure everything is updated properly
    QTextStream out(&file);
    out.setCodec("UTF-8");

    // PROCESS: For loop to write to a text file whatever is on the list widget
    for(int row = 0; row < ui->listWidget_MLBTeams->count(); ++row)
    {
        QListWidgetItem *items = ui->listWidget_MLBTeams->item(row);
        out << items->text().simplified() << '\n';
    }

    // PROCESS: Flush and close the file
    file.flush();
    file.close();
}



/*
 *
 *      MLB SETTINGS
 *
 */
void AdminDialog::MLBTeamsSettings(const QString& setting)
{
    if(setting == "OFF")
    {
        // lineEdit for stadium name
        ui->lineEdit_EditTeams->setVisible(false);
        ui->lineEdit_EditTeams->setEnabled(false);
        ui->label_Address->setVisible(false);
        ui->label_Phone->setVisible(false);
        ui->label_Team->setVisible(false);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(false);
        ui->label_Capacity->setVisible(false);
        ui->label_CityStateZip->setVisible(false);
        ui->label_Date->setVisible(false);

        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(false);
        ui->pushButton_CSZ->setEnabled(false);
        ui->pushButton_CancelTeams->setVisible(false);
        ui->pushButton_CancelTeams->setEnabled(false);
        ui->pushButton_Capacity->setVisible(false);
        ui->pushButton_Capacity->setEnabled(false);
        ui->pushButton_Phone->setVisible(false);
        ui->pushButton_Phone->setEnabled(false);
        ui->pushButton_SubmitDate->setVisible(false);
        ui->pushButton_SubmitDate->setEnabled(false);
        ui->pushButton_SubmitAddress->setVisible(false);
        ui->pushButton_SubmitAddress->setEnabled(false);
        ui->pushButton_SubmitStadium->setVisible(false);
        ui->pushButton_SubmitStadium->setEnabled(false);
        ui->pushButton_SubmitTeam->setVisible(false);
        ui->pushButton_SubmitTeam->setEnabled(false);
        ui->pushButton_Edit->setVisible(false);
        ui->pushButton_Edit->setEnabled(false);

        // turn off radio then user selects an item
        ui->radioButton_StadiunName->setVisible(false);
        ui->radioButton_StadiunName->setEnabled(false);
        ui->radioButton_TeamName->setVisible(false);
        ui->radioButton_TeamName->setEnabled(false);
        ui->radioButton_Address->setVisible(false);
        ui->radioButton_Address->setEnabled(false);
        ui->radioButton_CSZ->setVisible(false);
        ui->radioButton_CSZ->setEnabled(false);
        ui->radioButton_Phonr->setVisible(false);
        ui->radioButton_Phonr->setEnabled(false);
        ui->radioButton_Date->setVisible(false);
        ui->radioButton_Date->setEnabled(false);
        ui->radioButton_Capacity->setVisible(false);
        ui->radioButton_Capacity->setEnabled(false);

        // list widget
        ui->listWidget_MLBTeams->setVisible(false);
        ui->listWidget_MLBTeams->setEnabled(true);

        // groupBox MLB, ADD, EDIT
        ui->groupBox_MLBTeams->setVisible(false);
        ui->groupBox_AddTeams->setVisible(false);
        ui->groupBox_EditTeams->setVisible(false);

        // load text file info onto the widget
        LoadTeamsTextFile("MLB.txt");
    }
    else if(setting == "STADIUM_NAME")
    {
        // lineEdit for stadium name
        ui->lineEdit_EditTeams->setVisible(true);
        ui->lineEdit_EditTeams->setEnabled(true);
        ui->lineEdit_EditTeams->clear();
        ui->lineEdit_EditTeams->setPlaceholderText("Stadium Name: ");

        // labes for stadium name
        ui->label_Address->setVisible(false);
        ui->label_Phone->setVisible(false);
        ui->label_Team->setVisible(false);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(true);
        ui->label_Capacity->setVisible(false);
        ui->label_CityStateZip->setVisible(false);
        ui->label_Date->setVisible(false);

        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(false);
        ui->pushButton_CSZ->setEnabled(false);
        ui->pushButton_CancelTeams->setVisible(true);
        ui->pushButton_CancelTeams->setEnabled(true);
        ui->pushButton_Capacity->setVisible(false);
        ui->pushButton_Capacity->setEnabled(false);
        ui->pushButton_Phone->setVisible(false);
        ui->pushButton_Phone->setEnabled(false);
        ui->pushButton_SubmitDate->setVisible(false);
        ui->pushButton_SubmitDate->setEnabled(false);
        ui->pushButton_SubmitAddress->setVisible(false);
        ui->pushButton_SubmitAddress->setEnabled(false);
        ui->pushButton_SubmitStadium->setVisible(true);
        ui->pushButton_SubmitStadium->setEnabled(true);
        ui->pushButton_SubmitTeam->setVisible(false);
        ui->pushButton_SubmitTeam->setEnabled(false);
    }
    else if(setting == "PHONE")
    {
        // lineEdit for phone
        ui->lineEdit_EditTeams->setVisible(true);
        ui->lineEdit_EditTeams->setEnabled(true);
        ui->lineEdit_EditTeams->clear();
        ui->lineEdit_EditTeams->setPlaceholderText("(000)-000-0000");

        // labes for stadium name
        ui->label_Address->setVisible(false);
        ui->label_Phone->setVisible(true);
        ui->label_Team->setVisible(false);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(false);
        ui->label_Capacity->setVisible(false);
        ui->label_CityStateZip->setVisible(false);
        ui->label_Date->setVisible(false);

        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(false);
        ui->pushButton_CSZ->setEnabled(false);
        ui->pushButton_CancelTeams->setVisible(true);
        ui->pushButton_CancelTeams->setEnabled(true);
        ui->pushButton_Capacity->setVisible(false);
        ui->pushButton_Capacity->setEnabled(false);
        ui->pushButton_Phone->setVisible(true);
        ui->pushButton_Phone->setEnabled(true);
        ui->pushButton_SubmitDate->setVisible(false);
        ui->pushButton_SubmitDate->setEnabled(false);
        ui->pushButton_SubmitAddress->setVisible(false);
        ui->pushButton_SubmitAddress->setEnabled(false);
        ui->pushButton_SubmitStadium->setVisible(false);
        ui->pushButton_SubmitStadium->setEnabled(false);
        ui->pushButton_SubmitTeam->setVisible(false);
        ui->pushButton_SubmitTeam->setEnabled(false);
    }
    else if(setting == "TEAM_NAME")
    {
        // lineEdit for team name
        ui->lineEdit_EditTeams->setVisible(true);
        ui->lineEdit_EditTeams->setEnabled(true);
        ui->lineEdit_EditTeams->clear();
        ui->lineEdit_EditTeams->setPlaceholderText("Team Name: ");

        // labes for stadium name
        ui->label_Address->setVisible(false);
        ui->label_Phone->setVisible(false);
        ui->label_Team->setVisible(true);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(false);
        ui->label_Capacity->setVisible(false);
        ui->label_CityStateZip->setVisible(false);
        ui->label_Date->setVisible(false);

        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(false);
        ui->pushButton_CSZ->setEnabled(false);
        ui->pushButton_CancelTeams->setVisible(true);
        ui->pushButton_CancelTeams->setEnabled(true);
        ui->pushButton_Capacity->setVisible(false);
        ui->pushButton_Capacity->setEnabled(false);
        ui->pushButton_Phone->setVisible(false);
        ui->pushButton_Phone->setEnabled(false);
        ui->pushButton_SubmitDate->setVisible(false);
        ui->pushButton_SubmitDate->setEnabled(false);
        ui->pushButton_SubmitAddress->setVisible(false);
        ui->pushButton_SubmitAddress->setEnabled(false);
        ui->pushButton_SubmitStadium->setVisible(false);
        ui->pushButton_SubmitStadium->setEnabled(false);
        ui->pushButton_SubmitTeam->setVisible(true);
        ui->pushButton_SubmitTeam->setEnabled(true);
    }
    else if(setting == "ADDRESS")
    {
        // lineEdit for address
        ui->lineEdit_EditTeams->setVisible(true);
        ui->lineEdit_EditTeams->setEnabled(true);
        ui->lineEdit_EditTeams->clear();
        ui->lineEdit_EditTeams->setPlaceholderText("Address: ");
        // labes for stadium name
        ui->label_Address->setVisible(true);
        ui->label_Phone->setVisible(false);
        ui->label_Team->setVisible(false);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(false);
        ui->label_Capacity->setVisible(false);
        ui->label_CityStateZip->setVisible(false);
        ui->label_Date->setVisible(false);

        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(false);
        ui->pushButton_CSZ->setEnabled(false);
        ui->pushButton_CancelTeams->setVisible(true);
        ui->pushButton_CancelTeams->setEnabled(true);
        ui->pushButton_Capacity->setVisible(false);
        ui->pushButton_Capacity->setEnabled(false);
        ui->pushButton_Phone->setVisible(false);
        ui->pushButton_Phone->setEnabled(false);
        ui->pushButton_SubmitDate->setVisible(false);
        ui->pushButton_SubmitDate->setEnabled(false);
        ui->pushButton_SubmitAddress->setVisible(true);
        ui->pushButton_SubmitAddress->setEnabled(true);
        ui->pushButton_SubmitStadium->setVisible(false);
        ui->pushButton_SubmitStadium->setEnabled(false);
        ui->pushButton_SubmitTeam->setVisible(false);
        ui->pushButton_SubmitTeam->setEnabled(false);
    }
    else if(setting == "OPENED")
    {
        // lineEdit date opened
        ui->lineEdit_EditTeams->setVisible(true);
        ui->lineEdit_EditTeams->setEnabled(true);
        ui->lineEdit_EditTeams->clear();
        ui->lineEdit_EditTeams->setPlaceholderText("mm/dd/yyyy");

        // labes for stadium name
        ui->label_Address->setVisible(false);
        ui->label_Phone->setVisible(false);
        ui->label_Team->setVisible(false);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(false);
        ui->label_Capacity->setVisible(false);
        ui->label_CityStateZip->setVisible(false);
        ui->label_Date->setVisible(true);

        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(false);
        ui->pushButton_CSZ->setEnabled(false);
        ui->pushButton_CancelTeams->setVisible(true);
        ui->pushButton_CancelTeams->setEnabled(true);
        ui->pushButton_Capacity->setVisible(false);
        ui->pushButton_Capacity->setEnabled(false);
        ui->pushButton_Phone->setVisible(false);
        ui->pushButton_Phone->setEnabled(false);
        ui->pushButton_SubmitDate->setVisible(true);
        ui->pushButton_SubmitDate->setEnabled(true);
        ui->pushButton_SubmitAddress->setVisible(false);
        ui->pushButton_SubmitAddress->setEnabled(false);
        ui->pushButton_SubmitStadium->setVisible(false);
        ui->pushButton_SubmitStadium->setEnabled(false);
        ui->pushButton_SubmitTeam->setVisible(false);
        ui->pushButton_SubmitTeam->setEnabled(false);
    }
    else if(setting == "CAPACITY")
    {
        // lineEdit for capacity
        ui->lineEdit_EditTeams->setVisible(true);
        ui->lineEdit_EditTeams->setEnabled(true);
        ui->lineEdit_EditTeams->clear();
        ui->lineEdit_EditTeams->setPlaceholderText("Max capacity: ");

        // labes for stadium name
        ui->label_Address->setVisible(false);
        ui->label_Phone->setVisible(false);
        ui->label_Team->setVisible(false);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(false);
        ui->label_Capacity->setVisible(true);
        ui->label_CityStateZip->setVisible(false);
        ui->label_Date->setVisible(false);

        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(false);
        ui->pushButton_CSZ->setEnabled(false);
        ui->pushButton_CancelTeams->setVisible(false);
        ui->pushButton_CancelTeams->setEnabled(false);
        ui->pushButton_Capacity->setVisible(true);
        ui->pushButton_Capacity->setEnabled(true);
        ui->pushButton_Phone->setVisible(false);
        ui->pushButton_Phone->setEnabled(false);
        ui->pushButton_SubmitDate->setVisible(false);
        ui->pushButton_SubmitDate->setEnabled(false);
        ui->pushButton_SubmitAddress->setVisible(false);
        ui->pushButton_SubmitAddress->setEnabled(false);
        ui->pushButton_SubmitStadium->setVisible(false);
        ui->pushButton_SubmitStadium->setEnabled(false);
        ui->pushButton_SubmitTeam->setVisible(false);
        ui->pushButton_SubmitTeam->setEnabled(false);
    }
    else if(setting == "CSZ")
    {
        // lineEdit city state zip
        ui->lineEdit_EditTeams->setVisible(true);
        ui->lineEdit_EditTeams->setEnabled(true);
        ui->lineEdit_EditTeams->clear();
        ui->lineEdit_EditTeams->setPlaceholderText("City, State, ZIP: ");

        // labes for stadium name
        ui->label_Address->setVisible(false);
        ui->label_Phone->setVisible(false);
        ui->label_Team->setVisible(false);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(false);
        ui->label_Capacity->setVisible(false);
        ui->label_CityStateZip->setVisible(true);
        ui->label_Date->setVisible(false);

        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(true);
        ui->pushButton_CSZ->setEnabled(true);
        ui->pushButton_CancelTeams->setVisible(false);
        ui->pushButton_CancelTeams->setEnabled(false);
        ui->pushButton_Capacity->setVisible(false);
        ui->pushButton_Capacity->setEnabled(false);
        ui->pushButton_Phone->setVisible(false);
        ui->pushButton_Phone->setEnabled(false);
        ui->pushButton_SubmitDate->setVisible(false);
        ui->pushButton_SubmitDate->setEnabled(false);
        ui->pushButton_SubmitAddress->setVisible(false);
        ui->pushButton_SubmitAddress->setEnabled(false);
        ui->pushButton_SubmitStadium->setVisible(false);
        ui->pushButton_SubmitStadium->setEnabled(false);
        ui->pushButton_SubmitTeam->setVisible(false);
        ui->pushButton_SubmitTeam->setEnabled(false);

    }
    else if(setting == "INIT")
    {
        // labes for stadium name
        ui->lineEdit_EditTeams->setVisible(false);
        ui->lineEdit_EditTeams->setEnabled(false);
        ui->label_Address->setVisible(false);
        ui->label_Phone->setVisible(false);
        ui->label_Team->setVisible(false);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(false);
        ui->label_Capacity->setVisible(false);
        ui->label_CityStateZip->setVisible(false);
        ui->label_Date->setVisible(false);

        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(false);
        ui->pushButton_CSZ->setEnabled(false);
        ui->pushButton_CancelTeams->setVisible(false);
        ui->pushButton_CancelTeams->setEnabled(false);
        ui->pushButton_Capacity->setVisible(false);
        ui->pushButton_Capacity->setEnabled(false);
        ui->pushButton_Phone->setVisible(false);
        ui->pushButton_Phone->setEnabled(false);
        ui->pushButton_SubmitDate->setVisible(false);
        ui->pushButton_SubmitDate->setEnabled(false);
        ui->pushButton_SubmitAddress->setVisible(false);
        ui->pushButton_SubmitAddress->setEnabled(false);
        ui->pushButton_SubmitStadium->setVisible(false);
        ui->pushButton_SubmitStadium->setEnabled(false);
        ui->pushButton_SubmitTeam->setVisible(false);
        ui->pushButton_SubmitTeam->setEnabled(false);

        ui->pushButton_Edit->setVisible(false);
        ui->pushButton_Edit->setEnabled(false);

        // groupBox MLB, ADD, EDIT
        ui->groupBox_MLBTeams->setVisible(true);
        ui->groupBox_AddTeams->setVisible(false);
        ui->groupBox_EditTeams->setVisible(false);
    }
    else if(setting == "ADD")
    {

        // labes for stadium name
        ui->lineEdit_EditTeams->setVisible(true);
        ui->lineEdit_EditTeams->setEnabled(true);
        ui->label_Address->setVisible(false);
        ui->label_Phone->setVisible(false);
        ui->label_Team->setVisible(false);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(false);
        ui->label_Capacity->setVisible(false);
        ui->label_CityStateZip->setVisible(false);
        ui->label_Date->setVisible(false);


        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(false);
        ui->pushButton_CSZ->setEnabled(false);
        ui->pushButton_CancelTeams->setVisible(false);
        ui->pushButton_CancelTeams->setEnabled(false);
        ui->pushButton_Capacity->setVisible(false);
        ui->pushButton_Capacity->setEnabled(false);
        ui->pushButton_Phone->setVisible(false);
        ui->pushButton_Phone->setEnabled(false);
        ui->pushButton_SubmitDate->setVisible(false);
        ui->pushButton_SubmitDate->setEnabled(false);
        ui->pushButton_SubmitAddress->setVisible(false);
        ui->pushButton_SubmitAddress->setEnabled(false);
        ui->pushButton_SubmitStadium->setVisible(false);
        ui->pushButton_SubmitStadium->setEnabled(false);
        ui->pushButton_SubmitTeam->setVisible(false);
        ui->pushButton_SubmitTeam->setEnabled(false);
        ui->pushButton_Edit->setVisible(false);
        ui->pushButton_Edit->setEnabled(false);

        // turn off radio then user selects an item
        ui->radioButton_StadiunName->setVisible(true);
        ui->radioButton_StadiunName->setEnabled(true);
        ui->radioButton_TeamName->setVisible(true);
        ui->radioButton_TeamName->setEnabled(true);
        ui->radioButton_Address->setVisible(true);
        ui->radioButton_Address->setEnabled(true);
        ui->radioButton_CSZ->setVisible(true);
        ui->radioButton_CSZ->setEnabled(true);
        ui->radioButton_Phonr->setVisible(true);
        ui->radioButton_Phonr->setEnabled(true);
        ui->radioButton_Date->setVisible(true);
        ui->radioButton_Date->setEnabled(true);
        ui->radioButton_Capacity->setVisible(true);
        ui->radioButton_Capacity->setEnabled(true);

        // list widget
        ui->listWidget_MLBTeams->setVisible(false);
        ui->listWidget_MLBTeams->setEnabled(true);

        ui->listWidget_MLBTeams->addItem(" ");

        ui->groupBox_AddTeams->setVisible(true);
        ui->groupBox_EditTeams->setVisible(false);
    }
    else if(setting == "EDIT")
    {
        // labes for stadium name
        ui->lineEdit_EditTeams->setVisible(false);
        ui->lineEdit_EditTeams->setEnabled(false);
        ui->label_Address->setVisible(false);
        ui->label_Phone->setVisible(false);
        ui->label_Team->setVisible(false);
        ui->label_Zip->setVisible(false);
        ui->label_Stadium->setVisible(false);
        ui->label_Capacity->setVisible(false);
        ui->label_CityStateZip->setVisible(false);
        ui->label_Date->setVisible(false);


        // pushButton when user submits entry for new teams
        ui->pushButton_CSZ->setVisible(false);
        ui->pushButton_CSZ->setEnabled(false);
        ui->pushButton_CancelTeams->setVisible(false);
        ui->pushButton_CancelTeams->setEnabled(false);
        ui->pushButton_Capacity->setVisible(false);
        ui->pushButton_Capacity->setEnabled(false);
        ui->pushButton_Phone->setVisible(false);
        ui->pushButton_Phone->setEnabled(false);
        ui->pushButton_SubmitDate->setVisible(false);
        ui->pushButton_SubmitDate->setEnabled(false);
        ui->pushButton_SubmitAddress->setVisible(false);
        ui->pushButton_SubmitAddress->setEnabled(false);
        ui->pushButton_SubmitStadium->setVisible(false);
        ui->pushButton_SubmitStadium->setEnabled(false);
        ui->pushButton_SubmitTeam->setVisible(false);
        ui->pushButton_SubmitTeam->setEnabled(false);
        ui->pushButton_Edit->setVisible(true);
        ui->pushButton_Edit->setEnabled(true);

        // turn off radio then user selects an item
        ui->radioButton_StadiunName->setVisible(true);
        ui->radioButton_StadiunName->setEnabled(true);
        ui->radioButton_TeamName->setVisible(true);
        ui->radioButton_TeamName->setEnabled(true);
        ui->radioButton_Address->setVisible(true);
        ui->radioButton_Address->setEnabled(true);
        ui->radioButton_CSZ->setVisible(true);
        ui->radioButton_CSZ->setEnabled(true);
        ui->radioButton_Phonr->setVisible(true);
        ui->radioButton_Phonr->setEnabled(true);
        ui->radioButton_Date->setVisible(true);
        ui->radioButton_Date->setEnabled(true);
        ui->radioButton_Capacity->setVisible(true);
        ui->radioButton_Capacity->setEnabled(false);

        // list widget
        ui->listWidget_MLBTeams->setVisible(true);
        ui->listWidget_MLBTeams->setEnabled(true);

        // groupBox MLB, ADD, EDIT
        ui->groupBox_AddTeams->setVisible(true);
        ui->groupBox_EditTeams->setVisible(true);

    }
    else if(setting == "CANCEL")
    {
        // groupBox MLB, ADD, EDIT
        ui->groupBox_MLBTeams->setVisible(false);
        ui->groupBox_MLBTeams->setEnabled(false);
    }
}

/*
 *
 *      MLB SELECTIONS:
 *      -ADD TEAM radioButton
 *      -EDIT TEAM radioButton
 *
 */
bool AdminDialog::on_radioButton_AddTeam_clicked()
{
    MLBTeamsSettings("ADD");
    return ui->radioButton_AddTeam->isChecked();
}
bool AdminDialog::on_radioButton_EditTeam_clicked()
{
    MLBTeamsSettings("EDIT");
    return ui->radioButton_EditTeam->isChecked();
}
bool AdminDialog::on_radioButton_CancelTeam_clicked()
{
    MLBTeamsSettings("OFF");
    return ui->radioButton_CancelTeam->isChecked();
}




/*
 *
 *      MLB NEW TEAM
 *      - Stadium Name
 *      - Team Name
 *      - Street Address
 *      - City, State, Zip
 *      - Box Office #
 *      - Date Opened
 *      - Seating Capacity
 *
 */
bool AdminDialog::on_radioButton_StadiunName_clicked()
{
    MLBTeamsSettings("STADIUM_NAME");
    return ui->radioButton_StadiunName->isChecked();
}
bool AdminDialog::on_radioButton_TeamName_clicked()
{
    MLBTeamsSettings("TEAM_NAME");
    return ui->radioButton_TeamName->isChecked();
}
bool AdminDialog::on_radioButton_Phonr_clicked()
{
    MLBTeamsSettings("PHONE");
    return ui->radioButton_Phonr->isChecked();
}
bool AdminDialog::on_radioButton_Address_clicked()
{
    MLBTeamsSettings("ADDRESS");
    return ui->radioButton_Address->isChecked();
}
bool AdminDialog::on_radioButton_CSZ_clicked()
{
    MLBTeamsSettings("CSZ");
    return ui->radioButton_CSZ->isChecked();
}
bool AdminDialog::on_radioButton_Capacity_clicked()
{
    MLBTeamsSettings("CAPACITY");
    return ui->radioButton_Capacity->isChecked();
}
bool AdminDialog::on_radioButton_Date_clicked()
{
    MLBTeamsSettings("OPENED");
    return ui->radioButton_Date->isChecked();
}



/*
 *
 *      WRITE NEW TEAM TO TEXT FILE
 *      **** CONTROL EDITING FLOW BETTER ***
 *
 */
void AdminDialog::on_pushButton_SubmitAddress_clicked()
{
    StreetAddress = ui->lineEdit_EditTeams->text();
    // PROCESS: Add new string to list widget and write the text file
    ui->listWidget_MLBTeams->addItem(new QListWidgetItem("Street Address: " + StreetAddress));
    SaveTeamsTextFile("test.txt");
    // OUTPUT: Display a successfully QMessageBox massage to the user
    QMessageBox::information(this,
                             tr("Added Successfully"),
                             tr("\"%1\" has been added to your MLB list.").arg(StreetAddress));
}
void AdminDialog::on_pushButton_SubmitStadium_clicked()
{
    StadiumName = ui->lineEdit_EditTeams->text();
    // PROCESS: Add new string to list widget and write the text file
    ui->listWidget_MLBTeams->addItem(new QListWidgetItem("Stadium Name: " + StadiumName));
    SaveTeamsTextFile("test.txt");
    // OUTPUT: Display a successfully QMessageBox massage to the user
    QMessageBox::information(this,
                             tr("Added Successfully"),
                             tr("\"%1\" has been added to your MLB list.").arg(StadiumName));
}
void AdminDialog::on_pushButton_CSZ_clicked()
{
    CityStateZip = ui->lineEdit_EditTeams->text();
    // PROCESS: Add new string to list widget and write the text file
    ui->listWidget_MLBTeams->addItem(new QListWidgetItem("City, State, Zip: " + CityStateZip));
    SaveTeamsTextFile("test.txt");
    // OUTPUT: Display a successfully QMessageBox massage to the user
    QMessageBox::information(this,
                             tr("Added Successfully"),
                             tr("\"%1\" has been added to your MLB list.").arg(CityStateZip));
}
void AdminDialog::on_pushButton_Capacity_clicked()
{
    SeatingCapacity = ui->lineEdit_EditTeams->text();
    // PROCESS: Add new string to list widget and write the text file
    ui->listWidget_MLBTeams->addItem(new QListWidgetItem("Seating Capacity: " + SeatingCapacity));
    SaveTeamsTextFile("test.txt");
    // OUTPUT: Display a successfully QMessageBox massage to the user
    QMessageBox::information(this,
                             tr("Added Successfully"),
                             tr("\"%1\" has been added to your MLB list.").arg(SeatingCapacity));


    // for close the group box
    ui->groupBox_AddTeams->close();
}
void AdminDialog::on_pushButton_Phone_clicked()
{
    PhoneNumber = ui->lineEdit_EditTeams->text();
    // PROCESS: Add new string to list widget and write the text file
    ui->listWidget_MLBTeams->addItem(new QListWidgetItem("Box Office #:" + PhoneNumber));
    SaveTeamsTextFile("test.txt");
    // OUTPUT: Display a successfully QMessageBox massage to the user
    QMessageBox::information(this,
                             tr("Added Successfully"),
                             tr("\"%1\" has been added to your MLB list.").arg(PhoneNumber));
}
void AdminDialog::on_pushButton_SubmitDate_clicked()
{
    DateOpened = ui->lineEdit_EditTeams->text();
    // PROCESS: Add new string to list widget and write the text file
    ui->listWidget_MLBTeams->addItem(new QListWidgetItem("Date Opened: " + DateOpened));
    SaveTeamsTextFile("test.txt");
    // OUTPUT: Display a successfully QMessageBox massage to the user
    QMessageBox::information(this,
                             tr("Added Successfully"),
                             tr("\"%1\" has been added to your MLB list.").arg(DateOpened));
}
void AdminDialog::on_pushButton_SubmitTeam_clicked()
{
    TeamName = ui->lineEdit_EditTeams->text();
    // PROCESS: Add new string to list widget and write the text file
    ui->listWidget_MLBTeams->addItem(new QListWidgetItem("Team Name: " + TeamName));
    SaveTeamsTextFile("test.txt");
    // OUTPUT: Display a successfully QMessageBox massage to the user
    QMessageBox::information(this,
                             tr("Added Successfully"),
                             tr("\"%1\" has been added to your MLB list.").arg(TeamName));
}
void AdminDialog::on_pushButton_CancelTeams_clicked()
{
    ui->groupBox_AddTeams->setVisible(false);
}
void AdminDialog::on_pushButton_Cancel_clicked()
{
    ui->groupBox_AddTeams->setVisible(false);
}
void AdminDialog::on_pushButton_Edit_clicked()
{
    QListWidgetItem *edit_team = ui->listWidget_MLBTeams->currentItem();
    edit_team->setText(ui->lineEdit_EditTeams->text());
    SaveTeamsTextFile("test.txt");
    // OUTPUT: Display a successfully QMessageBox massage to the user
    QMessageBox::information(this,
                             tr("Added Successfully"),
                             tr("\"%1\" has been added to your MLB list.").arg(ui->lineEdit_EditTeams->text()));
}

void AdminDialog::on_radioButton_clicked()
{
    // mlb
    ui->textBrowser_Admin->clear();
    ui->textBrowser_Admin->setText(LoadTextFileToTextBrowser("MajorLeagueSortedTeam.txt"));
}
void AdminDialog::on_radioButton_2_clicked()
{
    // al
    ui->textBrowser_Admin->clear();
    ui->textBrowser_Admin->setText(LoadTextFileToTextBrowser("AmericanLeague.txt"));
}
void AdminDialog::on_radioButton_3_clicked()
{
    // nl
    ui->textBrowser_Admin->clear();
    ui->textBrowser_Admin->setText(LoadTextFileToTextBrowser("NationalLeague.txt"));
}
void AdminDialog::on_radioButton_4_clicked()
{
    // stadium
    ui->textBrowser_Admin->clear();
    ui->textBrowser_Admin->setText(LoadTextFileToTextBrowser("MajorLeague.txt"));
}
void AdminDialog::on_radioButton_5_clicked()
{
    // grass
    ui->textBrowser_Admin->clear();
    ui->textBrowser_Admin->setText(LoadTextFileToTextBrowser("MajorLeagueGrass.txt"));
}
void AdminDialog::on_radioButton_6_clicked()
{
    // date
    ui->textBrowser_Admin->clear();
    ui->textBrowser_Admin->setText(LoadTextFileToTextBrowser("MajorLeagueSortedDate.txt"));
}
void AdminDialog::on_pushButton_AddToMatrix_clicked()
{
    static int MAJOR_LEAGUE[MAX_SIZE][MAX_SIZE]
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

    std::vector<std::string> MLB_TEAMS = {
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
    Graph<int> newMatrix(MAX_SIZE+1);
    for(int i = 0; i < MAX_SIZE+1; ++i)
    {
        for(int j = 0; j < MAX_SIZE+1; ++j)
        {
            if(MAJOR_LEAGUE[i][j] != INF)
            {
                newMatrix.addEdge(i, j, MAJOR_LEAGUE[i][j]);
            }
        }
    }
    ui->textBrowser_Admin->setText(newMatrix.print_dijkstra(3,MLB_TEAMS).c_str());
    qDebug() << "---------\n";
}
