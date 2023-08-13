#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "pamietnik.h"
#include "dialog.h"
#include <QMainWindow>
#include <QDate>
#include <QListWidgetItem>
#include <algorithm>
#include <QFile>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QMoveEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Program;
class Pamietnik;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr,
               Program *app = nullptr);
    ~MainWindow();
private slots:
    void on_addButton_clicked();
    void on_previousBtn_clicked();
    void on_nextBtn_clicked();
    void on_deleteBtn_clicked();
    void on_favoriteBtn_clicked();
    void on_allEntriesBtn_clicked();
    void on_markFavoriteBtn_clicked();
    void on_deleteFavoriteBtn_clicked();
    void on_showEntries(QString, QString, QString);
    void on_loadFileBtn_clicked();
    void on_saveFileBtn_clicked();
    void on_neutralChk_clicked();
    void on_sadChk_clicked();
    void on_cheerfulChk_clicked();
    void on_allChk_clicked();
private:
    void keyPressEvent(QKeyEvent*) override;
    void mouseMoveEvent(QMouseEvent*) override;
    Ui::MainWindow *ui;
    Program *mainApp = nullptr;
};
#endif // MAINWINDOW_H
