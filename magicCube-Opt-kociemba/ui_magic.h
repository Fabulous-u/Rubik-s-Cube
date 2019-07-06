/********************************************************************************
** Form generated from reading UI file 'magic.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGIC_H
#define UI_MAGIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Magic
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_f;
    QLabel *label_b;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_9;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBox_port;
    QPushButton *pushButton_connect;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_18;
    QSpinBox *camera_f;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *camera_b;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_4;
    QCheckBox *checkBox_2;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser_info;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_clear;
    QHBoxLayout *horizontalLayout_9;
    QGridLayout *gridLayout;
    QLabel *label_B;
    QLabel *label_R;
    QLabel *label_D;
    QLabel *label_U;
    QLabel *label_L;
    QLabel *label_F;
    QVBoxLayout *verticalLayout_6;
    QLCDNumber *lcdNumber;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit_get;
    QLineEdit *lineEdit_answer;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Motor_Correction;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Magic)
    {
        if (Magic->objectName().isEmpty())
            Magic->setObjectName(QString::fromUtf8("Magic"));
        Magic->resize(1279, 908);
        QFont font;
        font.setFamily(QString::fromUtf8("Bauhaus 93"));
        font.setPointSize(10);
        Magic->setFont(font);
        centralWidget = new QWidget(Magic);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_7 = new QHBoxLayout(centralWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_3->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_f = new QLabel(centralWidget);
        label_f->setObjectName(QString::fromUtf8("label_f"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_f->sizePolicy().hasHeightForWidth());
        label_f->setSizePolicy(sizePolicy);
        label_f->setCursor(QCursor(Qt::CrossCursor));
        label_f->setScaledContents(true);

        horizontalLayout->addWidget(label_f);

        label_b = new QLabel(centralWidget);
        label_b->setObjectName(QString::fromUtf8("label_b"));
        sizePolicy.setHeightForWidth(label_b->sizePolicy().hasHeightForWidth());
        label_b->setSizePolicy(sizePolicy);
        label_b->setCursor(QCursor(Qt::CrossCursor));
        label_b->setScaledContents(true);

        horizontalLayout->addWidget(label_b);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        comboBox_port = new QComboBox(tab);
        comboBox_port->setObjectName(QString::fromUtf8("comboBox_port"));
        comboBox_port->setMinimumSize(QSize(0, 50));

        horizontalLayout_5->addWidget(comboBox_port);

        pushButton_connect = new QPushButton(tab);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));
        pushButton_connect->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ebrima"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_connect->setFont(font2);

        horizontalLayout_5->addWidget(pushButton_connect);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_10 = new QVBoxLayout(tab_3);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        camera_f = new QSpinBox(tab_3);
        camera_f->setObjectName(QString::fromUtf8("camera_f"));
        camera_f->setMaximum(2);
        camera_f->setValue(1);

        horizontalLayout_18->addWidget(camera_f);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_7);

        camera_b = new QSpinBox(tab_3);
        camera_b->setObjectName(QString::fromUtf8("camera_b"));
        camera_b->setMaximum(2);
        camera_b->setValue(2);

        horizontalLayout_18->addWidget(camera_b);


        verticalLayout_11->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_8);

        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_19->addWidget(pushButton_4);


        verticalLayout_11->addLayout(horizontalLayout_19);


        verticalLayout_12->addLayout(verticalLayout_11);

        checkBox_2 = new QCheckBox(tab_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy2);
        checkBox_2->setChecked(true);

        verticalLayout_12->addWidget(checkBox_2);


        verticalLayout_10->addLayout(verticalLayout_12);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_9->addWidget(tabWidget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textBrowser_info = new QTextBrowser(centralWidget);
        textBrowser_info->setObjectName(QString::fromUtf8("textBrowser_info"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textBrowser_info->sizePolicy().hasHeightForWidth());
        textBrowser_info->setSizePolicy(sizePolicy3);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Bahnschrift SemiLight"));
        font3.setPointSize(8);
        textBrowser_info->setFont(font3);
        textBrowser_info->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));

        verticalLayout_4->addWidget(textBrowser_info);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy4);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Bauhaus 93"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_clear->setFont(font4);

        horizontalLayout_8->addWidget(pushButton_clear);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_9->addLayout(verticalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout_9);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_B = new QLabel(centralWidget);
        label_B->setObjectName(QString::fromUtf8("label_B"));
        label_B->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_B, 1, 3, 1, 1);

        label_R = new QLabel(centralWidget);
        label_R->setObjectName(QString::fromUtf8("label_R"));
        label_R->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_R, 2, 1, 1, 1);

        label_D = new QLabel(centralWidget);
        label_D->setObjectName(QString::fromUtf8("label_D"));
        sizePolicy1.setHeightForWidth(label_D->sizePolicy().hasHeightForWidth());
        label_D->setSizePolicy(sizePolicy1);
        label_D->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_D, 1, 0, 1, 1);

        label_U = new QLabel(centralWidget);
        label_U->setObjectName(QString::fromUtf8("label_U"));
        label_U->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_U, 1, 2, 1, 1);

        label_L = new QLabel(centralWidget);
        label_L->setObjectName(QString::fromUtf8("label_L"));
        label_L->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_L, 0, 1, 1, 1);

        label_F = new QLabel(centralWidget);
        label_F->setObjectName(QString::fromUtf8("label_F"));
        label_F->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_F, 1, 1, 1, 1);


        horizontalLayout_9->addLayout(gridLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        sizePolicy.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(lcdNumber);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));

        verticalLayout_8->addLayout(horizontalLayout_10);


        verticalLayout_6->addLayout(verticalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        lineEdit_get = new QLineEdit(centralWidget);
        lineEdit_get->setObjectName(QString::fromUtf8("lineEdit_get"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEdit_get->sizePolicy().hasHeightForWidth());
        lineEdit_get->setSizePolicy(sizePolicy5);
        lineEdit_get->setMinimumSize(QSize(300, 0));
        lineEdit_get->setMaximumSize(QSize(16777215, 16777215));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Bahnschrift SemiBold"));
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setWeight(75);
        lineEdit_get->setFont(font5);
        lineEdit_get->setReadOnly(true);

        verticalLayout_7->addWidget(lineEdit_get);

        lineEdit_answer = new QLineEdit(centralWidget);
        lineEdit_answer->setObjectName(QString::fromUtf8("lineEdit_answer"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lineEdit_answer->sizePolicy().hasHeightForWidth());
        lineEdit_answer->setSizePolicy(sizePolicy6);
        lineEdit_answer->setMaximumSize(QSize(222222, 16777215));
        lineEdit_answer->setFont(font5);
        lineEdit_answer->setReadOnly(true);

        verticalLayout_7->addWidget(lineEdit_answer);


        horizontalLayout_11->addLayout(verticalLayout_7);


        verticalLayout_6->addLayout(horizontalLayout_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        Motor_Correction = new QPushButton(centralWidget);
        Motor_Correction->setObjectName(QString::fromUtf8("Motor_Correction"));

        horizontalLayout_6->addWidget(Motor_Correction);

        horizontalSpacer_9 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(170, 0));

        horizontalLayout_6->addWidget(pushButton);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_6->addLayout(horizontalLayout_6);


        horizontalLayout_9->addLayout(verticalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout_9);


        horizontalLayout_7->addLayout(verticalLayout_3);

        Magic->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Magic);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1279, 26));
        Magic->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Magic);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Magic->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Magic);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Magic->setStatusBar(statusBar);

        retranslateUi(Magic);
        QObject::connect(pushButton_connect, SIGNAL(pressed()), Magic, SLOT(serial_connect()));
        QObject::connect(pushButton_clear, SIGNAL(released()), Magic, SLOT(info_clear()));
        QObject::connect(checkBox_2, SIGNAL(stateChanged(int)), Magic, SLOT(showParams()));
        QObject::connect(pushButton_4, SIGNAL(released()), Magic, SLOT(OpenCamera()));
        QObject::connect(Motor_Correction, SIGNAL(pressed()), Magic, SLOT(Motor_PosCorrection()));
        QObject::connect(pushButton, SIGNAL(released()), Magic, SLOT(start_func_all()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Magic);
    } // setupUi

    void retranslateUi(QMainWindow *Magic)
    {
        Magic->setWindowTitle(QCoreApplication::translate("Magic", "Magic", nullptr));
        label_5->setText(QCoreApplication::translate("Magic", "Camera one", nullptr));
        label_6->setText(QCoreApplication::translate("Magic", "Camera two", nullptr));
        label_f->setText(QString());
        label_b->setText(QString());
        pushButton_connect->setText(QCoreApplication::translate("Magic", "Connect", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Magic", "Serial", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Magic", "OpenCamera", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Magic", "ShowParams", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Magic", "Set", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Magic", "Clear", nullptr));
        label_B->setText(QString());
        label_R->setText(QString());
        label_D->setText(QString());
        label_U->setText(QString());
        label_L->setText(QString());
        label_F->setText(QString());
        Motor_Correction->setText(QCoreApplication::translate("Magic", "Motor_Correction", nullptr));
        pushButton->setText(QCoreApplication::translate("Magic", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Magic: public Ui_Magic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGIC_H
