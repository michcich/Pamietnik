#include "mainwindow.h"
#include "pamietnik.h"
#include "program.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent, Program *app)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      mainApp(app)
{
    ui->setupUi(this);
    app->setGUI(this);
    connect(app,SIGNAL(showEntries(QString,QString,QString)),this,SLOT(on_showEntries(QString,QString,QString)));
    mainApp->fileRead("wspomnienia.txt");
}

MainWindow::~MainWindow()
{
    mainApp->fileSave("wspomnienia.txt");
    delete ui;
}

void MainWindow::on_addButton_clicked()
{
    mainApp->addDialog();
}

void MainWindow::on_previousBtn_clicked()
{
    mainApp->previous();
}


void MainWindow::on_nextBtn_clicked()
{
    mainApp->next();
}

void MainWindow::on_deleteBtn_clicked()
{
    mainApp->deleteEntry();
}

void MainWindow::on_favoriteBtn_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->newEntryPage);
}


void MainWindow::on_allEntriesBtn_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->mainPage);
}


void MainWindow::on_markFavoriteBtn_clicked()
{
    ui->favoriteEntriesTxt->setText(mainApp->favoritePosition());
}


void MainWindow::on_deleteFavoriteBtn_clicked()
{
    ui->favoriteEntriesTxt->clear();
}

void MainWindow::on_showEntries(QString a, QString b , QString c)
{
    ui->precedingTxt->setText(a);
    ui->currentTxt->setText(b);
    ui->nextTxt->setText(c);
}

void MainWindow::keyPressEvent(QKeyEvent * event)
{
        int keyCode = event->key();
        switch(keyCode)
        {
        case Qt::Key_Up:
            mainApp->previous();
            break;
        case Qt::Key_Down:
            mainApp->next();
            break;
        }
}

void MainWindow::mouseMoveEvent(QMouseEvent* event)
{
    QPoint difPos = event->pos();
    int dy = difPos.y();
    static int d = 0;
    if(dy>d && dy%10 == 0){
        mainApp->next();
    }
    else if (dy < d && dy%10 == 0) {
        mainApp->previous();
    }
    d = dy;
    QMainWindow::mouseMoveEvent(event);

}


void MainWindow::on_loadFileBtn_clicked()
{
    QString plik = QFileDialog::getOpenFileName(this,"Otworz plik .txt","","Pliki tekstowe (*.txt)");
    mainApp->fileRead(plik);
}


void MainWindow::on_saveFileBtn_clicked()
{
    QString plik = QFileDialog::getSaveFileName(this,"Wybierz lokalizacje pliku","","Pliki tekstowe (*.txt)");
    mainApp->fileSave(plik);
}


void MainWindow::on_neutralChk_clicked()
{
    ui->cheerfulChk->setChecked(false);
    ui->sadChk->setChecked(false);
    ui->allChk->setChecked(false);
    ui->neutralChk->setChecked(true);
    mainApp->showSelect(1);
}


void MainWindow::on_sadChk_clicked()
{
    ui->neutralChk->setChecked(false);
    ui->cheerfulChk->setChecked(false);
    ui->allChk->setChecked(false);
    ui->sadChk->setChecked(true);
    mainApp->showSelect(3);
}


void MainWindow::on_cheerfulChk_clicked()
{
    ui->neutralChk->setChecked(false);
    ui->sadChk->setChecked(false);
    ui->allChk->setChecked(false);
    ui->cheerfulChk->setChecked(true);
    mainApp->showSelect(2);
}


void MainWindow::on_allChk_clicked()
{
    ui->neutralChk->setChecked(false);
    ui->cheerfulChk->setChecked(false);
    ui->sadChk->setChecked(false);
    ui->allChk->setChecked(true);
    mainApp->showSelect(4);
}

