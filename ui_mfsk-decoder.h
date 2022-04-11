/********************************************************************************
** Form generated from reading UI file 'mfsk-decoder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MFSK_2D_DECODER_H
#define UI_MFSK_2D_DECODER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_mfsk_widget
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *mfsktextBox;
    QSpinBox *mfskSquelch;
    QComboBox *mfskMode;
    QComboBox *mfskReverse;
    QComboBox *mfskAfcon;
    QLCDNumber *s2nDisplay;
    QLCDNumber *baudrateEstimate;
    QLCDNumber *cfDisplay;
    QSlider *amplitudeSlider;
    QwtPlot *mfskScope;

    void setupUi(QWidget *mfsk_widget)
    {
        if (mfsk_widget->objectName().isEmpty())
            mfsk_widget->setObjectName(QString::fromUtf8("mfsk_widget"));
        mfsk_widget->resize(594, 194);
        frame = new QFrame(mfsk_widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 661, 191));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 10, 121, 21));
        mfsktextBox = new QLabel(frame);
        mfsktextBox->setObjectName(QString::fromUtf8("mfsktextBox"));
        mfsktextBox->setGeometry(QRect(10, 160, 581, 21));
        mfsktextBox->setFrameShape(QFrame::Box);
        mfskSquelch = new QSpinBox(frame);
        mfskSquelch->setObjectName(QString::fromUtf8("mfskSquelch"));
        mfskSquelch->setGeometry(QRect(20, 70, 59, 21));
        mfskSquelch->setValue(5);
        mfskMode = new QComboBox(frame);
        mfskMode->addItem(QString());
        mfskMode->addItem(QString());
        mfskMode->addItem(QString());
        mfskMode->addItem(QString());
        mfskMode->addItem(QString());
        mfskMode->addItem(QString());
        mfskMode->addItem(QString());
        mfskMode->addItem(QString());
        mfskMode->setObjectName(QString::fromUtf8("mfskMode"));
        mfskMode->setGeometry(QRect(20, 10, 85, 21));
        mfskReverse = new QComboBox(frame);
        mfskReverse->addItem(QString());
        mfskReverse->addItem(QString());
        mfskReverse->setObjectName(QString::fromUtf8("mfskReverse"));
        mfskReverse->setGeometry(QRect(20, 30, 85, 21));
        mfskAfcon = new QComboBox(frame);
        mfskAfcon->addItem(QString());
        mfskAfcon->addItem(QString());
        mfskAfcon->setObjectName(QString::fromUtf8("mfskAfcon"));
        mfskAfcon->setGeometry(QRect(20, 50, 85, 21));
        s2nDisplay = new QLCDNumber(frame);
        s2nDisplay->setObjectName(QString::fromUtf8("s2nDisplay"));
        s2nDisplay->setGeometry(QRect(20, 90, 64, 21));
        s2nDisplay->setSegmentStyle(QLCDNumber::Flat);
        baudrateEstimate = new QLCDNumber(frame);
        baudrateEstimate->setObjectName(QString::fromUtf8("baudrateEstimate"));
        baudrateEstimate->setGeometry(QRect(20, 110, 64, 23));
        baudrateEstimate->setSegmentStyle(QLCDNumber::Flat);
        cfDisplay = new QLCDNumber(frame);
        cfDisplay->setObjectName(QString::fromUtf8("cfDisplay"));
        cfDisplay->setGeometry(QRect(20, 130, 64, 21));
        cfDisplay->setSegmentStyle(QLCDNumber::Flat);
        amplitudeSlider = new QSlider(frame);
        amplitudeSlider->setObjectName(QString::fromUtf8("amplitudeSlider"));
        amplitudeSlider->setGeometry(QRect(130, 10, 24, 141));
        amplitudeSlider->setSliderPosition(50);
        amplitudeSlider->setOrientation(Qt::Vertical);
        mfskScope = new QwtPlot(frame);
        mfskScope->setObjectName(QString::fromUtf8("mfskScope"));
        mfskScope->setGeometry(QRect(170, 40, 341, 111));

        retranslateUi(mfsk_widget);

        QMetaObject::connectSlotsByName(mfsk_widget);
    } // setupUi

    void retranslateUi(QWidget *mfsk_widget)
    {
        mfsk_widget->setWindowTitle(QCoreApplication::translate("mfsk_widget", "mfsk_decoder", nullptr));
        label->setText(QCoreApplication::translate("mfsk_widget", "mfsk decoder", nullptr));
        mfsktextBox->setText(QCoreApplication::translate("mfsk_widget", "TextLabel", nullptr));
        mfskMode->setItemText(0, QCoreApplication::translate("mfsk_widget", "mfsk 16", nullptr));
        mfskMode->setItemText(1, QCoreApplication::translate("mfsk_widget", "mfsk 8", nullptr));
        mfskMode->setItemText(2, QCoreApplication::translate("mfsk_widget", "mfsk 4", nullptr));
        mfskMode->setItemText(3, QCoreApplication::translate("mfsk_widget", "mfsk 11", nullptr));
        mfskMode->setItemText(4, QCoreApplication::translate("mfsk_widget", "mfsk 22", nullptr));
        mfskMode->setItemText(5, QCoreApplication::translate("mfsk_widget", "mfsk 31", nullptr));
        mfskMode->setItemText(6, QCoreApplication::translate("mfsk_widget", "mfsk 32", nullptr));
        mfskMode->setItemText(7, QCoreApplication::translate("mfsk_widget", "mfsk 64", nullptr));

        mfskReverse->setItemText(0, QCoreApplication::translate("mfsk_widget", "normal", nullptr));
        mfskReverse->setItemText(1, QCoreApplication::translate("mfsk_widget", "reverse", nullptr));

        mfskAfcon->setItemText(0, QCoreApplication::translate("mfsk_widget", "afc off", nullptr));
        mfskAfcon->setItemText(1, QCoreApplication::translate("mfsk_widget", "afc on", nullptr));

    } // retranslateUi

};

namespace Ui {
    class mfsk_widget: public Ui_mfsk_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MFSK_2D_DECODER_H
