/********************************************************************************
** Form generated from reading UI file 'rtlsdr-widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTLSDR_2D_WIDGET_H
#define UI_RTLSDR_2D_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rtlsdrWidget
{
public:
    QFrame *frame;
    QLabel *label;
    QSpinBox *f_correction;
    QLabel *label_4;
    QLabel *statusLabel;
    QComboBox *rateSelector;
    QCheckBox *checkAgc;
    QLabel *deviceName;
    QComboBox *combo_gain;

    void setupUi(QWidget *rtlsdrWidget)
    {
        if (rtlsdrWidget->objectName().isEmpty())
            rtlsdrWidget->setObjectName(QString::fromUtf8("rtlsdrWidget"));
        rtlsdrWidget->resize(256, 259);
        frame = new QFrame(rtlsdrWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 241, 241));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 130, 67, 21));
        f_correction = new QSpinBox(frame);
        f_correction->setObjectName(QString::fromUtf8("f_correction"));
        f_correction->setGeometry(QRect(10, 10, 81, 21));
        f_correction->setMinimum(-100);
        f_correction->setMaximum(100);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 10, 31, 21));
        statusLabel = new QLabel(frame);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(10, 170, 121, 20));
        rateSelector = new QComboBox(frame);
        rateSelector->addItem(QString());
        rateSelector->addItem(QString());
        rateSelector->addItem(QString());
        rateSelector->addItem(QString());
        rateSelector->addItem(QString());
        rateSelector->setObjectName(QString::fromUtf8("rateSelector"));
        rateSelector->setGeometry(QRect(10, 80, 101, 29));
        checkAgc = new QCheckBox(frame);
        checkAgc->setObjectName(QString::fromUtf8("checkAgc"));
        checkAgc->setGeometry(QRect(10, 40, 61, 26));
        deviceName = new QLabel(frame);
        deviceName->setObjectName(QString::fromUtf8("deviceName"));
        deviceName->setGeometry(QRect(10, 210, 161, 21));
        combo_gain = new QComboBox(frame);
        combo_gain->setObjectName(QString::fromUtf8("combo_gain"));
        combo_gain->setGeometry(QRect(110, 40, 91, 31));

        retranslateUi(rtlsdrWidget);

        QMetaObject::connectSlotsByName(rtlsdrWidget);
    } // setupUi

    void retranslateUi(QWidget *rtlsdrWidget)
    {
        rtlsdrWidget->setWindowTitle(QCoreApplication::translate("rtlsdrWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("rtlsdrWidget", "dabStick", nullptr));
#if QT_CONFIG(tooltip)
        f_correction->setToolTip(QCoreApplication::translate("rtlsdrWidget", "<html><head/><body><p>Set the ppm.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("rtlsdrWidget", "ppm", nullptr));
        statusLabel->setText(QString());
        rateSelector->setItemText(0, QCoreApplication::translate("rtlsdrWidget", "96000", nullptr));
        rateSelector->setItemText(1, QCoreApplication::translate("rtlsdrWidget", "192000", nullptr));
        rateSelector->setItemText(2, QCoreApplication::translate("rtlsdrWidget", "512000", nullptr));
        rateSelector->setItemText(3, QCoreApplication::translate("rtlsdrWidget", "384000", nullptr));
        rateSelector->setItemText(4, QCoreApplication::translate("rtlsdrWidget", "768000", nullptr));

#if QT_CONFIG(tooltip)
        rateSelector->setToolTip(QCoreApplication::translate("rtlsdrWidget", "<html><head/><body><p>Output frequency. Note that setting the output frequency to a different value requires pushing the startbutton of the SW software to continue.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        checkAgc->setToolTip(QCoreApplication::translate("rtlsdrWidget", "<html><head/><body><p>Switch the Agc on or off.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkAgc->setText(QCoreApplication::translate("rtlsdrWidget", "agc", nullptr));
        deviceName->setText(QCoreApplication::translate("rtlsdrWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rtlsdrWidget: public Ui_rtlsdrWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTLSDR_2D_WIDGET_H
