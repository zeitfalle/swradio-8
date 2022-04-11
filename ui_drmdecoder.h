/********************************************************************************
** Form generated from reading UI file 'drmdecoder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRMDECODER_H
#define UI_DRMDECODER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_drmdecoder
{
public:
    QwtPlot *equalizerDisplay;
    QSlider *scopeSlider;
    QwtPlot *iqPlotter;
    QLabel *messageLabel;
    QLabel *audioModelabel;
    QLabel *modeIndicator;
    QLabel *spectrumIndicator;
    QPushButton *channel_4;
    QPushButton *channel_3;
    QPushButton *channel_2;
    QPushButton *channel_1;
    QLCDNumber *snrDisplay;
    QLCDNumber *angleDisplay;
    QLCDNumber *show_small_offset;
    QLCDNumber *show_int_offset;
    QLCDNumber *phaseOffsetDisplay;
    QLCDNumber *clockOffsetDisplay;
    QLCDNumber *timeOffsetDisplay;
    QLCDNumber *timeDelayDisplay;
    QLabel *faadSyncLabel;
    QLabel *sdcSyncLabel;
    QLabel *aacDataLabel;
    QLabel *label_4;
    QLabel *facSyncLabel;
    QLabel *label_3;
    QLabel *timeSyncLabel;
    QLabel *label_2;
    QLabel *timeLabel;
    QLabel *countryLabel;
    QLabel *programTypeLabel;
    QLabel *datacoding;
    QLCDNumber *mer_sdc;
    QLCDNumber *mer_msc;

    void setupUi(QWidget *drmdecoder)
    {
        if (drmdecoder->objectName().isEmpty())
            drmdecoder->setObjectName(QString::fromUtf8("drmdecoder"));
        drmdecoder->resize(607, 392);
        equalizerDisplay = new QwtPlot(drmdecoder);
        equalizerDisplay->setObjectName(QString::fromUtf8("equalizerDisplay"));
        equalizerDisplay->setGeometry(QRect(10, 220, 291, 131));
        scopeSlider = new QSlider(drmdecoder);
        scopeSlider->setObjectName(QString::fromUtf8("scopeSlider"));
        scopeSlider->setGeometry(QRect(320, 210, 24, 121));
        scopeSlider->setValue(50);
        scopeSlider->setOrientation(Qt::Vertical);
        iqPlotter = new QwtPlot(drmdecoder);
        iqPlotter->setObjectName(QString::fromUtf8("iqPlotter"));
        iqPlotter->setGeometry(QRect(360, 210, 191, 141));
        messageLabel = new QLabel(drmdecoder);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setGeometry(QRect(280, 100, 261, 21));
        messageLabel->setFrameShape(QFrame::Box);
        audioModelabel = new QLabel(drmdecoder);
        audioModelabel->setObjectName(QString::fromUtf8("audioModelabel"));
        audioModelabel->setGeometry(QRect(180, 100, 71, 20));
        audioModelabel->setFrameShape(QFrame::Box);
        modeIndicator = new QLabel(drmdecoder);
        modeIndicator->setObjectName(QString::fromUtf8("modeIndicator"));
        modeIndicator->setGeometry(QRect(50, 100, 31, 21));
        modeIndicator->setFrameShape(QFrame::Box);
        spectrumIndicator = new QLabel(drmdecoder);
        spectrumIndicator->setObjectName(QString::fromUtf8("spectrumIndicator"));
        spectrumIndicator->setGeometry(QRect(10, 100, 31, 21));
        spectrumIndicator->setFrameShape(QFrame::Box);
        channel_4 = new QPushButton(drmdecoder);
        channel_4->setObjectName(QString::fromUtf8("channel_4"));
        channel_4->setGeometry(QRect(280, 70, 121, 21));
        channel_3 = new QPushButton(drmdecoder);
        channel_3->setObjectName(QString::fromUtf8("channel_3"));
        channel_3->setGeometry(QRect(280, 50, 121, 21));
        channel_2 = new QPushButton(drmdecoder);
        channel_2->setObjectName(QString::fromUtf8("channel_2"));
        channel_2->setGeometry(QRect(280, 30, 121, 21));
        channel_1 = new QPushButton(drmdecoder);
        channel_1->setObjectName(QString::fromUtf8("channel_1"));
        channel_1->setGeometry(QRect(280, 10, 121, 21));
        snrDisplay = new QLCDNumber(drmdecoder);
        snrDisplay->setObjectName(QString::fromUtf8("snrDisplay"));
        snrDisplay->setGeometry(QRect(40, 150, 141, 20));
        snrDisplay->setFrameShape(QFrame::NoFrame);
        snrDisplay->setFrameShadow(QFrame::Plain);
        snrDisplay->setLineWidth(0);
        snrDisplay->setSegmentStyle(QLCDNumber::Flat);
        angleDisplay = new QLCDNumber(drmdecoder);
        angleDisplay->setObjectName(QString::fromUtf8("angleDisplay"));
        angleDisplay->setGeometry(QRect(60, 60, 41, 23));
        angleDisplay->setFrameShape(QFrame::NoFrame);
        angleDisplay->setSegmentStyle(QLCDNumber::Flat);
        show_small_offset = new QLCDNumber(drmdecoder);
        show_small_offset->setObjectName(QString::fromUtf8("show_small_offset"));
        show_small_offset->setGeometry(QRect(60, 40, 41, 21));
        show_small_offset->setFrameShape(QFrame::NoFrame);
        show_small_offset->setSegmentStyle(QLCDNumber::Flat);
        show_int_offset = new QLCDNumber(drmdecoder);
        show_int_offset->setObjectName(QString::fromUtf8("show_int_offset"));
        show_int_offset->setGeometry(QRect(60, 10, 41, 21));
        show_int_offset->setFrameShape(QFrame::NoFrame);
        show_int_offset->setSegmentStyle(QLCDNumber::Flat);
        phaseOffsetDisplay = new QLCDNumber(drmdecoder);
        phaseOffsetDisplay->setObjectName(QString::fromUtf8("phaseOffsetDisplay"));
        phaseOffsetDisplay->setGeometry(QRect(0, 80, 41, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(8);
        phaseOffsetDisplay->setFont(font);
        phaseOffsetDisplay->setFrameShape(QFrame::NoFrame);
        phaseOffsetDisplay->setSegmentStyle(QLCDNumber::Flat);
        clockOffsetDisplay = new QLCDNumber(drmdecoder);
        clockOffsetDisplay->setObjectName(QString::fromUtf8("clockOffsetDisplay"));
        clockOffsetDisplay->setGeometry(QRect(0, 60, 41, 21));
        clockOffsetDisplay->setFrameShape(QFrame::NoFrame);
        clockOffsetDisplay->setSegmentStyle(QLCDNumber::Flat);
        timeOffsetDisplay = new QLCDNumber(drmdecoder);
        timeOffsetDisplay->setObjectName(QString::fromUtf8("timeOffsetDisplay"));
        timeOffsetDisplay->setGeometry(QRect(0, 40, 41, 21));
        timeOffsetDisplay->setFrameShape(QFrame::NoFrame);
        timeOffsetDisplay->setSegmentStyle(QLCDNumber::Flat);
        timeDelayDisplay = new QLCDNumber(drmdecoder);
        timeDelayDisplay->setObjectName(QString::fromUtf8("timeDelayDisplay"));
        timeDelayDisplay->setGeometry(QRect(0, 10, 41, 21));
        timeDelayDisplay->setFrameShape(QFrame::NoFrame);
        timeDelayDisplay->setSegmentStyle(QLCDNumber::Flat);
        faadSyncLabel = new QLabel(drmdecoder);
        faadSyncLabel->setObjectName(QString::fromUtf8("faadSyncLabel"));
        faadSyncLabel->setGeometry(QRect(510, 70, 31, 16));
        faadSyncLabel->setFrameShape(QFrame::Box);
        sdcSyncLabel = new QLabel(drmdecoder);
        sdcSyncLabel->setObjectName(QString::fromUtf8("sdcSyncLabel"));
        sdcSyncLabel->setGeometry(QRect(510, 50, 31, 21));
        sdcSyncLabel->setFrameShape(QFrame::Box);
        aacDataLabel = new QLabel(drmdecoder);
        aacDataLabel->setObjectName(QString::fromUtf8("aacDataLabel"));
        aacDataLabel->setGeometry(QRect(110, 70, 141, 20));
        aacDataLabel->setFrameShape(QFrame::Box);
        label_4 = new QLabel(drmdecoder);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(420, 50, 64, 21));
        facSyncLabel = new QLabel(drmdecoder);
        facSyncLabel->setObjectName(QString::fromUtf8("facSyncLabel"));
        facSyncLabel->setGeometry(QRect(510, 30, 31, 21));
        facSyncLabel->setFrameShape(QFrame::Box);
        label_3 = new QLabel(drmdecoder);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 30, 66, 21));
        timeSyncLabel = new QLabel(drmdecoder);
        timeSyncLabel->setObjectName(QString::fromUtf8("timeSyncLabel"));
        timeSyncLabel->setGeometry(QRect(510, 10, 31, 21));
        timeSyncLabel->setFrameShape(QFrame::Box);
        label_2 = new QLabel(drmdecoder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 10, 66, 21));
        timeLabel = new QLabel(drmdecoder);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(110, 30, 141, 21));
        timeLabel->setFrameShape(QFrame::Box);
        countryLabel = new QLabel(drmdecoder);
        countryLabel->setObjectName(QString::fromUtf8("countryLabel"));
        countryLabel->setGeometry(QRect(110, 10, 141, 21));
        countryLabel->setFrameShape(QFrame::Box);
        programTypeLabel = new QLabel(drmdecoder);
        programTypeLabel->setObjectName(QString::fromUtf8("programTypeLabel"));
        programTypeLabel->setGeometry(QRect(110, 50, 141, 21));
        programTypeLabel->setFrameShape(QFrame::Box);
        datacoding = new QLabel(drmdecoder);
        datacoding->setObjectName(QString::fromUtf8("datacoding"));
        datacoding->setGeometry(QRect(110, 100, 61, 20));
        datacoding->setFrameShape(QFrame::Box);
        mer_sdc = new QLCDNumber(drmdecoder);
        mer_sdc->setObjectName(QString::fromUtf8("mer_sdc"));
        mer_sdc->setGeometry(QRect(190, 150, 111, 23));
        mer_sdc->setFrameShape(QFrame::NoFrame);
        mer_sdc->setSegmentStyle(QLCDNumber::Flat);
        mer_msc = new QLCDNumber(drmdecoder);
        mer_msc->setObjectName(QString::fromUtf8("mer_msc"));
        mer_msc->setGeometry(QRect(370, 150, 131, 23));
        mer_msc->setFrameShape(QFrame::NoFrame);
        mer_msc->setSegmentStyle(QLCDNumber::Flat);

        retranslateUi(drmdecoder);

        QMetaObject::connectSlotsByName(drmdecoder);
    } // setupUi

    void retranslateUi(QWidget *drmdecoder)
    {
        drmdecoder->setWindowTitle(QCoreApplication::translate("drmdecoder", "drm decoder", nullptr));
        messageLabel->setText(QString());
        audioModelabel->setText(QString());
        modeIndicator->setText(QString());
        spectrumIndicator->setText(QString());
        channel_4->setText(QString());
        channel_3->setText(QString());
        channel_2->setText(QString());
#if QT_CONFIG(tooltip)
        channel_1->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>Visibility of the button suggests the availability of a DRM channel.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        channel_1->setText(QString());
#if QT_CONFIG(tooltip)
        snrDisplay->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>Estimate of the SNR of the DRM signal.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        angleDisplay->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>Phase angle of the error.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        show_small_offset->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>Fine frequency offset as measured by the software (i.e. the offset to the nearest carrier).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        show_int_offset->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>&quot;Coarse frequency offset as measured by the software&quot;</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        phaseOffsetDisplay->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>PhaseOffsetDisplay shows the local offset of the frequency as caused by the mousewheeel</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        clockOffsetDisplay->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>Estimate of the clock offset (measured between successive frames).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        timeOffsetDisplay->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>Time offset display, i.e. the &quot;fine&quot; time error.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        timeDelayDisplay->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>Time delay, i.e. a measure of the timing error.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        faadSyncLabel->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>Faad sync label. Green means that the AAC decoder could decode audio.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        faadSyncLabel->setText(QString());
#if QT_CONFIG(tooltip)
        sdcSyncLabel->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>SDC sync label, green means SDC's could be decoded (usually 16 QAM).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sdcSyncLabel->setText(QString());
        aacDataLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("drmdecoder", "SDC sync", nullptr));
#if QT_CONFIG(tooltip)
        facSyncLabel->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>FAC sync label, Green means that FAC's could be decoded (easy, often 4QAM).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        facSyncLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("drmdecoder", "FAC sync", nullptr));
#if QT_CONFIG(tooltip)
        timeSyncLabel->setToolTip(QCoreApplication::translate("drmdecoder", "<html><head/><body><p>Time sync label, green means time synchronization is OK.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        timeSyncLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("drmdecoder", "time sync", nullptr));
        timeLabel->setText(QString());
        countryLabel->setText(QString());
        programTypeLabel->setText(QString());
        datacoding->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class drmdecoder: public Ui_drmdecoder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRMDECODER_H
