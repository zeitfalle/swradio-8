/********************************************************************************
** Form generated from reading UI file 'hackrf-widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HACKRF_2D_WIDGET_H
#define UI_HACKRF_2D_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hackrfWidget
{
public:
    QFrame *frame;
    QLabel *statusLabel;
    QSlider *lnagainSlider;
    QLCDNumber *lnagainDisplay;
    QLabel *serialNumber;
    QSlider *vgagainSlider;
    QLCDNumber *vgagainDisplay;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *serial_number_display;
    QLabel *usb_board_id_display;

    void setupUi(QWidget *hackrfWidget)
    {
        if (hackrfWidget->objectName().isEmpty())
            hackrfWidget->setObjectName(QString::fromUtf8("hackrfWidget"));
        hackrfWidget->resize(256, 300);
        frame = new QFrame(hackrfWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 10, 251, 291));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        statusLabel = new QLabel(frame);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(16, 180, 121, 21));
        lnagainSlider = new QSlider(frame);
        lnagainSlider->setObjectName(QString::fromUtf8("lnagainSlider"));
        lnagainSlider->setGeometry(QRect(210, 30, 20, 161));
        lnagainSlider->setMaximum(39);
        lnagainSlider->setOrientation(Qt::Vertical);
        lnagainDisplay = new QLCDNumber(frame);
        lnagainDisplay->setObjectName(QString::fromUtf8("lnagainDisplay"));
        lnagainDisplay->setGeometry(QRect(200, 0, 41, 23));
        lnagainDisplay->setDigitCount(3);
        lnagainDisplay->setSegmentStyle(QLCDNumber::Flat);
        serialNumber = new QLabel(frame);
        serialNumber->setObjectName(QString::fromUtf8("serialNumber"));
        serialNumber->setGeometry(QRect(10, 210, 141, 20));
        vgagainSlider = new QSlider(frame);
        vgagainSlider->setObjectName(QString::fromUtf8("vgagainSlider"));
        vgagainSlider->setGeometry(QRect(150, 30, 24, 161));
        vgagainSlider->setMaximum(62);
        vgagainSlider->setOrientation(Qt::Vertical);
        vgagainDisplay = new QLCDNumber(frame);
        vgagainDisplay->setObjectName(QString::fromUtf8("vgagainDisplay"));
        vgagainDisplay->setGeometry(QRect(130, 0, 64, 23));
        vgagainDisplay->setSegmentStyle(QLCDNumber::Flat);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 200, 31, 16));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 200, 31, 20));
        serial_number_display = new QLabel(frame);
        serial_number_display->setObjectName(QString::fromUtf8("serial_number_display"));
        serial_number_display->setGeometry(QRect(10, 220, 231, 16));
        usb_board_id_display = new QLabel(frame);
        usb_board_id_display->setObjectName(QString::fromUtf8("usb_board_id_display"));
        usb_board_id_display->setGeometry(QRect(10, 180, 111, 16));

        retranslateUi(hackrfWidget);

        QMetaObject::connectSlotsByName(hackrfWidget);
    } // setupUi

    void retranslateUi(QWidget *hackrfWidget)
    {
        hackrfWidget->setWindowTitle(QCoreApplication::translate("hackrfWidget", "HACKRF control", nullptr));
        statusLabel->setText(QString());
        serialNumber->setText(QString());
        label_2->setText(QCoreApplication::translate("hackrfWidget", "vga", nullptr));
        label_3->setText(QCoreApplication::translate("hackrfWidget", "lna", nullptr));
        serial_number_display->setText(QString());
        usb_board_id_display->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hackrfWidget: public Ui_hackrfWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HACKRF_2D_WIDGET_H
