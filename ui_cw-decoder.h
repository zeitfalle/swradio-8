/********************************************************************************
** Form generated from reading UI file 'cw-decoder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CW_2D_DECODER_H
#define UI_CW_2D_DECODER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_cwDecoder
{
public:
    QFrame *frame;
    QLabel *cwCharbox;
    QLabel *cwTextbox;
    QSpinBox *SquelchLevel;
    QSpinBox *WPM;
    QSpinBox *FilterDegree;
    QLCDNumber *actualWPM;
    QPushButton *Tracker;
    QLCDNumber *noiseLeveldisplay;
    QLCDNumber *agcPeakdisplay;
    QLCDNumber *spaceLengthdisplay;
    QLCDNumber *dotLengthdisplay;
    QwtPlot *cwScope;
    QSlider *amplitudeSlider;

    void setupUi(QWidget *cwDecoder)
    {
        if (cwDecoder->objectName().isEmpty())
            cwDecoder->setObjectName(QString::fromUtf8("cwDecoder"));
        cwDecoder->resize(726, 223);
        frame = new QFrame(cwDecoder);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 0, 701, 211));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        cwCharbox = new QLabel(frame);
        cwCharbox->setObjectName(QString::fromUtf8("cwCharbox"));
        cwCharbox->setGeometry(QRect(90, 30, 101, 21));
        cwCharbox->setFrameShape(QFrame::Box);
        cwCharbox->setLineWidth(2);
        cwTextbox = new QLabel(frame);
        cwTextbox->setObjectName(QString::fromUtf8("cwTextbox"));
        cwTextbox->setGeometry(QRect(10, 10, 491, 21));
        cwTextbox->setFrameShape(QFrame::Box);
        SquelchLevel = new QSpinBox(frame);
        SquelchLevel->setObjectName(QString::fromUtf8("SquelchLevel"));
        SquelchLevel->setGeometry(QRect(10, 30, 71, 21));
        SquelchLevel->setValue(5);
        WPM = new QSpinBox(frame);
        WPM->setObjectName(QString::fromUtf8("WPM"));
        WPM->setGeometry(QRect(10, 50, 71, 21));
        WPM->setValue(30);
        FilterDegree = new QSpinBox(frame);
        FilterDegree->setObjectName(QString::fromUtf8("FilterDegree"));
        FilterDegree->setGeometry(QRect(10, 70, 71, 21));
        FilterDegree->setValue(12);
        actualWPM = new QLCDNumber(frame);
        actualWPM->setObjectName(QString::fromUtf8("actualWPM"));
        actualWPM->setGeometry(QRect(90, 50, 64, 20));
        actualWPM->setSegmentStyle(QLCDNumber::Flat);
        Tracker = new QPushButton(frame);
        Tracker->setObjectName(QString::fromUtf8("Tracker"));
        Tracker->setGeometry(QRect(90, 90, 81, 21));
        noiseLeveldisplay = new QLCDNumber(frame);
        noiseLeveldisplay->setObjectName(QString::fromUtf8("noiseLeveldisplay"));
        noiseLeveldisplay->setGeometry(QRect(10, 140, 64, 23));
        noiseLeveldisplay->setSegmentStyle(QLCDNumber::Flat);
        agcPeakdisplay = new QLCDNumber(frame);
        agcPeakdisplay->setObjectName(QString::fromUtf8("agcPeakdisplay"));
        agcPeakdisplay->setGeometry(QRect(10, 160, 64, 23));
        agcPeakdisplay->setSegmentStyle(QLCDNumber::Flat);
        spaceLengthdisplay = new QLCDNumber(frame);
        spaceLengthdisplay->setObjectName(QString::fromUtf8("spaceLengthdisplay"));
        spaceLengthdisplay->setGeometry(QRect(10, 90, 64, 23));
        spaceLengthdisplay->setSegmentStyle(QLCDNumber::Flat);
        dotLengthdisplay = new QLCDNumber(frame);
        dotLengthdisplay->setObjectName(QString::fromUtf8("dotLengthdisplay"));
        dotLengthdisplay->setGeometry(QRect(10, 110, 64, 23));
        dotLengthdisplay->setSegmentStyle(QLCDNumber::Flat);
        cwScope = new QwtPlot(frame);
        cwScope->setObjectName(QString::fromUtf8("cwScope"));
        cwScope->setGeometry(QRect(200, 60, 471, 131));
        amplitudeSlider = new QSlider(frame);
        amplitudeSlider->setObjectName(QString::fromUtf8("amplitudeSlider"));
        amplitudeSlider->setGeometry(QRect(170, 60, 24, 131));
        amplitudeSlider->setValue(50);
        amplitudeSlider->setOrientation(Qt::Vertical);

        retranslateUi(cwDecoder);

        QMetaObject::connectSlotsByName(cwDecoder);
    } // setupUi

    void retranslateUi(QWidget *cwDecoder)
    {
        cwDecoder->setWindowTitle(QCoreApplication::translate("cwDecoder", "CW-Decoder", nullptr));
#if QT_CONFIG(tooltip)
        cwCharbox->setToolTip(QCoreApplication::translate("cwDecoder", "<html><head/><body><p>The &quot;dots&quot;, &quot;dashes&quot; and &quot;spaces&quot; in the current word.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cwCharbox->setText(QString());
        cwTextbox->setText(QString());
#if QT_CONFIG(tooltip)
        SquelchLevel->setToolTip(QCoreApplication::translate("cwDecoder", "<html><head/><body><p>Squelch level, signal strength below this level is assumed to be noise.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        WPM->setToolTip(QCoreApplication::translate("cwDecoder", "<html><head/><body><p>Word length guess. Used to guess the length of &quot;dots&quot;, &quot;dashed&quot; and &quot;spaces&quot;. </p><p>Most amateur transmissions are synchronized on with the default selection of 30.</p><p>Fast transmissions - noted by the fact that everything becomes a &quot;dot&quot;, need a higher setting.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        FilterDegree->setToolTip(QCoreApplication::translate("cwDecoder", "<html><head/><body><p>Order of the filter that is used to isolate the selected signal from the surrounding &quot;noise&quot;.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        actualWPM->setToolTip(QCoreApplication::translate("cwDecoder", "<html><head/><body><p>Guess of the wordlength.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Tracker->setText(QCoreApplication::translate("cwDecoder", " Tracker on", nullptr));
#if QT_CONFIG(tooltip)
        noiseLeveldisplay->setToolTip(QCoreApplication::translate("cwDecoder", "<html><head/><body><p>Average noise Level.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        agcPeakdisplay->setToolTip(QCoreApplication::translate("cwDecoder", "<html><head/><body><p>Signal peak level.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spaceLengthdisplay->setToolTip(QCoreApplication::translate("cwDecoder", "<html><head/><body><p>Guess of the duration of a &quot;space&quot; (in samples).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        dotLengthdisplay->setToolTip(QCoreApplication::translate("cwDecoder", "<html><head/><body><p>Guess of the length of &quot;dots&quot; (in samples).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class cwDecoder: public Ui_cwDecoder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CW_2D_DECODER_H
