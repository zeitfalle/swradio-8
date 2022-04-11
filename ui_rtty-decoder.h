/********************************************************************************
** Form generated from reading UI file 'rtty-decoder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTTY_2D_DECODER_H
#define UI_RTTY_2D_DECODER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rtty_widget
{
public:
    QFrame *frame;
    QLCDNumber *rttyStrengthMeter;
    QLCDNumber *rttyFreqCorrection;
    QLCDNumber *rttyBaudRate;
    QLCDNumber *rttyGuess;
    QLabel *rttytextBox;
    QComboBox *rttyWidthSelect;
    QComboBox *rttyBaudrateSelect;
    QComboBox *rttyParitySelect;
    QComboBox *rttyMsbSelect;
    QComboBox *rttyAfconTrigger;
    QComboBox *rttyReverseTrigger;
    QComboBox *rttyNbitsTrigger;
    QComboBox *rttyStopbitsTrigger;
    QLabel *label;

    void setupUi(QWidget *rtty_widget)
    {
        if (rtty_widget->objectName().isEmpty())
            rtty_widget->setObjectName(QString::fromUtf8("rtty_widget"));
        rtty_widget->resize(596, 139);
        frame = new QFrame(rtty_widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 661, 131));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        rttyStrengthMeter = new QLCDNumber(frame);
        rttyStrengthMeter->setObjectName(QString::fromUtf8("rttyStrengthMeter"));
        rttyStrengthMeter->setGeometry(QRect(20, 10, 64, 23));
        rttyStrengthMeter->setSegmentStyle(QLCDNumber::Flat);
        rttyFreqCorrection = new QLCDNumber(frame);
        rttyFreqCorrection->setObjectName(QString::fromUtf8("rttyFreqCorrection"));
        rttyFreqCorrection->setGeometry(QRect(20, 30, 64, 23));
        rttyFreqCorrection->setSegmentStyle(QLCDNumber::Flat);
        rttyBaudRate = new QLCDNumber(frame);
        rttyBaudRate->setObjectName(QString::fromUtf8("rttyBaudRate"));
        rttyBaudRate->setGeometry(QRect(20, 50, 64, 23));
        rttyBaudRate->setSegmentStyle(QLCDNumber::Flat);
        rttyGuess = new QLCDNumber(frame);
        rttyGuess->setObjectName(QString::fromUtf8("rttyGuess"));
        rttyGuess->setGeometry(QRect(20, 70, 64, 23));
        rttyGuess->setSegmentStyle(QLCDNumber::Flat);
        rttytextBox = new QLabel(frame);
        rttytextBox->setObjectName(QString::fromUtf8("rttytextBox"));
        rttytextBox->setGeometry(QRect(0, 100, 591, 21));
        rttytextBox->setFrameShape(QFrame::Box);
        rttyWidthSelect = new QComboBox(frame);
        rttyWidthSelect->addItem(QString());
        rttyWidthSelect->addItem(QString());
        rttyWidthSelect->addItem(QString());
        rttyWidthSelect->addItem(QString());
        rttyWidthSelect->addItem(QString());
        rttyWidthSelect->addItem(QString());
        rttyWidthSelect->addItem(QString());
        rttyWidthSelect->addItem(QString());
        rttyWidthSelect->setObjectName(QString::fromUtf8("rttyWidthSelect"));
        rttyWidthSelect->setGeometry(QRect(140, 10, 91, 21));
        rttyBaudrateSelect = new QComboBox(frame);
        rttyBaudrateSelect->addItem(QString());
        rttyBaudrateSelect->addItem(QString());
        rttyBaudrateSelect->addItem(QString());
        rttyBaudrateSelect->addItem(QString());
        rttyBaudrateSelect->addItem(QString());
        rttyBaudrateSelect->setObjectName(QString::fromUtf8("rttyBaudrateSelect"));
        rttyBaudrateSelect->setGeometry(QRect(140, 30, 91, 21));
        rttyParitySelect = new QComboBox(frame);
        rttyParitySelect->addItem(QString());
        rttyParitySelect->addItem(QString());
        rttyParitySelect->addItem(QString());
        rttyParitySelect->addItem(QString());
        rttyParitySelect->addItem(QString());
        rttyParitySelect->setObjectName(QString::fromUtf8("rttyParitySelect"));
        rttyParitySelect->setGeometry(QRect(140, 50, 91, 21));
        rttyMsbSelect = new QComboBox(frame);
        rttyMsbSelect->addItem(QString());
        rttyMsbSelect->addItem(QString());
        rttyMsbSelect->setObjectName(QString::fromUtf8("rttyMsbSelect"));
        rttyMsbSelect->setGeometry(QRect(140, 70, 91, 21));
        rttyAfconTrigger = new QComboBox(frame);
        rttyAfconTrigger->addItem(QString());
        rttyAfconTrigger->addItem(QString());
        rttyAfconTrigger->setObjectName(QString::fromUtf8("rttyAfconTrigger"));
        rttyAfconTrigger->setGeometry(QRect(250, 10, 85, 21));
        rttyReverseTrigger = new QComboBox(frame);
        rttyReverseTrigger->addItem(QString());
        rttyReverseTrigger->addItem(QString());
        rttyReverseTrigger->setObjectName(QString::fromUtf8("rttyReverseTrigger"));
        rttyReverseTrigger->setGeometry(QRect(250, 30, 85, 21));
        rttyNbitsTrigger = new QComboBox(frame);
        rttyNbitsTrigger->addItem(QString());
        rttyNbitsTrigger->addItem(QString());
        rttyNbitsTrigger->addItem(QString());
        rttyNbitsTrigger->setObjectName(QString::fromUtf8("rttyNbitsTrigger"));
        rttyNbitsTrigger->setGeometry(QRect(250, 50, 85, 21));
        rttyStopbitsTrigger = new QComboBox(frame);
        rttyStopbitsTrigger->addItem(QString());
        rttyStopbitsTrigger->addItem(QString());
        rttyStopbitsTrigger->addItem(QString());
        rttyStopbitsTrigger->setObjectName(QString::fromUtf8("rttyStopbitsTrigger"));
        rttyStopbitsTrigger->setGeometry(QRect(250, 70, 85, 21));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 10, 151, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(rtty_widget);

        QMetaObject::connectSlotsByName(rtty_widget);
    } // setupUi

    void retranslateUi(QWidget *rtty_widget)
    {
        rtty_widget->setWindowTitle(QCoreApplication::translate("rtty_widget", "rtty decoder", nullptr));
#if QT_CONFIG(tooltip)
        rttyStrengthMeter->setToolTip(QCoreApplication::translate("rtty_widget", "<html><head/><body><p>IF offset. The software tries to guess the offset of the tuned frequency.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        rttyFreqCorrection->setToolTip(QCoreApplication::translate("rtty_widget", "<html><head/><body><p>Frequency correction as applied if the Agc is on.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        rttyBaudRate->setToolTip(QCoreApplication::translate("rtty_widget", "<html><head/><body><p>Selected baudrate.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        rttyGuess->setToolTip(QCoreApplication::translate("rtty_widget", "<html><head/><body><p>Baudrate as guessed by the software.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rttytextBox->setText(QCoreApplication::translate("rtty_widget", "TextLabel", nullptr));
        rttyWidthSelect->setItemText(0, QCoreApplication::translate("rtty_widget", "170", nullptr));
        rttyWidthSelect->setItemText(1, QCoreApplication::translate("rtty_widget", "225", nullptr));
        rttyWidthSelect->setItemText(2, QCoreApplication::translate("rtty_widget", "300", nullptr));
        rttyWidthSelect->setItemText(3, QCoreApplication::translate("rtty_widget", "450", nullptr));
        rttyWidthSelect->setItemText(4, QCoreApplication::translate("rtty_widget", "600", nullptr));
        rttyWidthSelect->setItemText(5, QCoreApplication::translate("rtty_widget", "850", nullptr));
        rttyWidthSelect->setItemText(6, QCoreApplication::translate("rtty_widget", "900", nullptr));
        rttyWidthSelect->setItemText(7, QCoreApplication::translate("rtty_widget", "1200", nullptr));

        rttyBaudrateSelect->setItemText(0, QCoreApplication::translate("rtty_widget", "45", nullptr));
        rttyBaudrateSelect->setItemText(1, QCoreApplication::translate("rtty_widget", "50", nullptr));
        rttyBaudrateSelect->setItemText(2, QCoreApplication::translate("rtty_widget", "75", nullptr));
        rttyBaudrateSelect->setItemText(3, QCoreApplication::translate("rtty_widget", "100", nullptr));
        rttyBaudrateSelect->setItemText(4, QCoreApplication::translate("rtty_widget", "300", nullptr));

        rttyParitySelect->setItemText(0, QCoreApplication::translate("rtty_widget", "par none", nullptr));
        rttyParitySelect->setItemText(1, QCoreApplication::translate("rtty_widget", "par one", nullptr));
        rttyParitySelect->setItemText(2, QCoreApplication::translate("rtty_widget", "par odd", nullptr));
        rttyParitySelect->setItemText(3, QCoreApplication::translate("rtty_widget", "par even", nullptr));
        rttyParitySelect->setItemText(4, QCoreApplication::translate("rtty_widget", "par zero", nullptr));

        rttyMsbSelect->setItemText(0, QCoreApplication::translate("rtty_widget", "msb false", nullptr));
        rttyMsbSelect->setItemText(1, QCoreApplication::translate("rtty_widget", "msb true", nullptr));

        rttyAfconTrigger->setItemText(0, QCoreApplication::translate("rtty_widget", "afc off", nullptr));
        rttyAfconTrigger->setItemText(1, QCoreApplication::translate("rtty_widget", "afc on", nullptr));

        rttyReverseTrigger->setItemText(0, QCoreApplication::translate("rtty_widget", "normal", nullptr));
        rttyReverseTrigger->setItemText(1, QCoreApplication::translate("rtty_widget", "reverse", nullptr));

        rttyNbitsTrigger->setItemText(0, QCoreApplication::translate("rtty_widget", "5 bits", nullptr));
        rttyNbitsTrigger->setItemText(1, QCoreApplication::translate("rtty_widget", "7 bits", nullptr));
        rttyNbitsTrigger->setItemText(2, QCoreApplication::translate("rtty_widget", "8 bits", nullptr));

        rttyStopbitsTrigger->setItemText(0, QCoreApplication::translate("rtty_widget", "1 stop", nullptr));
        rttyStopbitsTrigger->setItemText(1, QCoreApplication::translate("rtty_widget", "1.5 stop", nullptr));
        rttyStopbitsTrigger->setItemText(2, QCoreApplication::translate("rtty_widget", "2 stop", nullptr));

        label->setText(QCoreApplication::translate("rtty_widget", "rtty decoder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rtty_widget: public Ui_rtty_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTTY_2D_DECODER_H
