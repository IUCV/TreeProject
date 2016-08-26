/********************************************************************************
** Form generated from reading UI file 'settings_dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_DIALOG_H
#define UI_SETTINGS_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialogClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QCheckBox *DeepCheckBox;
    QCheckBox *GISTCheckBox;
    QCheckBox *LaplRGBCheckBox;
    QCheckBox *HSVHistCheckBox;
    QCheckBox *FourierHistCheckBox;
    QCheckBox *HoughHistCheckBox;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *ColorGISTCheckBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpinBox *GISTWidthSpinBox;
    QSpinBox *GISTHeightSpinBox;
    QSpinBox *GISTBlockSpinBox;
    QSpinBox *GISTScaleSpinBox;
    QLineEdit *GISTOrientLineEdit;
    QWidget *tab_3;
    QCheckBox *DisplayFileNameCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialogClass)
    {
        if (SettingsDialogClass->objectName().isEmpty())
            SettingsDialogClass->setObjectName(QString::fromUtf8("SettingsDialogClass"));
        SettingsDialogClass->resize(350, 350);
        SettingsDialogClass->setMinimumSize(QSize(350, 350));
        SettingsDialogClass->setMaximumSize(QSize(350, 350));
        SettingsDialogClass->setModal(true);
        verticalLayout_2 = new QVBoxLayout(SettingsDialogClass);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(SettingsDialogClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(9);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(15, -1, -1, -1);
        DeepCheckBox = new QCheckBox(tab);
        DeepCheckBox->setObjectName(QString::fromUtf8("DeepCheckBox"));
        DeepCheckBox->setMinimumSize(QSize(0, 30));
        DeepCheckBox->setMaximumSize(QSize(16777215, 30));
        DeepCheckBox->setChecked(true);
        DeepCheckBox->setTristate(false);

        verticalLayout->addWidget(DeepCheckBox);

        GISTCheckBox = new QCheckBox(tab);
        GISTCheckBox->setObjectName(QString::fromUtf8("GISTCheckBox"));
        GISTCheckBox->setMinimumSize(QSize(0, 30));
        GISTCheckBox->setMaximumSize(QSize(16777215, 30));
        GISTCheckBox->setChecked(true);
        GISTCheckBox->setTristate(false);

        verticalLayout->addWidget(GISTCheckBox);

        LaplRGBCheckBox = new QCheckBox(tab);
        LaplRGBCheckBox->setObjectName(QString::fromUtf8("LaplRGBCheckBox"));
        LaplRGBCheckBox->setMinimumSize(QSize(0, 30));
        LaplRGBCheckBox->setMaximumSize(QSize(16777215, 30));
        LaplRGBCheckBox->setChecked(true);

        verticalLayout->addWidget(LaplRGBCheckBox);

        HSVHistCheckBox = new QCheckBox(tab);
        HSVHistCheckBox->setObjectName(QString::fromUtf8("HSVHistCheckBox"));
        HSVHistCheckBox->setMinimumSize(QSize(0, 30));
        HSVHistCheckBox->setMaximumSize(QSize(16777215, 30));
        HSVHistCheckBox->setChecked(true);

        verticalLayout->addWidget(HSVHistCheckBox);

        FourierHistCheckBox = new QCheckBox(tab);
        FourierHistCheckBox->setObjectName(QString::fromUtf8("FourierHistCheckBox"));
        FourierHistCheckBox->setMinimumSize(QSize(0, 30));
        FourierHistCheckBox->setMaximumSize(QSize(16777215, 30));
        FourierHistCheckBox->setChecked(true);

        verticalLayout->addWidget(FourierHistCheckBox);

        HoughHistCheckBox = new QCheckBox(tab);
        HoughHistCheckBox->setObjectName(QString::fromUtf8("HoughHistCheckBox"));
        HoughHistCheckBox->setMinimumSize(QSize(0, 30));
        HoughHistCheckBox->setMaximumSize(QSize(16777215, 30));
        HoughHistCheckBox->setChecked(true);

        verticalLayout->addWidget(HoughHistCheckBox);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(15, -1, -1, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(70, 30));
        label_4->setMaximumSize(QSize(70, 30));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(70, 30));
        label_5->setMaximumSize(QSize(70, 30));

        verticalLayout_3->addWidget(label_5);

        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(70, 30));
        label->setMaximumSize(QSize(70, 30));
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(70, 30));
        label_2->setMaximumSize(QSize(70, 30));
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(70, 30));
        label_3->setMaximumSize(QSize(70, 30));

        verticalLayout_3->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        ColorGISTCheckBox = new QCheckBox(tab_2);
        ColorGISTCheckBox->setObjectName(QString::fromUtf8("ColorGISTCheckBox"));
        ColorGISTCheckBox->setMinimumSize(QSize(170, 25));
        ColorGISTCheckBox->setMaximumSize(QSize(16777215, 30));
        ColorGISTCheckBox->setTristate(false);

        verticalLayout_4->addWidget(ColorGISTCheckBox);

        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 30));
        widget->setMaximumSize(QSize(16777215, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 100, 0);
        GISTWidthSpinBox = new QSpinBox(widget);
        GISTWidthSpinBox->setObjectName(QString::fromUtf8("GISTWidthSpinBox"));
        GISTWidthSpinBox->setMinimumSize(QSize(55, 30));
        GISTWidthSpinBox->setMaximumSize(QSize(50, 30));
        GISTWidthSpinBox->setMinimum(128);
        GISTWidthSpinBox->setMaximum(512);
        GISTWidthSpinBox->setValue(256);

        horizontalLayout->addWidget(GISTWidthSpinBox);

        GISTHeightSpinBox = new QSpinBox(widget);
        GISTHeightSpinBox->setObjectName(QString::fromUtf8("GISTHeightSpinBox"));
        GISTHeightSpinBox->setMinimumSize(QSize(55, 30));
        GISTHeightSpinBox->setMaximumSize(QSize(50, 30));
        GISTHeightSpinBox->setMinimum(128);
        GISTHeightSpinBox->setMaximum(512);
        GISTHeightSpinBox->setValue(256);

        horizontalLayout->addWidget(GISTHeightSpinBox);


        verticalLayout_4->addWidget(widget);

        GISTBlockSpinBox = new QSpinBox(tab_2);
        GISTBlockSpinBox->setObjectName(QString::fromUtf8("GISTBlockSpinBox"));
        GISTBlockSpinBox->setMinimumSize(QSize(50, 30));
        GISTBlockSpinBox->setMaximumSize(QSize(50, 30));
        GISTBlockSpinBox->setMinimum(1);
        GISTBlockSpinBox->setMaximum(4);
        GISTBlockSpinBox->setValue(4);

        verticalLayout_4->addWidget(GISTBlockSpinBox);

        GISTScaleSpinBox = new QSpinBox(tab_2);
        GISTScaleSpinBox->setObjectName(QString::fromUtf8("GISTScaleSpinBox"));
        GISTScaleSpinBox->setMinimumSize(QSize(50, 30));
        GISTScaleSpinBox->setMaximumSize(QSize(50, 30));
        GISTScaleSpinBox->setMinimum(1);
        GISTScaleSpinBox->setMaximum(4);
        GISTScaleSpinBox->setValue(4);

        verticalLayout_4->addWidget(GISTScaleSpinBox);

        GISTOrientLineEdit = new QLineEdit(tab_2);
        GISTOrientLineEdit->setObjectName(QString::fromUtf8("GISTOrientLineEdit"));
        GISTOrientLineEdit->setMinimumSize(QSize(70, 30));
        GISTOrientLineEdit->setMaximumSize(QSize(70, 30));

        verticalLayout_4->addWidget(GISTOrientLineEdit);


        horizontalLayout_2->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        DisplayFileNameCheckBox = new QCheckBox(tab_3);
        DisplayFileNameCheckBox->setObjectName(QString::fromUtf8("DisplayFileNameCheckBox"));
        DisplayFileNameCheckBox->setGeometry(QRect(15, 22, 302, 30));
        DisplayFileNameCheckBox->setMinimumSize(QSize(0, 30));
        DisplayFileNameCheckBox->setMaximumSize(QSize(16777215, 30));
        DisplayFileNameCheckBox->setChecked(false);
        DisplayFileNameCheckBox->setTristate(false);
        tabWidget->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SettingsDialogClass);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SettingsDialogClass);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialogClass, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialogClass, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialogClass);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialogClass)
    {
        SettingsDialogClass->setWindowTitle(QApplication::translate("SettingsDialogClass", "Settings", 0, QApplication::UnicodeUTF8));
        DeepCheckBox->setText(QApplication::translate("SettingsDialogClass", "Overfeat deep descriptor", 0, QApplication::UnicodeUTF8));
        GISTCheckBox->setText(QApplication::translate("SettingsDialogClass", "GIST descriptor", 0, QApplication::UnicodeUTF8));
        LaplRGBCheckBox->setText(QApplication::translate("SettingsDialogClass", "Laplacian RGB histogram", 0, QApplication::UnicodeUTF8));
        HSVHistCheckBox->setText(QApplication::translate("SettingsDialogClass", "HSV color histogram", 0, QApplication::UnicodeUTF8));
        FourierHistCheckBox->setText(QApplication::translate("SettingsDialogClass", "Fourier histogram", 0, QApplication::UnicodeUTF8));
        HoughHistCheckBox->setText(QApplication::translate("SettingsDialogClass", "Hough histogram", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingsDialogClass", "Features", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SettingsDialogClass", "Use color:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SettingsDialogClass", "Size(W, H):", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SettingsDialogClass", "Block:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SettingsDialogClass", "Scale:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SettingsDialogClass", "Orientation:", 0, QApplication::UnicodeUTF8));
        ColorGISTCheckBox->setText(QString());
        GISTOrientLineEdit->setText(QApplication::translate("SettingsDialogClass", "8,8,8,8", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsDialogClass", "GIST parameters", 0, QApplication::UnicodeUTF8));
        DisplayFileNameCheckBox->setText(QApplication::translate("SettingsDialogClass", "Display file name (a tooltip will be shown)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SettingsDialogClass", "Others", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialogClass: public Ui_SettingsDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_DIALOG_H
