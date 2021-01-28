#include "tuxeditor.h"
#include "ui_tuxeditor.h"
#include <QFileDialog>
TuxEditor::TuxEditor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TuxEditor)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

TuxEditor::~TuxEditor()
{
    delete ui;
}


void TuxEditor::on_action_New_triggered()
{
    mFilename = "";
    ui->textEdit->setPlainText("NEW");
}

void TuxEditor::on_action_Open_triggered()
{
   QString file = QFileDialog::getOpenFileName(this,"Open a file");

   if(!file.isEmpty()){
       QFile sFile(file);
       if(sFile.open(QFile::ReadOnly | QFile::Text)){
           mFilename = file;
           QTextStream in(&sFile);
           QString text = in.readAll();
           sFile.close();

           ui->textEdit->setPlainText(text);

       }
   }
}

void TuxEditor::on_actionSave_triggered()
{
    //Text for filename
    QFile sFile(mFilename);
    if(sFile.open(QFile::WriteOnly | QFile::Text)){
        QTextStream out(&sFile);

        out<< ui->textEdit->toPlainText();

        sFile.flush();
        sFile.close();
    }
}

void TuxEditor::on_action_Save_As_triggered()
{
    QString file = QFileDialog::getSaveFileName(this,"Open a file");
    if(!file.isEmpty()){
        mFilename =file;
        on_actionSave_triggered();
    }
}

void TuxEditor::on_action_Copy_triggered()
{
    ui->textEdit->copy();
}

void TuxEditor::on_action_Cut_triggered()
{
    ui->textEdit->cut();
}

void TuxEditor::on_action_Undo_triggered()
{
    ui->textEdit->undo();
}

void TuxEditor::on_action_Redo_triggered()
{
    ui->textEdit->redo();
}

void TuxEditor::on_action_Paste_triggered()
{
    ui->textEdit->paste();
}

void TuxEditor::on_action_ZomeIn_triggered()
{
    ui->textEdit->zoomIn(1);
}

void TuxEditor::on_actionZome_Out_triggered()
{
    ui->textEdit->zoomOut(1);

}

void TuxEditor::on_action_Exit_triggered()
{

}

void TuxEditor::on_action_About_triggered()
{
    system("firefox https://mehrzero.github.io/");
}

void TuxEditor::on_action_Del_triggered()
{
    ui->textEdit->setText("");
}
