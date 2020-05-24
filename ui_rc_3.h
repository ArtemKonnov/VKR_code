/********************************************************************************
** Form generated from reading UI file 'rc_3.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RC_3_H
#define UI_RC_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rc_3
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_8;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *rc_3)
    {
        if (rc_3->objectName().isEmpty())
            rc_3->setObjectName(QStringLiteral("rc_3"));
        rc_3->resize(924, 497);
        rc_3->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(rc_3);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QFont font;
        font.setPointSize(11);
        centralWidget->setFont(font);
        centralWidget->setStyleSheet(QLatin1String("QWidget#centralWidget{\n"
"border-image: url(:/img/dron_kvadrokopter_gory_146402_1600x1200.jpg) \n"
"}"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 80));
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(87);
        font1.setStrikeOut(false);
        pushButton->setFont(font1);
        pushButton->setAutoFillBackground(false);
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
"  background: linear-gradient(rgb(110,112,120), rgb(81,81,86)) rgb(70, 70, 70);\n"
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
"   0 2px "
                        "3px rgba(0,0,0,.5) inset,\n"
"   0 1px 1px rgba(255,255,255,.1);\n"
"}"));

        gridLayout_4->addWidget(pushButton, 1, 1, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 80));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton{\n"
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
"  background: linear-gradient(rgb(110,112,120), rgb(81,81,86)) rgb(70, 70, 70);\n"
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
"   0 2px "
                        "3px rgba(0,0,0,.5) inset,\n"
"   0 1px 1px rgba(255,255,255,.1);\n"
"}"));

        gridLayout_4->addWidget(pushButton_8, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 2, 0, 1, 1);

        rc_3->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(rc_3);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 924, 20));
        rc_3->setMenuBar(menuBar);
        mainToolBar = new QToolBar(rc_3);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        rc_3->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(rc_3);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        rc_3->setStatusBar(statusBar);

        retranslateUi(rc_3);

        QMetaObject::connectSlotsByName(rc_3);
    } // setupUi

    void retranslateUi(QMainWindow *rc_3)
    {
        rc_3->setWindowTitle(QApplication::translate("rc_3", "rc_3", Q_NULLPTR));
        pushButton->setText(QApplication::translate("rc_3", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\265\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("rc_3", "\320\242\320\265\321\201\321\202\320\276\320\262\321\213\320\271 \321\200\320\265\320\266\320\270\320\274", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class rc_3: public Ui_rc_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RC_3_H
