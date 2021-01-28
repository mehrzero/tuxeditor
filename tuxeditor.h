#ifndef TUXEDITOR_H
#define TUXEDITOR_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>

QT_BEGIN_NAMESPACE
namespace Ui { class TuxEditor; }
QT_END_NAMESPACE

class TuxEditor : public QMainWindow
{
    Q_OBJECT

public:
    TuxEditor(QWidget *parent = nullptr);
    ~TuxEditor();

private slots:
    void on_action_New_triggered();

    void on_action_Open_triggered();

    void on_actionSave_triggered();

    void on_action_Save_As_triggered();

    void on_action_Copy_triggered();

    void on_action_Cut_triggered();

    void on_action_Undo_triggered();

    void on_action_Redo_triggered();

    void on_action_Paste_triggered();

    void on_action_ZomeIn_triggered();

    void on_actionZome_Out_triggered();

    void on_action_Exit_triggered();

    void on_action_About_triggered();

    void on_action_Del_triggered();

private:
    Ui::TuxEditor *ui;
    QString mFilename;
};
#endif // TUXEDITOR_H
