/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <my_widgets.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *candidateGroup;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    ImageLabel *candidateImageLabel_1;
    ImageLabel *candidateImageLabel_2;
    ImageLabel *candidateImageLabel_3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout;
    QRadioButton *candSimilar_1;
    QRadioButton *candDissimilar_1;
    QRadioButton *candUnknown_1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *candSimilar_2;
    QRadioButton *candDissimilar_2;
    QRadioButton *candUnknown_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *candSimilar_3;
    QRadioButton *candDissimilar_3;
    QRadioButton *candUnknown_3;
    QHBoxLayout *horizontalLayout_9;
    ImageLabel *candidateImageLabel_4;
    ImageLabel *candidateImageLabel_5;
    ImageLabel *candidateImageLabel_6;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *candSimilar_4;
    QRadioButton *candDissimilar_4;
    QRadioButton *candUnknown_4;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *candSimilar_5;
    QRadioButton *candDissimilar_5;
    QRadioButton *candUnknown_5;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *candSimilar_6;
    QRadioButton *candDissimilar_6;
    QRadioButton *candUnknown_6;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *updateCandidatesButton;
    QPushButton *lastSelectionButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *minLearningRateLabel;
    QSlider *learningRateSlider;
    QLabel *maxLearningRateLabel;
    QFormLayout *formLayout;
    QLabel *learningRateLabel;
    QGroupBox *queryGroup;
    QGridLayout *gridLayout_2;
    QPushButton *loadImageButton;
    QPushButton *selectButton;
    QPushButton *generateCandidatesButton;
    ImageLabel *queryImageLabel;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QPushButton *finishButton;
    QPushButton *loadDatasetButton;
    QPushButton *settingsButton;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QTextEdit *outputPanel;

    void setupUi(QWidget *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(1150, 700);
        MainWindowClass->setMinimumSize(QSize(1150, 700));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../res/Qt_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        MainWindowClass->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(MainWindowClass);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        candidateGroup = new QGroupBox(MainWindowClass);
        candidateGroup->setObjectName(QString::fromUtf8("candidateGroup"));
        candidateGroup->setEnabled(false);
        candidateGroup->setMinimumSize(QSize(600, 540));
        candidateGroup->setAlignment(Qt::AlignCenter);
        candidateGroup->setFlat(false);
        verticalLayout = new QVBoxLayout(candidateGroup);
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(15);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        candidateImageLabel_1 = new ImageLabel(candidateGroup);
        candidateImageLabel_1->setObjectName(QString::fromUtf8("candidateImageLabel_1"));
        candidateImageLabel_1->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        candidateImageLabel_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(candidateImageLabel_1);

        candidateImageLabel_2 = new ImageLabel(candidateGroup);
        candidateImageLabel_2->setObjectName(QString::fromUtf8("candidateImageLabel_2"));
        candidateImageLabel_2->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        candidateImageLabel_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(candidateImageLabel_2);

        candidateImageLabel_3 = new ImageLabel(candidateGroup);
        candidateImageLabel_3->setObjectName(QString::fromUtf8("candidateImageLabel_3"));
        candidateImageLabel_3->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        candidateImageLabel_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(candidateImageLabel_3);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(15);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        candSimilar_1 = new QRadioButton(candidateGroup);
        candSimilar_1->setObjectName(QString::fromUtf8("candSimilar_1"));
        candSimilar_1->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(candSimilar_1);

        candDissimilar_1 = new QRadioButton(candidateGroup);
        candDissimilar_1->setObjectName(QString::fromUtf8("candDissimilar_1"));
        candDissimilar_1->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(candDissimilar_1);

        candUnknown_1 = new QRadioButton(candidateGroup);
        candUnknown_1->setObjectName(QString::fromUtf8("candUnknown_1"));
        candUnknown_1->setLayoutDirection(Qt::RightToLeft);
        candUnknown_1->setChecked(true);

        horizontalLayout->addWidget(candUnknown_1);


        horizontalLayout_8->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        candSimilar_2 = new QRadioButton(candidateGroup);
        candSimilar_2->setObjectName(QString::fromUtf8("candSimilar_2"));
        candSimilar_2->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(candSimilar_2);

        candDissimilar_2 = new QRadioButton(candidateGroup);
        candDissimilar_2->setObjectName(QString::fromUtf8("candDissimilar_2"));
        candDissimilar_2->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(candDissimilar_2);

        candUnknown_2 = new QRadioButton(candidateGroup);
        candUnknown_2->setObjectName(QString::fromUtf8("candUnknown_2"));
        candUnknown_2->setLayoutDirection(Qt::RightToLeft);
        candUnknown_2->setChecked(true);

        horizontalLayout_2->addWidget(candUnknown_2);


        horizontalLayout_8->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        candSimilar_3 = new QRadioButton(candidateGroup);
        candSimilar_3->setObjectName(QString::fromUtf8("candSimilar_3"));
        candSimilar_3->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(candSimilar_3);

        candDissimilar_3 = new QRadioButton(candidateGroup);
        candDissimilar_3->setObjectName(QString::fromUtf8("candDissimilar_3"));
        candDissimilar_3->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(candDissimilar_3);

        candUnknown_3 = new QRadioButton(candidateGroup);
        candUnknown_3->setObjectName(QString::fromUtf8("candUnknown_3"));
        candUnknown_3->setLayoutDirection(Qt::RightToLeft);
        candUnknown_3->setChecked(true);

        horizontalLayout_3->addWidget(candUnknown_3);


        horizontalLayout_8->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(15);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        candidateImageLabel_4 = new ImageLabel(candidateGroup);
        candidateImageLabel_4->setObjectName(QString::fromUtf8("candidateImageLabel_4"));
        candidateImageLabel_4->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        candidateImageLabel_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(candidateImageLabel_4);

        candidateImageLabel_5 = new ImageLabel(candidateGroup);
        candidateImageLabel_5->setObjectName(QString::fromUtf8("candidateImageLabel_5"));
        candidateImageLabel_5->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        candidateImageLabel_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(candidateImageLabel_5);

        candidateImageLabel_6 = new ImageLabel(candidateGroup);
        candidateImageLabel_6->setObjectName(QString::fromUtf8("candidateImageLabel_6"));
        candidateImageLabel_6->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        candidateImageLabel_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(candidateImageLabel_6);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(15);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        candSimilar_4 = new QRadioButton(candidateGroup);
        candSimilar_4->setObjectName(QString::fromUtf8("candSimilar_4"));
        candSimilar_4->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_4->addWidget(candSimilar_4);

        candDissimilar_4 = new QRadioButton(candidateGroup);
        candDissimilar_4->setObjectName(QString::fromUtf8("candDissimilar_4"));
        candDissimilar_4->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_4->addWidget(candDissimilar_4);

        candUnknown_4 = new QRadioButton(candidateGroup);
        candUnknown_4->setObjectName(QString::fromUtf8("candUnknown_4"));
        candUnknown_4->setLayoutDirection(Qt::RightToLeft);
        candUnknown_4->setChecked(true);

        horizontalLayout_4->addWidget(candUnknown_4);


        horizontalLayout_10->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        candSimilar_5 = new QRadioButton(candidateGroup);
        candSimilar_5->setObjectName(QString::fromUtf8("candSimilar_5"));
        candSimilar_5->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_5->addWidget(candSimilar_5);

        candDissimilar_5 = new QRadioButton(candidateGroup);
        candDissimilar_5->setObjectName(QString::fromUtf8("candDissimilar_5"));
        candDissimilar_5->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_5->addWidget(candDissimilar_5);

        candUnknown_5 = new QRadioButton(candidateGroup);
        candUnknown_5->setObjectName(QString::fromUtf8("candUnknown_5"));
        candUnknown_5->setLayoutDirection(Qt::RightToLeft);
        candUnknown_5->setChecked(true);

        horizontalLayout_5->addWidget(candUnknown_5);


        horizontalLayout_10->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        candSimilar_6 = new QRadioButton(candidateGroup);
        candSimilar_6->setObjectName(QString::fromUtf8("candSimilar_6"));
        candSimilar_6->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_6->addWidget(candSimilar_6);

        candDissimilar_6 = new QRadioButton(candidateGroup);
        candDissimilar_6->setObjectName(QString::fromUtf8("candDissimilar_6"));
        candDissimilar_6->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_6->addWidget(candDissimilar_6);

        candUnknown_6 = new QRadioButton(candidateGroup);
        candUnknown_6->setObjectName(QString::fromUtf8("candUnknown_6"));
        candUnknown_6->setLayoutDirection(Qt::RightToLeft);
        candUnknown_6->setChecked(true);

        horizontalLayout_6->addWidget(candUnknown_6);


        horizontalLayout_10->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        updateCandidatesButton = new QPushButton(candidateGroup);
        updateCandidatesButton->setObjectName(QString::fromUtf8("updateCandidatesButton"));
        updateCandidatesButton->setEnabled(false);
        updateCandidatesButton->setMinimumSize(QSize(150, 31));
        updateCandidatesButton->setMaximumSize(QSize(160, 31));

        horizontalLayout_12->addWidget(updateCandidatesButton);

        lastSelectionButton = new QPushButton(candidateGroup);
        lastSelectionButton->setObjectName(QString::fromUtf8("lastSelectionButton"));
        lastSelectionButton->setEnabled(false);
        lastSelectionButton->setMinimumSize(QSize(100, 31));
        lastSelectionButton->setMaximumSize(QSize(100, 31));

        horizontalLayout_12->addWidget(lastSelectionButton);

        widget = new QWidget(candidateGroup);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(200, 40));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        minLearningRateLabel = new QLabel(widget);
        minLearningRateLabel->setObjectName(QString::fromUtf8("minLearningRateLabel"));
        minLearningRateLabel->setMaximumSize(QSize(20, 16777215));
        minLearningRateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(minLearningRateLabel);

        learningRateSlider = new QSlider(widget);
        learningRateSlider->setObjectName(QString::fromUtf8("learningRateSlider"));
        learningRateSlider->setMaximumSize(QSize(150, 16777215));
        learningRateSlider->setMinimum(10);
        learningRateSlider->setMaximum(90);
        learningRateSlider->setValue(30);
        learningRateSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(learningRateSlider);

        maxLearningRateLabel = new QLabel(widget);
        maxLearningRateLabel->setObjectName(QString::fromUtf8("maxLearningRateLabel"));
        maxLearningRateLabel->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_11->addWidget(maxLearningRateLabel);


        verticalLayout_2->addLayout(horizontalLayout_11);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout->setContentsMargins(0, -1, 0, -1);
        learningRateLabel = new QLabel(widget);
        learningRateLabel->setObjectName(QString::fromUtf8("learningRateLabel"));
        learningRateLabel->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, learningRateLabel);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout_12->addWidget(widget);


        verticalLayout->addLayout(horizontalLayout_12);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(2, 1);

        gridLayout_3->addWidget(candidateGroup, 0, 1, 4, 1);

        queryGroup = new QGroupBox(MainWindowClass);
        queryGroup->setObjectName(QString::fromUtf8("queryGroup"));
        queryGroup->setEnabled(true);
        queryGroup->setMinimumSize(QSize(530, 400));
        queryGroup->setMaximumSize(QSize(530, 400));
        queryGroup->setStyleSheet(QString::fromUtf8(""));
        queryGroup->setAlignment(Qt::AlignCenter);
        queryGroup->setFlat(false);
        gridLayout_2 = new QGridLayout(queryGroup);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(15);
        gridLayout_2->setVerticalSpacing(10);
        loadImageButton = new QPushButton(queryGroup);
        loadImageButton->setObjectName(QString::fromUtf8("loadImageButton"));
        loadImageButton->setEnabled(false);
        loadImageButton->setMinimumSize(QSize(150, 31));
        loadImageButton->setMaximumSize(QSize(16777215, 31));

        gridLayout_2->addWidget(loadImageButton, 1, 0, 1, 1);

        selectButton = new QPushButton(queryGroup);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setEnabled(false);
        selectButton->setMinimumSize(QSize(150, 31));
        selectButton->setMaximumSize(QSize(16777215, 31));

        gridLayout_2->addWidget(selectButton, 1, 1, 1, 1);

        generateCandidatesButton = new QPushButton(queryGroup);
        generateCandidatesButton->setObjectName(QString::fromUtf8("generateCandidatesButton"));
        generateCandidatesButton->setEnabled(false);
        generateCandidatesButton->setMinimumSize(QSize(150, 31));
        generateCandidatesButton->setMaximumSize(QSize(16777215, 31));

        gridLayout_2->addWidget(generateCandidatesButton, 1, 2, 1, 1);

        queryImageLabel = new ImageLabel(queryGroup);
        queryImageLabel->setObjectName(QString::fromUtf8("queryImageLabel"));
        queryImageLabel->setEnabled(false);
        QPalette palette;
        QBrush brush(QColor(192, 192, 192, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(250, 250, 250, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 135, 155, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        QBrush brush4(QColor(64, 64, 64, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush3);
        queryImageLabel->setPalette(palette);
        queryImageLabel->setMouseTracking(true);
        queryImageLabel->setAutoFillBackground(false);
        queryImageLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(250, 250, 250);\n"
"}"));
        queryImageLabel->setFrameShape(QFrame::Box);
        queryImageLabel->setLineWidth(0);
        queryImageLabel->setScaledContents(true);
        queryImageLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(queryImageLabel, 0, 0, 1, 3);

        gridLayout_2->setRowStretch(0, 1);

        gridLayout_3->addWidget(queryGroup, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(MainWindowClass);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(600, 81));
        groupBox_4->setMaximumSize(QSize(16777215, 80));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        finishButton = new QPushButton(groupBox_4);
        finishButton->setObjectName(QString::fromUtf8("finishButton"));
        finishButton->setEnabled(false);
        finishButton->setMinimumSize(QSize(131, 31));
        finishButton->setMaximumSize(QSize(131, 31));

        gridLayout->addWidget(finishButton, 0, 2, 1, 1);

        loadDatasetButton = new QPushButton(groupBox_4);
        loadDatasetButton->setObjectName(QString::fromUtf8("loadDatasetButton"));
        loadDatasetButton->setMinimumSize(QSize(131, 31));
        loadDatasetButton->setMaximumSize(QSize(131, 31));

        gridLayout->addWidget(loadDatasetButton, 0, 1, 1, 1);

        settingsButton = new QPushButton(groupBox_4);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setEnabled(false);
        settingsButton->setMinimumSize(QSize(131, 31));
        settingsButton->setMaximumSize(QSize(131, 31));

        gridLayout->addWidget(settingsButton, 0, 3, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 4, 1, 1, 1);

        groupBox_3 = new QGroupBox(MainWindowClass);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(530, 200));
        groupBox_3->setMaximumSize(QSize(530, 16777215));
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        outputPanel = new QTextEdit(groupBox_3);
        outputPanel->setObjectName(QString::fromUtf8("outputPanel"));
        QFont font;
        font.setPointSize(10);
        outputPanel->setFont(font);
        outputPanel->setReadOnly(true);

        gridLayout_4->addWidget(outputPanel, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 1, 0, 4, 1);

        QWidget::setTabOrder(loadDatasetButton, loadImageButton);
        QWidget::setTabOrder(loadImageButton, selectButton);
        QWidget::setTabOrder(selectButton, generateCandidatesButton);
        QWidget::setTabOrder(generateCandidatesButton, finishButton);
        QWidget::setTabOrder(finishButton, outputPanel);
        QWidget::setTabOrder(outputPanel, candSimilar_1);
        QWidget::setTabOrder(candSimilar_1, candDissimilar_1);
        QWidget::setTabOrder(candDissimilar_1, candUnknown_1);
        QWidget::setTabOrder(candUnknown_1, candSimilar_2);
        QWidget::setTabOrder(candSimilar_2, candDissimilar_2);
        QWidget::setTabOrder(candDissimilar_2, candUnknown_2);
        QWidget::setTabOrder(candUnknown_2, candSimilar_3);
        QWidget::setTabOrder(candSimilar_3, candDissimilar_3);
        QWidget::setTabOrder(candDissimilar_3, candUnknown_3);
        QWidget::setTabOrder(candUnknown_3, candSimilar_4);
        QWidget::setTabOrder(candSimilar_4, candDissimilar_4);
        QWidget::setTabOrder(candDissimilar_4, candUnknown_4);
        QWidget::setTabOrder(candUnknown_4, candSimilar_5);
        QWidget::setTabOrder(candSimilar_5, candDissimilar_5);
        QWidget::setTabOrder(candDissimilar_5, candUnknown_5);
        QWidget::setTabOrder(candUnknown_5, candSimilar_6);
        QWidget::setTabOrder(candSimilar_6, candDissimilar_6);
        QWidget::setTabOrder(candDissimilar_6, candUnknown_6);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QWidget *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "Flora Identification", 0, QApplication::UnicodeUTF8));
        candidateGroup->setTitle(QApplication::translate("MainWindowClass", "Candidates", 0, QApplication::UnicodeUTF8));
        candidateImageLabel_1->setText(QString());
        candidateImageLabel_2->setText(QString());
        candidateImageLabel_3->setText(QString());
        candSimilar_1->setText(QApplication::translate("MainWindowClass", "S", 0, QApplication::UnicodeUTF8));
        candDissimilar_1->setText(QApplication::translate("MainWindowClass", "D", 0, QApplication::UnicodeUTF8));
        candUnknown_1->setText(QApplication::translate("MainWindowClass", "U", 0, QApplication::UnicodeUTF8));
        candSimilar_2->setText(QApplication::translate("MainWindowClass", "S", 0, QApplication::UnicodeUTF8));
        candDissimilar_2->setText(QApplication::translate("MainWindowClass", "D", 0, QApplication::UnicodeUTF8));
        candUnknown_2->setText(QApplication::translate("MainWindowClass", "U", 0, QApplication::UnicodeUTF8));
        candSimilar_3->setText(QApplication::translate("MainWindowClass", "S", 0, QApplication::UnicodeUTF8));
        candDissimilar_3->setText(QApplication::translate("MainWindowClass", "D", 0, QApplication::UnicodeUTF8));
        candUnknown_3->setText(QApplication::translate("MainWindowClass", "U", 0, QApplication::UnicodeUTF8));
        candidateImageLabel_4->setText(QString());
        candidateImageLabel_5->setText(QString());
        candidateImageLabel_6->setText(QString());
        candSimilar_4->setText(QApplication::translate("MainWindowClass", "S", 0, QApplication::UnicodeUTF8));
        candDissimilar_4->setText(QApplication::translate("MainWindowClass", "D", 0, QApplication::UnicodeUTF8));
        candUnknown_4->setText(QApplication::translate("MainWindowClass", "U", 0, QApplication::UnicodeUTF8));
        candSimilar_5->setText(QApplication::translate("MainWindowClass", "S", 0, QApplication::UnicodeUTF8));
        candDissimilar_5->setText(QApplication::translate("MainWindowClass", "D", 0, QApplication::UnicodeUTF8));
        candUnknown_5->setText(QApplication::translate("MainWindowClass", "U", 0, QApplication::UnicodeUTF8));
        candSimilar_6->setText(QApplication::translate("MainWindowClass", "S", 0, QApplication::UnicodeUTF8));
        candDissimilar_6->setText(QApplication::translate("MainWindowClass", "D", 0, QApplication::UnicodeUTF8));
        candUnknown_6->setText(QApplication::translate("MainWindowClass", "U", 0, QApplication::UnicodeUTF8));
        updateCandidatesButton->setText(QApplication::translate("MainWindowClass", "5) Update Candidates", 0, QApplication::UnicodeUTF8));
        lastSelectionButton->setText(QApplication::translate("MainWindowClass", "Last Selection", 0, QApplication::UnicodeUTF8));
        minLearningRateLabel->setText(QApplication::translate("MainWindowClass", "10", 0, QApplication::UnicodeUTF8));
        maxLearningRateLabel->setText(QApplication::translate("MainWindowClass", "90", 0, QApplication::UnicodeUTF8));
        learningRateLabel->setText(QApplication::translate("MainWindowClass", "Learning rate: 30", 0, QApplication::UnicodeUTF8));
        queryGroup->setTitle(QApplication::translate("MainWindowClass", "Query Image", 0, QApplication::UnicodeUTF8));
        loadImageButton->setText(QApplication::translate("MainWindowClass", "2) Load Image", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("MainWindowClass", "3) Select", 0, QApplication::UnicodeUTF8));
        generateCandidatesButton->setText(QApplication::translate("MainWindowClass", "4) Generate Candiates", 0, QApplication::UnicodeUTF8));
        queryImageLabel->setText(QString());
        finishButton->setText(QApplication::translate("MainWindowClass", "6) Finsih", 0, QApplication::UnicodeUTF8));
        loadDatasetButton->setText(QApplication::translate("MainWindowClass", "1) Load Dataset", 0, QApplication::UnicodeUTF8));
        settingsButton->setText(QApplication::translate("MainWindowClass", "Settings", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindowClass", "Output", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
