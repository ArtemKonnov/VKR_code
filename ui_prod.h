/********************************************************************************
** Form generated from reading UI file 'prod.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROD_H
#define UI_PROD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prod
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_41;
    QPushButton *pushButton_7;
    QFrame *line;
    QLabel *label_2;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_11;
    QVBoxLayout *verticalLayout_8;
    QFormLayout *formLayout_6;
    QLabel *label_152;
    QProgressBar *progressBar_2;
    QLabel *label_153;
    QProgressBar *progressBar_3;
    QLabel *label_126;
    QProgressBar *progressBar_4;
    QLabel *label_151;
    QProgressBar *progressBar_5;
    QLabel *label_127;
    QProgressBar *progressBar_6;
    QLabel *label_150;
    QProgressBar *progressBar_7;
    QLabel *label_128;
    QProgressBar *progressBar_8;
    QLabel *label_129;
    QProgressBar *progressBar_9;
    QLabel *label_130;
    QProgressBar *progressBar_10;
    QLabel *label_131;
    QProgressBar *progressBar;
    QLabel *label_132;
    QProgressBar *progressBar_11;
    QLabel *label_133;
    QProgressBar *progressBar_12;
    QLabel *label_134;
    QProgressBar *progressBar_13;
    QLabel *label_135;
    QProgressBar *progressBar_14;
    QLabel *label_136;
    QProgressBar *progressBar_15;
    QLabel *label_137;
    QSpacerItem *verticalSpacer_39;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *prod)
    {
        if (prod->objectName().isEmpty())
            prod->setObjectName(QStringLiteral("prod"));
        prod->resize(1017, 748);
        prod->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(prod);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("QWidget#centralwidget{\n"
"background-image: url(:/img/_1108-496.jpg);\n"
"}\n"
"QWidget#tableWidget_5{\n"
"background-color: rgb(234, 234, 234);\n"
"}\n"
"QWidget#tableWidget{\n"
"background-color: rgb(234, 234, 234);\n"
"}\n"
"QProgressBar{\n"
"background-color: rgb(218, 218, 218);\n"
"}\n"
"QLabel{\n"
"color: rgb(250, 250, 250);\n"
"font-size: 18px\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        verticalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QFont font;
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(87);
        font.setStrikeOut(false);
        pushButton_3->setFont(font);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"  position: relative;\n"
"  display: inline-block;\n"
"  font-size: 90%;\n"
"  font-weight: 700;\n"
"  color: rgb(209,209,217);\n"
"  text-decoration: none;\n"
"  text-shadow: 0 -1px 2px rgba(0,0,0,.2);\n"
"  padding: .5em 1em;\n"
"  outline: none;\n"
"  border-radius: 3px;\n"
"  background: linear-gradient(rgb(110,112,120), rgb(81,81,86)) rgb(110,112,120);\n"
"  box-shadow:\n"
"   0 1px rgba(255,255,255,.2) inset,\n"
"   0 3px 5px rgba(0,1,6,.5),\n"
"   0 0 1px 1px rgba(0,1,6,.2);\n"
"  transition: .2s ease-in-out;\n"
"}\n"
"QPushButton:hover {\n"
"  background: linear-gradient(rgb(126,126,134), rgb(70,71,76)) rgb(126,126,134);\n"
"}\n"
"QPushButton:pressed {\n"
"  top: 1px;\n"
"  background: linear-gradient(rgb(76,77,82), rgb(56,57,62)) rgb(76,77,82);\n"
"  box-shadow:\n"
"qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147))\n"
"   0 0 1px rgba(0,0,0,.5) inset,\n"
"   0 2px"
                        " 3px rgba(0,0,0,.5) inset,\n"
"   0 1px 1px rgba(255,255,255,.1);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font);
        pushButton_5->setAutoFillBackground(false);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{\n"
"  position: relative;\n"
"  display: inline-block;\n"
"  font-size: 90%;\n"
"  font-weight: 700;\n"
"  color: rgb(209,209,217);\n"
"  text-decoration: none;\n"
"  text-shadow: 0 -1px 2px rgba(0,0,0,.2);\n"
"  padding: .5em 1em;\n"
"  outline: none;\n"
"  border-radius: 3px;\n"
"  background: linear-gradient(rgb(110,112,120), rgb(81,81,86)) rgb(110,112,120);\n"
"  box-shadow:\n"
"   0 1px rgba(255,255,255,.2) inset,\n"
"   0 3px 5px rgba(0,1,6,.5),\n"
"   0 0 1px 1px rgba(0,1,6,.2);\n"
"  transition: .2s ease-in-out;\n"
"}\n"
"QPushButton:hover {\n"
"  background: linear-gradient(rgb(126,126,134), rgb(70,71,76)) rgb(126,126,134);\n"
"}\n"
"QPushButton:pressed {\n"
"  top: 1px;\n"
"  background: linear-gradient(rgb(76,77,82), rgb(56,57,62)) rgb(76,77,82);\n"
"  box-shadow:\n"
"qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147))\n"
"   0 0 1px rgba(0,0,0,.5) inset,\n"
"   0 2px"
                        " 3px rgba(0,0,0,.5) inset,\n"
"   0 1px 1px rgba(255,255,255,.1);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font);
        pushButton_6->setAutoFillBackground(false);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{\n"
"  position: relative;\n"
"  display: inline-block;\n"
"  font-size: 90%;\n"
"  font-weight: 700;\n"
"  color: rgb(209,209,217);\n"
"  text-decoration: none;\n"
"  text-shadow: 0 -1px 2px rgba(0,0,0,.2);\n"
"  padding: .5em 1em;\n"
"  outline: none;\n"
"  border-radius: 3px;\n"
"  background: linear-gradient(rgb(110,112,120), rgb(81,81,86)) rgb(110,112,120);\n"
"  box-shadow:\n"
"   0 1px rgba(255,255,255,.2) inset,\n"
"   0 3px 5px rgba(0,1,6,.5),\n"
"   0 0 1px 1px rgba(0,1,6,.2);\n"
"  transition: .2s ease-in-out;\n"
"}\n"
"QPushButton:hover {\n"
"  background: linear-gradient(rgb(126,126,134), rgb(70,71,76)) rgb(126,126,134);\n"
"}\n"
"QPushButton:pressed {\n"
"  top: 1px;\n"
"  background: linear-gradient(rgb(76,77,82), rgb(56,57,62)) rgb(76,77,82);\n"
"  box-shadow:\n"
"qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147))\n"
"   0 0 1px rgba(0,0,0,.5) inset,\n"
"   0 2px"
                        " 3px rgba(0,0,0,.5) inset,\n"
"   0 1px 1px rgba(255,255,255,.1);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_6);

        verticalSpacer_41 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        horizontalLayout_5->addItem(verticalSpacer_41);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setFont(font);
        pushButton_7->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton_7->setAcceptDrops(false);
        pushButton_7->setLayoutDirection(Qt::RightToLeft);
        pushButton_7->setAutoFillBackground(false);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{\n"
"  position: relative;\n"
"  display: inline-block;\n"
"  font-size: 90%;\n"
"  font-weight: 700;\n"
"  color: rgb(209,209,217);\n"
"  text-decoration: none;\n"
"  text-shadow: 0 -1px 2px rgba(0,0,0,.2);\n"
"  padding: .5em 1em;\n"
"  outline: none;\n"
"  border-radius: 3px;\n"
"  background: linear-gradient(rgb(110,112,120), rgb(81,81,86)) rgb(110,112,120);\n"
"  box-shadow:\n"
"   0 1px rgba(255,255,255,.2) inset,\n"
"   0 3px 5px rgba(0,1,6,.5),\n"
"   0 0 1px 1px rgba(0,1,6,.2);\n"
"  transition: .2s ease-in-out;\n"
"}\n"
"QPushButton:hover {\n"
"  background: linear-gradient(rgb(126,126,134), rgb(70,71,76)) rgb(126,126,134);\n"
"}\n"
"QPushButton:pressed {\n"
"  top: 1px;\n"
"  background: linear-gradient(rgb(76,77,82), rgb(56,57,62)) rgb(76,77,82);\n"
"  box-shadow:\n"
"qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147))\n"
"   0 0 1px rgba(0,0,0,.5) inset,\n"
"   0 2px"
                        " 3px rgba(0,0,0,.5) inset,\n"
"   0 1px 1px rgba(255,255,255,.1);\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_7);


        verticalLayout_2->addLayout(horizontalLayout_5);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Raised);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"  color: rgb(0, 170, 255);\n"
" font: 75 12pt \"Padauk\";\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_2);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        label_152 = new QLabel(centralwidget);
        label_152->setObjectName(QStringLiteral("label_152"));
        QFont font1;
        label_152->setFont(font1);

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_152);

        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setStyleSheet(QStringLiteral(""));
        progressBar_2->setMaximum(100);
        progressBar_2->setValue(0);
        progressBar_2->setTextVisible(true);
        progressBar_2->setOrientation(Qt::Horizontal);
        progressBar_2->setInvertedAppearance(false);
        progressBar_2->setTextDirection(QProgressBar::TopToBottom);

        formLayout_6->setWidget(2, QFormLayout::FieldRole, progressBar_2);

        label_153 = new QLabel(centralwidget);
        label_153->setObjectName(QStringLiteral("label_153"));
        label_153->setFont(font1);

        formLayout_6->setWidget(4, QFormLayout::LabelRole, label_153);

        progressBar_3 = new QProgressBar(centralwidget);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setValue(0);
        progressBar_3->setTextVisible(true);

        formLayout_6->setWidget(4, QFormLayout::FieldRole, progressBar_3);

        label_126 = new QLabel(centralwidget);
        label_126->setObjectName(QStringLiteral("label_126"));
        label_126->setFont(font1);

        formLayout_6->setWidget(5, QFormLayout::LabelRole, label_126);

        progressBar_4 = new QProgressBar(centralwidget);
        progressBar_4->setObjectName(QStringLiteral("progressBar_4"));
        progressBar_4->setValue(0);
        progressBar_4->setTextVisible(true);

        formLayout_6->setWidget(5, QFormLayout::FieldRole, progressBar_4);

        label_151 = new QLabel(centralwidget);
        label_151->setObjectName(QStringLiteral("label_151"));
        label_151->setFont(font1);

        formLayout_6->setWidget(7, QFormLayout::LabelRole, label_151);

        progressBar_5 = new QProgressBar(centralwidget);
        progressBar_5->setObjectName(QStringLiteral("progressBar_5"));
        progressBar_5->setValue(0);
        progressBar_5->setTextVisible(true);

        formLayout_6->setWidget(7, QFormLayout::FieldRole, progressBar_5);

        label_127 = new QLabel(centralwidget);
        label_127->setObjectName(QStringLiteral("label_127"));
        label_127->setFont(font1);

        formLayout_6->setWidget(9, QFormLayout::LabelRole, label_127);

        progressBar_6 = new QProgressBar(centralwidget);
        progressBar_6->setObjectName(QStringLiteral("progressBar_6"));
        progressBar_6->setValue(0);
        progressBar_6->setTextVisible(true);

        formLayout_6->setWidget(9, QFormLayout::FieldRole, progressBar_6);

        label_150 = new QLabel(centralwidget);
        label_150->setObjectName(QStringLiteral("label_150"));
        label_150->setFont(font1);

        formLayout_6->setWidget(10, QFormLayout::LabelRole, label_150);

        progressBar_7 = new QProgressBar(centralwidget);
        progressBar_7->setObjectName(QStringLiteral("progressBar_7"));
        progressBar_7->setValue(0);
        progressBar_7->setTextVisible(true);

        formLayout_6->setWidget(10, QFormLayout::FieldRole, progressBar_7);

        label_128 = new QLabel(centralwidget);
        label_128->setObjectName(QStringLiteral("label_128"));
        label_128->setFont(font1);

        formLayout_6->setWidget(11, QFormLayout::LabelRole, label_128);

        progressBar_8 = new QProgressBar(centralwidget);
        progressBar_8->setObjectName(QStringLiteral("progressBar_8"));
        progressBar_8->setMaximum(300);
        progressBar_8->setValue(0);
        progressBar_8->setTextVisible(true);

        formLayout_6->setWidget(11, QFormLayout::FieldRole, progressBar_8);

        label_129 = new QLabel(centralwidget);
        label_129->setObjectName(QStringLiteral("label_129"));
        label_129->setFont(font1);

        formLayout_6->setWidget(12, QFormLayout::LabelRole, label_129);

        progressBar_9 = new QProgressBar(centralwidget);
        progressBar_9->setObjectName(QStringLiteral("progressBar_9"));
        progressBar_9->setValue(0);
        progressBar_9->setTextVisible(true);

        formLayout_6->setWidget(12, QFormLayout::FieldRole, progressBar_9);

        label_130 = new QLabel(centralwidget);
        label_130->setObjectName(QStringLiteral("label_130"));
        label_130->setFont(font1);

        formLayout_6->setWidget(13, QFormLayout::LabelRole, label_130);

        progressBar_10 = new QProgressBar(centralwidget);
        progressBar_10->setObjectName(QStringLiteral("progressBar_10"));
        progressBar_10->setValue(0);
        progressBar_10->setTextVisible(true);

        formLayout_6->setWidget(13, QFormLayout::FieldRole, progressBar_10);

        label_131 = new QLabel(centralwidget);
        label_131->setObjectName(QStringLiteral("label_131"));
        label_131->setFont(font1);

        formLayout_6->setWidget(14, QFormLayout::LabelRole, label_131);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);

        formLayout_6->setWidget(14, QFormLayout::FieldRole, progressBar);

        label_132 = new QLabel(centralwidget);
        label_132->setObjectName(QStringLiteral("label_132"));
        label_132->setFont(font1);

        formLayout_6->setWidget(15, QFormLayout::LabelRole, label_132);

        progressBar_11 = new QProgressBar(centralwidget);
        progressBar_11->setObjectName(QStringLiteral("progressBar_11"));
        progressBar_11->setValue(0);
        progressBar_11->setTextVisible(true);

        formLayout_6->setWidget(15, QFormLayout::FieldRole, progressBar_11);

        label_133 = new QLabel(centralwidget);
        label_133->setObjectName(QStringLiteral("label_133"));
        label_133->setFont(font1);

        formLayout_6->setWidget(16, QFormLayout::LabelRole, label_133);

        progressBar_12 = new QProgressBar(centralwidget);
        progressBar_12->setObjectName(QStringLiteral("progressBar_12"));
        progressBar_12->setValue(0);
        progressBar_12->setTextVisible(true);

        formLayout_6->setWidget(16, QFormLayout::FieldRole, progressBar_12);

        label_134 = new QLabel(centralwidget);
        label_134->setObjectName(QStringLiteral("label_134"));
        label_134->setFont(font1);

        formLayout_6->setWidget(17, QFormLayout::LabelRole, label_134);

        progressBar_13 = new QProgressBar(centralwidget);
        progressBar_13->setObjectName(QStringLiteral("progressBar_13"));
        progressBar_13->setValue(0);
        progressBar_13->setTextVisible(true);

        formLayout_6->setWidget(17, QFormLayout::FieldRole, progressBar_13);

        label_135 = new QLabel(centralwidget);
        label_135->setObjectName(QStringLiteral("label_135"));
        label_135->setFont(font1);

        formLayout_6->setWidget(18, QFormLayout::LabelRole, label_135);

        progressBar_14 = new QProgressBar(centralwidget);
        progressBar_14->setObjectName(QStringLiteral("progressBar_14"));
        progressBar_14->setValue(0);
        progressBar_14->setTextVisible(true);

        formLayout_6->setWidget(18, QFormLayout::FieldRole, progressBar_14);

        label_136 = new QLabel(centralwidget);
        label_136->setObjectName(QStringLiteral("label_136"));
        label_136->setFont(font1);

        formLayout_6->setWidget(19, QFormLayout::LabelRole, label_136);

        progressBar_15 = new QProgressBar(centralwidget);
        progressBar_15->setObjectName(QStringLiteral("progressBar_15"));
        progressBar_15->setValue(0);
        progressBar_15->setTextVisible(true);

        formLayout_6->setWidget(19, QFormLayout::FieldRole, progressBar_15);

        label_137 = new QLabel(centralwidget);
        label_137->setObjectName(QStringLiteral("label_137"));
        label_137->setFont(font1);

        formLayout_6->setWidget(20, QFormLayout::LabelRole, label_137);

        verticalSpacer_39 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_6->setItem(21, QFormLayout::LabelRole, verticalSpacer_39);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        formLayout_6->setLayout(22, QFormLayout::FieldRole, verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_6->setItem(20, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout_8->addLayout(formLayout_6);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_8->addWidget(tableWidget);


        gridLayout_11->addLayout(verticalLayout_8, 2, 4, 1, 1);

        tableWidget_5 = new QTableWidget(centralwidget);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));
        tableWidget_5->setMinimumSize(QSize(600, 0));
        tableWidget_5->setMaximumSize(QSize(600, 16777215));

        gridLayout_11->addWidget(tableWidget_5, 2, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_11, 8, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_10);

        prod->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(prod);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        prod->setStatusBar(statusbar);

        retranslateUi(prod);

        QMetaObject::connectSlotsByName(prod);
    } // setupUi

    void retranslateUi(QMainWindow *prod)
    {
        prod->setWindowTitle(QApplication::translate("prod", "MainWindow", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("prod", "\320\241\321\202\320\260\321\200\321\202", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("prod", "\320\241\321\202\320\276\320\277", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("prod", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("prod", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
        label_2->setText(QString());
        label_152->setText(QString());
        progressBar_2->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_153->setText(QString());
        progressBar_3->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_126->setText(QString());
        progressBar_4->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_151->setText(QString());
        progressBar_5->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_127->setText(QString());
        progressBar_6->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_150->setText(QString());
        progressBar_7->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_128->setText(QString());
        progressBar_8->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_129->setText(QString());
        progressBar_9->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_130->setText(QString());
        progressBar_10->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_131->setText(QString());
        progressBar->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_132->setText(QString());
        progressBar_11->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_133->setText(QString());
        progressBar_12->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_134->setText(QString());
        progressBar_13->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_135->setText(QString());
        progressBar_14->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_136->setText(QString());
        progressBar_15->setFormat(QApplication::translate("prod", "%p", Q_NULLPTR));
        label_137->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class prod: public Ui_prod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROD_H
