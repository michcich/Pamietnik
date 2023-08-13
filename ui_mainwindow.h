/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QWidget *leftMenuWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addButton;
    QPushButton *deleteBtn;
    QPushButton *markFavoriteBtn;
    QPushButton *favoriteBtn;
    QPushButton *nextBtn;
    QPushButton *previousBtn;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_9;
    QPushButton *saveFileBtn;
    QPushButton *loadFileBtn;
    QStackedWidget *stackedWidget;
    QWidget *mainPage;
    QVBoxLayout *verticalLayout_4;
    QFrame *mainPageFrm;
    QVBoxLayout *verticalLayout_5;
    QFrame *entryFrm;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *precedingTxt;
    QTextEdit *currentTxt;
    QTextEdit *nextTxt;
    QFrame *optionsFrm;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *sadChk;
    QCheckBox *neutralChk;
    QCheckBox *cheerfulChk;
    QCheckBox *allChk;
    QWidget *newEntryPage;
    QVBoxLayout *verticalLayout_6;
    QFrame *newEntryPageFrm;
    QVBoxLayout *verticalLayout_7;
    QFrame *txtFrm;
    QVBoxLayout *verticalLayout_8;
    QTextEdit *favoriteEntriesTxt;
    QFrame *btnFrm;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *deleteFavoriteBtn;
    QPushButton *allEntriesBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(754, 407);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setFocusPolicy(Qt::StrongFocus);
        centralWidget->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: rgb(227,242,193);\n"
"	color: rgb(0, 0, 0);\n"
"	font:  \"Century Gothic\";\n"
"}\n"
"button{\n"
"	font:  \"Century Gothic\";}\n"
""));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        leftMenuWidget = new QWidget(centralWidget);
        leftMenuWidget->setObjectName(QString::fromUtf8("leftMenuWidget"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        leftMenuWidget->setFont(font);
        leftMenuWidget->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	background-color: rgb(255,248,222);\n"
"	border: 2px solid rgb(153,169,143);\n"
"	border-radius: 10px;\n"
"	padding: 3px\n"
"}	\n"
".QPushButton:hover {\n"
"	background-color: rgb(201,219,178);\n"
"	border: 2px solid rgb(153,169,143);\n"
"}\n"
"*{\n"
"	\n"
"	background-color: rgb(246,255,222);\n"
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(leftMenuWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(leftMenuWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Century Gothic")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        frame_3->setFont(font1);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_3);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 5, 0, 0);
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Century Gothic")});
        font2.setPointSize(17);
        font2.setBold(false);
        font2.setItalic(false);
        label->setFont(font2);

        verticalLayout_10->addWidget(label);


        verticalLayout->addWidget(frame_3, 0, Qt::AlignHCenter|Qt::AlignTop);

        frame = new QFrame(leftMenuWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        frame->setFont(font3);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout_3->addWidget(addButton);

        deleteBtn = new QPushButton(frame);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));

        verticalLayout_3->addWidget(deleteBtn);

        markFavoriteBtn = new QPushButton(frame);
        markFavoriteBtn->setObjectName(QString::fromUtf8("markFavoriteBtn"));

        verticalLayout_3->addWidget(markFavoriteBtn);

        favoriteBtn = new QPushButton(frame);
        favoriteBtn->setObjectName(QString::fromUtf8("favoriteBtn"));

        verticalLayout_3->addWidget(favoriteBtn);

        nextBtn = new QPushButton(frame);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));

        verticalLayout_3->addWidget(nextBtn);

        previousBtn = new QPushButton(frame);
        previousBtn->setObjectName(QString::fromUtf8("previousBtn"));

        verticalLayout_3->addWidget(previousBtn);


        verticalLayout->addWidget(frame, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        frame_2 = new QFrame(leftMenuWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        saveFileBtn = new QPushButton(frame_2);
        saveFileBtn->setObjectName(QString::fromUtf8("saveFileBtn"));

        verticalLayout_9->addWidget(saveFileBtn);

        loadFileBtn = new QPushButton(frame_2);
        loadFileBtn->setObjectName(QString::fromUtf8("loadFileBtn"));
        loadFileBtn->setMinimumSize(QSize(123, 0));

        verticalLayout_9->addWidget(loadFileBtn);


        verticalLayout->addWidget(frame_2, 0, Qt::AlignLeft|Qt::AlignBottom);


        horizontalLayout_5->addWidget(leftMenuWidget);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setFont(font3);
        stackedWidget->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: rgb(246,255,222);\n"
"color: rgb(0, 0, 0);\n"
"}"));
        mainPage = new QWidget();
        mainPage->setObjectName(QString::fromUtf8("mainPage"));
        verticalLayout_4 = new QVBoxLayout(mainPage);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mainPageFrm = new QFrame(mainPage);
        mainPageFrm->setObjectName(QString::fromUtf8("mainPageFrm"));
        mainPageFrm->setFrameShape(QFrame::StyledPanel);
        mainPageFrm->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(mainPageFrm);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        entryFrm = new QFrame(mainPageFrm);
        entryFrm->setObjectName(QString::fromUtf8("entryFrm"));
        entryFrm->setFrameShape(QFrame::StyledPanel);
        entryFrm->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(entryFrm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        precedingTxt = new QTextEdit(entryFrm);
        precedingTxt->setObjectName(QString::fromUtf8("precedingTxt"));
        precedingTxt->setReadOnly(true);

        verticalLayout_2->addWidget(precedingTxt);

        currentTxt = new QTextEdit(entryFrm);
        currentTxt->setObjectName(QString::fromUtf8("currentTxt"));
        currentTxt->setReadOnly(true);

        verticalLayout_2->addWidget(currentTxt);

        nextTxt = new QTextEdit(entryFrm);
        nextTxt->setObjectName(QString::fromUtf8("nextTxt"));
        nextTxt->setReadOnly(true);

        verticalLayout_2->addWidget(nextTxt);


        verticalLayout_5->addWidget(entryFrm);

        optionsFrm = new QFrame(mainPageFrm);
        optionsFrm->setObjectName(QString::fromUtf8("optionsFrm"));
        optionsFrm->setFrameShape(QFrame::StyledPanel);
        optionsFrm->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(optionsFrm);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(9, 0, 0, 0);
        sadChk = new QCheckBox(optionsFrm);
        sadChk->setObjectName(QString::fromUtf8("sadChk"));

        horizontalLayout_4->addWidget(sadChk);

        neutralChk = new QCheckBox(optionsFrm);
        neutralChk->setObjectName(QString::fromUtf8("neutralChk"));

        horizontalLayout_4->addWidget(neutralChk);

        cheerfulChk = new QCheckBox(optionsFrm);
        cheerfulChk->setObjectName(QString::fromUtf8("cheerfulChk"));

        horizontalLayout_4->addWidget(cheerfulChk);

        allChk = new QCheckBox(optionsFrm);
        allChk->setObjectName(QString::fromUtf8("allChk"));
        allChk->setChecked(true);

        horizontalLayout_4->addWidget(allChk);


        verticalLayout_5->addWidget(optionsFrm);


        verticalLayout_4->addWidget(mainPageFrm);

        stackedWidget->addWidget(mainPage);
        newEntryPage = new QWidget();
        newEntryPage->setObjectName(QString::fromUtf8("newEntryPage"));
        verticalLayout_6 = new QVBoxLayout(newEntryPage);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        newEntryPageFrm = new QFrame(newEntryPage);
        newEntryPageFrm->setObjectName(QString::fromUtf8("newEntryPageFrm"));
        newEntryPageFrm->setFrameShape(QFrame::StyledPanel);
        newEntryPageFrm->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(newEntryPageFrm);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        txtFrm = new QFrame(newEntryPageFrm);
        txtFrm->setObjectName(QString::fromUtf8("txtFrm"));
        txtFrm->setFrameShape(QFrame::StyledPanel);
        txtFrm->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(txtFrm);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        favoriteEntriesTxt = new QTextEdit(txtFrm);
        favoriteEntriesTxt->setObjectName(QString::fromUtf8("favoriteEntriesTxt"));

        verticalLayout_8->addWidget(favoriteEntriesTxt);


        verticalLayout_7->addWidget(txtFrm);

        btnFrm = new QFrame(newEntryPageFrm);
        btnFrm->setObjectName(QString::fromUtf8("btnFrm"));
        btnFrm->setFrameShape(QFrame::StyledPanel);
        btnFrm->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(btnFrm);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        deleteFavoriteBtn = new QPushButton(btnFrm);
        deleteFavoriteBtn->setObjectName(QString::fromUtf8("deleteFavoriteBtn"));

        horizontalLayout_3->addWidget(deleteFavoriteBtn);

        allEntriesBtn = new QPushButton(btnFrm);
        allEntriesBtn->setObjectName(QString::fromUtf8("allEntriesBtn"));

        horizontalLayout_3->addWidget(allEntriesBtn);


        verticalLayout_7->addWidget(btnFrm);


        verticalLayout_6->addWidget(newEntryPageFrm);

        stackedWidget->addWidget(newEntryPage);

        horizontalLayout_5->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pamietnik", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Pamietnik", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Dodaj Wpis", nullptr));
        deleteBtn->setText(QCoreApplication::translate("MainWindow", "Usun Wpis", nullptr));
        markFavoriteBtn->setText(QCoreApplication::translate("MainWindow", "Oznacz Jako Ulubiony", nullptr));
        favoriteBtn->setText(QCoreApplication::translate("MainWindow", "Ulubiony Wpis", nullptr));
        nextBtn->setText(QCoreApplication::translate("MainWindow", "Nastepne", nullptr));
        previousBtn->setText(QCoreApplication::translate("MainWindow", "Poprzednie", nullptr));
        saveFileBtn->setText(QCoreApplication::translate("MainWindow", "Zapisz do Pliku", nullptr));
        loadFileBtn->setText(QCoreApplication::translate("MainWindow", "Wczytaj Plik", nullptr));
        sadChk->setText(QCoreApplication::translate("MainWindow", "Smutne", nullptr));
        neutralChk->setText(QCoreApplication::translate("MainWindow", "Neutralne", nullptr));
        cheerfulChk->setText(QCoreApplication::translate("MainWindow", "Radosne", nullptr));
        allChk->setText(QCoreApplication::translate("MainWindow", "Wszystkie", nullptr));
        deleteFavoriteBtn->setText(QCoreApplication::translate("MainWindow", "Usun z Ulubionych", nullptr));
        allEntriesBtn->setText(QCoreApplication::translate("MainWindow", "Wszytskie Wpisy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
