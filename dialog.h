#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDate>

namespace Ui {
class Dialog;
}
struct DialogData
{
    QString text; QDateTime data; QString mood;
};
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(DialogData &outData, QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_neutralChk_clicked();
    void on_cheerfulChc_clicked();
    void on_sadChk_clicked();
private:
    DialogData *m_outData;
    Ui::Dialog *ui;
};

#endif // DIALOG_H
