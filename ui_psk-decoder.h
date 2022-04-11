/********************************************************************************
** Form generated from reading UI file 'psk-decoder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PSK_2D_DECODER_H
#define UI_PSK_2D_DECODER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qwt_dial.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_psk_widget
{
public:
    QFrame *frame;
    QwtDial *pskPhaseDisplay;
    QLCDNumber *pskIFdisplay;
    QLCDNumber *pskQualitydisplay;
    QComboBox *pskAfconTrigger;
    QComboBox *pskReverseTrigger;
    QComboBox *pskModeTrigger;
    QSpinBox *pskSquelchLevelTrigger;
    QSpinBox *pskFilterDegreeTrigger;
    QLabel *psktextBox;
    QLabel *label;
    QSlider *amplitudeSlider;
    QwtPlot *pskScope;

    void setupUi(QWidget *psk_widget)
    {
        if (psk_widget->objectName().isEmpty())
            psk_widget->setObjectName(QString::fromUtf8("psk_widget"));
        psk_widget->resize(595, 234);
        frame = new QFrame(psk_widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 591, 231));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pskPhaseDisplay = new QwtDial(frame);
        pskPhaseDisplay->setObjectName(QString::fromUtf8("pskPhaseDisplay"));
        pskPhaseDisplay->setGeometry(QRect(10, 0, 131, 111));
        pskPhaseDisplay->setLineWidth(4);
        pskIFdisplay = new QLCDNumber(frame);
        pskIFdisplay->setObjectName(QString::fromUtf8("pskIFdisplay"));
        pskIFdisplay->setGeometry(QRect(160, 10, 64, 23));
        pskIFdisplay->setSegmentStyle(QLCDNumber::Flat);
        pskQualitydisplay = new QLCDNumber(frame);
        pskQualitydisplay->setObjectName(QString::fromUtf8("pskQualitydisplay"));
        pskQualitydisplay->setGeometry(QRect(160, 40, 64, 23));
        pskQualitydisplay->setSegmentStyle(QLCDNumber::Flat);
        pskAfconTrigger = new QComboBox(frame);
        pskAfconTrigger->addItem(QString());
        pskAfconTrigger->addItem(QString());
        pskAfconTrigger->setObjectName(QString::fromUtf8("pskAfconTrigger"));
        pskAfconTrigger->setGeometry(QRect(240, 10, 81, 21));
        pskReverseTrigger = new QComboBox(frame);
        pskReverseTrigger->addItem(QString());
        pskReverseTrigger->addItem(QString());
        pskReverseTrigger->setObjectName(QString::fromUtf8("pskReverseTrigger"));
        pskReverseTrigger->setGeometry(QRect(320, 10, 81, 21));
        pskModeTrigger = new QComboBox(frame);
        pskModeTrigger->addItem(QString());
        pskModeTrigger->addItem(QString());
        pskModeTrigger->addItem(QString());
        pskModeTrigger->addItem(QString());
        pskModeTrigger->addItem(QString());
        pskModeTrigger->addItem(QString());
        pskModeTrigger->setObjectName(QString::fromUtf8("pskModeTrigger"));
        pskModeTrigger->setGeometry(QRect(400, 10, 81, 21));
        pskSquelchLevelTrigger = new QSpinBox(frame);
        pskSquelchLevelTrigger->setObjectName(QString::fromUtf8("pskSquelchLevelTrigger"));
        pskSquelchLevelTrigger->setGeometry(QRect(240, 40, 81, 21));
        pskSquelchLevelTrigger->setMinimum(3);
        pskFilterDegreeTrigger = new QSpinBox(frame);
        pskFilterDegreeTrigger->setObjectName(QString::fromUtf8("pskFilterDegreeTrigger"));
        pskFilterDegreeTrigger->setGeometry(QRect(330, 40, 81, 21));
        pskFilterDegreeTrigger->setMinimum(10);
        pskFilterDegreeTrigger->setValue(12);
        psktextBox = new QLabel(frame);
        psktextBox->setObjectName(QString::fromUtf8("psktextBox"));
        psktextBox->setGeometry(QRect(10, 200, 571, 21));
        psktextBox->setFrameShape(QFrame::Panel);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 30, 161, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        amplitudeSlider = new QSlider(frame);
        amplitudeSlider->setObjectName(QString::fromUtf8("amplitudeSlider"));
        amplitudeSlider->setGeometry(QRect(140, 70, 24, 101));
        amplitudeSlider->setSliderPosition(50);
        amplitudeSlider->setOrientation(Qt::Vertical);
        pskScope = new QwtPlot(frame);
        pskScope->setObjectName(QString::fromUtf8("pskScope"));
        pskScope->setGeometry(QRect(160, 70, 400, 121));

        retranslateUi(psk_widget);

        QMetaObject::connectSlotsByName(psk_widget);
    } // setupUi

    void retranslateUi(QWidget *psk_widget)
    {
        psk_widget->setWindowTitle(QCoreApplication::translate("psk_widget", "psk-decoder", nullptr));
#if QT_CONFIG(tooltip)
        pskPhaseDisplay->setToolTip(QCoreApplication::translate("psk_widget", "<html><head/><body><p>Phase difference. In a PSK31 signal, the phase difference between successive encoded bits is either 0 or 180 degrees. For QPSK phase differences may be a multiple of 90 degrees. The &quot;meter&quot; here shows (some) phasedifferences, that can be used to interpret the signal.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pskIFdisplay->setToolTip(QCoreApplication::translate("psk_widget", "<html><head/><body><p>pskIF display. Normally 800, if the AFc is set, this will vary. Can be used to finetune to the signal.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pskQualitydisplay->setToolTip(QCoreApplication::translate("psk_widget", "<html><head/><body><p>Quality indicator. basically: the higher the number the better the quality of the signal.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pskAfconTrigger->setItemText(0, QCoreApplication::translate("psk_widget", "Afc off", nullptr));
        pskAfconTrigger->setItemText(1, QCoreApplication::translate("psk_widget", "Afc on", nullptr));

#if QT_CONFIG(tooltip)
        pskAfconTrigger->setToolTip(QCoreApplication::translate("psk_widget", "<html><head/><body><p>Afc on or off. Note that the Agc only functions when there is a - reasonable - psk signal.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pskReverseTrigger->setItemText(0, QCoreApplication::translate("psk_widget", "normal", nullptr));
        pskReverseTrigger->setItemText(1, QCoreApplication::translate("psk_widget", "reverse", nullptr));

#if QT_CONFIG(tooltip)
        pskReverseTrigger->setToolTip(QCoreApplication::translate("psk_widget", "<html><head/><body><p>Normal or reverse bit ordering in the psk &quot;words&quot;.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pskModeTrigger->setItemText(0, QCoreApplication::translate("psk_widget", "psk31", nullptr));
        pskModeTrigger->setItemText(1, QCoreApplication::translate("psk_widget", "psk63", nullptr));
        pskModeTrigger->setItemText(2, QCoreApplication::translate("psk_widget", "qpsk31", nullptr));
        pskModeTrigger->setItemText(3, QCoreApplication::translate("psk_widget", "qpsk63", nullptr));
        pskModeTrigger->setItemText(4, QCoreApplication::translate("psk_widget", "psk125", nullptr));
        pskModeTrigger->setItemText(5, QCoreApplication::translate("psk_widget", "qpsk125", nullptr));

#if QT_CONFIG(tooltip)
        pskModeTrigger->setToolTip(QCoreApplication::translate("psk_widget", "<html><head/><body><p>Select the psk &quot;mode&quot; here.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pskSquelchLevelTrigger->setToolTip(QCoreApplication::translate("psk_widget", "<html><head/><body><p>Squelch level. I.e. below this level it is assumed there is no signal.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pskFilterDegreeTrigger->setToolTip(QCoreApplication::translate("psk_widget", "<html><head/><body><p>Smallband filter. The order of the filter used to isolate the psk signal from the surrounding &quot;noise&quot;. Note that too high orders affect the signal in a negative way.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        psktextBox->setText(QString());
        label->setText(QCoreApplication::translate("psk_widget", "psk decoder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class psk_widget: public Ui_psk_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PSK_2D_DECODER_H
