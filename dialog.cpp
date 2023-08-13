#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(DialogData &outData, QWidget *parent) :
    QDialog(parent),
    m_outData(&outData),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->entryDT->setDateTime(QDateTime::currentDateTime());
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_buttonBox_accepted()
{
    if(m_outData != nullptr)
    {
        m_outData->text = ui->entryTxt->toPlainText();
        m_outData->data = ui->entryDT->dateTime();
        if(ui->neutralChk->isChecked()){
            m_outData->mood = "neutralne";
        }
        else if(ui->cheerfulChc->isChecked()){
            m_outData->mood = "radosne";
        }
        else
            m_outData->mood = "smutne";
    }
    ui->entryTxt->clear();
    deleteLater();
}


void Dialog::on_buttonBox_rejected()
{
    deleteLater();
}


void Dialog::on_neutralChk_clicked()
{
    ui->neutralChk->setChecked(true);
    ui->cheerfulChc->setChecked(false);
    ui->sadChk->setChecked(false);
}

void Dialog::on_cheerfulChc_clicked()
{
    ui->neutralChk->setChecked(false);
    ui->cheerfulChc->setChecked(true);
    ui->sadChk->setChecked(false);
}


void Dialog::on_sadChk_clicked()
{
    ui->neutralChk->setChecked(false);
    ui->cheerfulChc->setChecked(false);
    ui->sadChk->setChecked(true);
}

