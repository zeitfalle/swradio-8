/********************************************************************************
** Form generated from reading UI file 'amtor-widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMTOR_2D_WIDGET_H
#define UI_AMTOR_2D_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_amtorwidget
{
public:
    QFrame *frame;
    QLabel *amtortextBox;
    QLCDNumber *amtorFreqCorrection;
    QLCDNumber *amtorStrengthMeter;
    QComboBox *amtorAfconButton;
    QComboBox *amtorReverseButton;
    QComboBox *amtorFecErrorButton;
    QComboBox *amtorMessage;
    QLabel *label;

    void setupUi(QWidget *amtorwidget)
    {
        if (amtorwidget->objectName().isEmpty())
            amtorwidget->setObjectName(QString::fromUtf8("amtorwidget"));
        amtorwidget->resize(593, 142);
        frame = new QFrame(amtorwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 20, 571, 101));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        amtortextBox = new QLabel(frame);
        amtortextBox->setObjectName(QString::fromUtf8("amtortextBox"));
        amtortextBox->setGeometry(QRect(10, 60, 541, 21));
        amtortextBox->setFrameShape(QFrame::Box);
        amtortextBox->setFrameShadow(QFrame::Plain);
        amtorFreqCorrection = new QLCDNumber(frame);
        amtorFreqCorrection->setObjectName(QString::fromUtf8("amtorFreqCorrection"));
        amtorFreqCorrection->setGeometry(QRect(10, 10, 64, 23));
        amtorFreqCorrection->setSegmentStyle(QLCDNumber::Flat);
        amtorStrengthMeter = new QLCDNumber(frame);
        amtorStrengthMeter->setObjectName(QString::fromUtf8("amtorStrengthMeter"));
        amtorStrengthMeter->setGeometry(QRect(10, 30, 64, 23));
        amtorStrengthMeter->setSegmentStyle(QLCDNumber::Flat);
        amtorAfconButton = new QComboBox(frame);
        amtorAfconButton->addItem(QString());
        amtorAfconButton->addItem(QString());
        amtorAfconButton->setObjectName(QString::fromUtf8("amtorAfconButton"));
        amtorAfconButton->setGeometry(QRect(80, 10, 85, 21));
        amtorReverseButton = new QComboBox(frame);
        amtorReverseButton->addItem(QString());
        amtorReverseButton->addItem(QString());
        amtorReverseButton->setObjectName(QString::fromUtf8("amtorReverseButton"));
        amtorReverseButton->setGeometry(QRect(80, 30, 85, 21));
        amtorFecErrorButton = new QComboBox(frame);
        amtorFecErrorButton->addItem(QString());
        amtorFecErrorButton->addItem(QString());
        amtorFecErrorButton->setObjectName(QString::fromUtf8("amtorFecErrorButton"));
        amtorFecErrorButton->setGeometry(QRect(220, 10, 85, 21));
        amtorMessage = new QComboBox(frame);
        amtorMessage->addItem(QString());
        amtorMessage->addItem(QString());
        amtorMessage->setObjectName(QString::fromUtf8("amtorMessage"));
        amtorMessage->setGeometry(QRect(320, 10, 85, 21));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 10, 67, 21));

        retranslateUi(amtorwidget);

        QMetaObject::connectSlotsByName(amtorwidget);
    } // setupUi

    void retranslateUi(QWidget *amtorwidget)
    {
        amtorwidget->setWindowTitle(QCoreApplication::translate("amtorwidget", "amtor-decoder", nullptr));
        amtortextBox->setText(QCoreApplication::translate("amtorwidget", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        amtorFreqCorrection->setToolTip(QCoreApplication::translate("amtorwidget", "<html><head/><body><p>Frequency correction.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        amtorStrengthMeter->setToolTip(QCoreApplication::translate("amtorwidget", "<html><head/><body><p>&quot;Strength&quot; meter for the AMTOR signal.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        amtorAfconButton->setItemText(0, QCoreApplication::translate("amtorwidget", "afc off", nullptr));
        amtorAfconButton->setItemText(1, QCoreApplication::translate("amtorwidget", "afc on", nullptr));

        amtorReverseButton->setItemText(0, QCoreApplication::translate("amtorwidget", "normal", nullptr));
        amtorReverseButton->setItemText(1, QCoreApplication::translate("amtorwidget", "reverse", nullptr));

        amtorFecErrorButton->setItemText(0, QCoreApplication::translate("amtorwidget", "non strict", nullptr));
        amtorFecErrorButton->setItemText(1, QCoreApplication::translate("amtorwidget", "strict", nullptr));

#if QT_CONFIG(tooltip)
        amtorFecErrorButton->setToolTip(QCoreApplication::translate("amtorwidget", "<html><head/><body><p>Standard or non-standard decoding.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        amtorMessage->setItemText(0, QCoreApplication::translate("amtorwidget", "all text", nullptr));
        amtorMessage->setItemText(1, QCoreApplication::translate("amtorwidget", "message", nullptr));

#if QT_CONFIG(tooltip)
        amtorMessage->setToolTip(QCoreApplication::translate("amtorwidget", "<html><head/><body><p>All texts (right or wrong) or just recognized messages.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("amtorwidget", "amtor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class amtorwidget: public Ui_amtorwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMTOR_2D_WIDGET_H
