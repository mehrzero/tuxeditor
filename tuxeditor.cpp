#include "tuxeditor.h"
#include "ui_tuxeditor.h"

TuxEditor::TuxEditor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TuxEditor)
{
    ui->setupUi(this);
}

TuxEditor::~TuxEditor()
{
    delete ui;
}

