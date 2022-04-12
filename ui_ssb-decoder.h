/********************************************************************************
** Form generated from reading UI file 'ssb-decoder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSB_2D_DECODER_H
#define UI_SSB_2D_DECODER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ssb_decoder
{
public:
    QFrame *frame;
    QPushButton *adaptiveFilterButton;
    QSlider *lowpassFilterslider;
    QComboBox *submodeSelector;
    QSlider *adaptiveFilterSlider;

    void setupUi(QWidget *ssb_decoder)
    {
        if (ssb_decoder->objectName().isEmpty())
            ssb_decoder->setObjectName(QString::fromUtf8("ssb_decoder"));
        ssb_decoder->resize(360, 89);
        frame = new QFrame(ssb_decoder);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 351, 81));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        adaptiveFilterButton = new QPushButton(frame);
        adaptiveFilterButton->setObjectName(QString::fromUtf8("adaptiveFilterButton"));
        adaptiveFilterButton->setGeometry(QRect(20, 40, 121, 21));
        lowpassFilterslider = new QSlider(frame);
        lowpassFilterslider->setObjectName(QString::fromUtf8("lowpassFilterslider"));
        lowpassFilterslider->setGeometry(QRect(170, 10, 160, 24));
        lowpassFilterslider->setMaximum(100);
        lowpassFilterslider->setValue(100);
        lowpassFilterslider->setOrientation(Qt::Horizontal);
        submodeSelector = new QComboBox(frame);
        submodeSelector->addItem(QString());
        submodeSelector->addItem(QString());
        submodeSelector->setObjectName(QString::fromUtf8("submodeSelector"));
        submodeSelector->setGeometry(QRect(20, 10, 121, 31));
        adaptiveFilterSlider = new QSlider(frame);
        adaptiveFilterSlider->setObjectName(QString::fromUtf8("adaptiveFilterSlider"));
        adaptiveFilterSlider->setGeometry(QRect(170, 40, 160, 24));
        adaptiveFilterSlider->setOrientation(Qt::Horizontal);

        retranslateUi(ssb_decoder);

        QMetaObject::connectSlotsByName(ssb_decoder);
    } // setupUi

    void retranslateUi(QWidget *ssb_decoder)
    {
        ssb_decoder->setWindowTitle(QCoreApplication::translate("ssb_decoder", "SSB Decoder", nullptr));
#if QT_CONFIG(tooltip)
        adaptiveFilterButton->setToolTip(QCoreApplication::translate("ssb_decoder", "<html><head/><body><p>Adaptive noise filter can be set by this button. The slider then sets the degree.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        adaptiveFilterButton->setText(QCoreApplication::translate("ssb_decoder", "filter", nullptr));
#if QT_CONFIG(tooltip)
        lowpassFilterslider->setToolTip(QCoreApplication::translate("ssb_decoder", "<html><head/><body><p>Lowpass filter, applied to the demodulated signal.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        submodeSelector->setItemText(0, QCoreApplication::translate("ssb_decoder", "mode usb", nullptr));
        submodeSelector->setItemText(1, QCoreApplication::translate("ssb_decoder", "mode lsb", nullptr));

#if QT_CONFIG(tooltip)
        submodeSelector->setToolTip(QCoreApplication::translate("ssb_decoder", "<html><head/><body><p>Choose between upper- and lower side band demodulation. Note that an appropriate bandfilter is selected elsewhere.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        adaptiveFilterSlider->setToolTip(QCoreApplication::translate("ssb_decoder", "<html><head/><body><p>adaptive filter depth setting.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class ssb_decoder: public Ui_ssb_decoder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SSB_2D_DECODER_H
