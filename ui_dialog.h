/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *entryTxt;
    QDateTimeEdit *entryDT;
    QFrame *optionsFrm;
    QHBoxLayout *horizontalLayout;
    QCheckBox *sadChk;
    QCheckBox *neutralChk;
    QCheckBox *cheerfulChc;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        Dialog->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
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
"	background-color: rgb(227,242,193);\n"
"	color: rgb(0, 0, 0);\n"
"	font:  \"Century Gothic\";\n"
"}\n"
"button{\n"
"	font:  \"Century Gothic\";}\n"
""));
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        centralWidget = new QWidget(Dialog);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("*{\n"
"	\n"
"	background-color: rgb(246,255,222);\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        entryTxt = new QTextEdit(centralWidget);
        entryTxt->setObjectName(QString::fromUtf8("entryTxt"));

        verticalLayout_3->addWidget(entryTxt);

        entryDT = new QDateTimeEdit(centralWidget);
        entryDT->setObjectName(QString::fromUtf8("entryDT"));

        verticalLayout_3->addWidget(entryDT);

        optionsFrm = new QFrame(centralWidget);
        optionsFrm->setObjectName(QString::fromUtf8("optionsFrm"));
        optionsFrm->setFrameShape(QFrame::StyledPanel);
        optionsFrm->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(optionsFrm);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sadChk = new QCheckBox(optionsFrm);
        sadChk->setObjectName(QString::fromUtf8("sadChk"));

        horizontalLayout->addWidget(sadChk);

        neutralChk = new QCheckBox(optionsFrm);
        neutralChk->setObjectName(QString::fromUtf8("neutralChk"));
        neutralChk->setEnabled(true);
        neutralChk->setChecked(true);

        horizontalLayout->addWidget(neutralChk);

        cheerfulChc = new QCheckBox(optionsFrm);
        cheerfulChc->setObjectName(QString::fromUtf8("cheerfulChc"));

        horizontalLayout->addWidget(cheerfulChc);


        verticalLayout_3->addWidget(optionsFrm);


        verticalLayout->addWidget(centralWidget);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dodaj Wpis", nullptr));
        sadChk->setText(QCoreApplication::translate("Dialog", "Smutne", nullptr));
        neutralChk->setText(QCoreApplication::translate("Dialog", "Neutralne", nullptr));
        cheerfulChc->setText(QCoreApplication::translate("Dialog", "Radosne", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
