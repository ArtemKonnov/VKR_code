/********************************************************************************
** Form generated from reading UI file 'testik.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTIK_H
#define UI_TESTIK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testik
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit;
    QToolButton *toolButton;
    QPushButton *pushButton;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_2;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_5;
    QLabel *label_26;
    QLabel *label_6;
    QLabel *label_22;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QSpacerItem *verticalSpacer;
    QLabel *label_16;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_4;
    QLabel *label_23;
    QLabel *label_25;
    QLabel *label_24;
    QWidget *widget_3;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_32;
    QWidget *widget_5;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QWidget *widget_2;
    QLabel *label_17;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget_6;
    QLabel *label_4;
    QWidget *widget;
    QLabel *label_33;
    QLabel *label_34;
    QWidget *widget_7;
    QLabel *label_35;
    QLabel *label_36;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *testik)
    {
        if (testik->objectName().isEmpty())
            testik->setObjectName(QStringLiteral("testik"));
        testik->resize(1025, 1489);
        testik->setMinimumSize(QSize(0, 0));
        centralwidget = new QWidget(testik);
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
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_2->addWidget(textEdit);

        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_2->addWidget(toolButton);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font;
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(87);
        font.setStrikeOut(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/294.gif")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(600, 0));
        tableWidget->setMaximumSize(QSize(600, 16777215));

        gridLayout_3->addWidget(tableWidget, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        gridLayout_3->addLayout(verticalLayout_4, 1, 2, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        QFont font1;
        label_27->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_27);

        label_28 = new QLabel(centralwidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font1);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_28);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font1);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_26);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_6);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font1);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_22);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        formLayout_2->setWidget(11, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);

        formLayout_2->setWidget(12, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font1);

        formLayout_2->setWidget(13, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font1);

        formLayout_2->setWidget(14, QFormLayout::LabelRole, label_15);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(15, QFormLayout::LabelRole, verticalSpacer);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        formLayout_2->setWidget(16, QFormLayout::LabelRole, label_16);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(17, QFormLayout::LabelRole, verticalSpacer_8);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(18, QFormLayout::LabelRole, verticalSpacer_7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(19, QFormLayout::LabelRole, verticalSpacer_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(20, QFormLayout::LabelRole, verticalSpacer_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(21, QFormLayout::LabelRole, verticalSpacer_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(22, QFormLayout::LabelRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(23, QFormLayout::LabelRole, verticalSpacer_3);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(30, 100));
        widget_4->setAutoFillBackground(false);
        label_23 = new QLabel(widget_4);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(0, 7, 391, 16));
        label_23->setFont(font1);
        label_23->setFrameShape(QFrame::NoFrame);
        label_25 = new QLabel(widget_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(0, 49, 381, 16));
        label_25->setFont(font1);
        label_24 = new QLabel(widget_4);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(0, 30, 401, 16));

        formLayout_2->setWidget(24, QFormLayout::SpanningRole, widget_4);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setEnabled(true);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(35, 120));
        widget_3->setAutoFillBackground(false);
        label_18 = new QLabel(widget_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(0, 70, 421, 16));
        label_18->setFont(font1);
        label_19 = new QLabel(widget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(0, 7, 381, 16));
        label_19->setFont(font1);
        label_19->setFrameShape(QFrame::NoFrame);
        label_20 = new QLabel(widget_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(0, 28, 441, 16));
        label_20->setFont(font1);
        label_21 = new QLabel(widget_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(0, 49, 471, 16));
        label_21->setFont(font1);
        label_32 = new QLabel(widget_3);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(0, 90, 391, 16));
        label_32->setFont(font1);

        formLayout_2->setWidget(25, QFormLayout::SpanningRole, widget_3);

        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setEnabled(true);
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setMinimumSize(QSize(30, 100));
        widget_5->setAutoFillBackground(false);
        label_29 = new QLabel(widget_5);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(0, 0, 381, 16));
        label_29->setFont(font1);
        label_30 = new QLabel(widget_5);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(0, 20, 381, 16));
        label_30->setFont(font1);
        label_30->setFrameShape(QFrame::NoFrame);
        label_31 = new QLabel(widget_5);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(0, 40, 401, 16));
        label_31->setFont(font1);

        formLayout_2->setWidget(27, QFormLayout::SpanningRole, widget_5);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setEnabled(true);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(30, 100));
        widget_2->setAutoFillBackground(false);
        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(0, 50, 361, 16));
        label_17->setFont(font1);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 7, 381, 16));
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::NoFrame);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 28, 361, 16));
        label_3->setFont(font1);

        formLayout_2->setWidget(30, QFormLayout::SpanningRole, widget_2);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setEnabled(true);
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);
        widget_6->setMinimumSize(QSize(30, 100));
        widget_6->setAutoFillBackground(false);
        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 7, 411, 16));
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::NoFrame);

        formLayout_2->setWidget(26, QFormLayout::SpanningRole, widget_6);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(100, 50));
        label_33 = new QLabel(widget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(0, 0, 281, 30));
        label_34 = new QLabel(widget);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(0, 30, 251, 16));

        formLayout_2->setWidget(28, QFormLayout::SpanningRole, widget);

        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMinimumSize(QSize(100, 40));
        label_35 = new QLabel(widget_7);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(0, 0, 141, 16));
        label_36 = new QLabel(widget_7);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(0, 20, 231, 16));

        formLayout_2->setWidget(29, QFormLayout::SpanningRole, widget_7);


        gridLayout_3->addLayout(formLayout_2, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 8, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        testik->setCentralWidget(centralwidget);
        menubar = new QMenuBar(testik);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1025, 20));
        testik->setMenuBar(menubar);
        statusbar = new QStatusBar(testik);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        testik->setStatusBar(statusbar);
        toolBar = new QToolBar(testik);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        testik->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(testik);

        QMetaObject::connectSlotsByName(testik);
    } // setupUi

    void retranslateUi(QMainWindow *testik)
    {
        testik->setWindowTitle(QApplication::translate("testik", "MainWindow", Q_NULLPTR));
        toolButton->setText(QApplication::translate("testik", "...", Q_NULLPTR));
        pushButton->setText(QApplication::translate("testik", "\320\241\321\202\320\260\321\200\321\202", Q_NULLPTR));
        label->setText(QString());
        label_27->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_28->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_26->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_22->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_11->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_12->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_13->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_14->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_15->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_16->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_23->setText(QApplication::translate("testik", "TextLabel111", Q_NULLPTR));
        label_25->setText(QApplication::translate("testik", "TextLabel333", Q_NULLPTR));
        label_24->setText(QApplication::translate("testik", "TextLabel222", Q_NULLPTR));
        label_18->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_19->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_20->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_21->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_32->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_29->setText(QApplication::translate("testik", "TextLabel00", Q_NULLPTR));
        label_30->setText(QApplication::translate("testik", "TextLabel0", Q_NULLPTR));
        label_31->setText(QApplication::translate("testik", "TextLabel9", Q_NULLPTR));
        label_17->setText(QApplication::translate("testik", "TextLabel2", Q_NULLPTR));
        label_2->setText(QApplication::translate("testik", "TextLabel4", Q_NULLPTR));
        label_3->setText(QApplication::translate("testik", "TextLabel3", Q_NULLPTR));
        label_4->setText(QApplication::translate("testik", "TextLabel", Q_NULLPTR));
        label_33->setText(QApplication::translate("testik", "TextLabel8", Q_NULLPTR));
        label_34->setText(QApplication::translate("testik", "TextLabel7", Q_NULLPTR));
        label_35->setText(QApplication::translate("testik", "TextLabel6", Q_NULLPTR));
        label_36->setText(QApplication::translate("testik", "TextLabel5", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("testik", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class testik: public Ui_testik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTIK_H
