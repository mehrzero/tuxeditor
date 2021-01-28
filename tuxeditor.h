#ifndef TUXEDITOR_H
#define TUXEDITOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TuxEditor; }
QT_END_NAMESPACE

class TuxEditor : public QMainWindow
{
    Q_OBJECT

public:
    TuxEditor(QWidget *parent = nullptr);
    ~TuxEditor();

private:
    Ui::TuxEditor *ui;
};
#endif // TUXEDITOR_H
