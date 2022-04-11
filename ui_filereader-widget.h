/********************************************************************************
** Form generated from reading UI file 'filereader-widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEREADER_2D_WIDGET_H
#define UI_FILEREADER_2D_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filereader
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *nameofFile;
    QPushButton *resetButton;
    QScrollBar *progressBar;
    QLCDNumber *rateDisplay;
    QLCDNumber *currentTime;
    QLabel *label_2;
    QLCDNumber *totalTime;

    void setupUi(QWidget *filereader)
    {
        if (filereader->objectName().isEmpty())
            filereader->setObjectName(QString::fromUtf8("filereader"));
        filereader->resize(323, 243);
        frame = new QFrame(filereader);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 311, 231));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 91, 21));
        nameofFile = new QLabel(frame);
        nameofFile->setObjectName(QString::fromUtf8("nameofFile"));
        nameofFile->setGeometry(QRect(10, 50, 271, 21));
        resetButton = new QPushButton(frame);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(190, 10, 97, 31));
        progressBar = new QScrollBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(0, 140, 291, 20));
        progressBar->setAutoFillBackground(true);
        progressBar->setMaximum(100);
        progressBar->setOrientation(Qt::Horizontal);
        rateDisplay = new QLCDNumber(frame);
        rateDisplay->setObjectName(QString::fromUtf8("rateDisplay"));
        rateDisplay->setGeometry(QRect(160, 90, 121, 23));
        rateDisplay->setFrameShape(QFrame::NoFrame);
        rateDisplay->setDigitCount(7);
        rateDisplay->setSegmentStyle(QLCDNumber::Flat);
        currentTime = new QLCDNumber(frame);
        currentTime->setObjectName(QString::fromUtf8("currentTime"));
        currentTime->setGeometry(QRect(30, 180, 64, 23));
        currentTime->setFrameShape(QFrame::NoFrame);
        currentTime->setSegmentStyle(QLCDNumber::Flat);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 180, 67, 19));
        totalTime = new QLCDNumber(frame);
        totalTime->setObjectName(QString::fromUtf8("totalTime"));
        totalTime->setGeometry(QRect(190, 180, 64, 23));
        totalTime->setFrameShape(QFrame::NoFrame);
        totalTime->setSegmentStyle(QLCDNumber::Flat);

        retranslateUi(filereader);

        QMetaObject::connectSlotsByName(filereader);
    } // setupUi

    void retranslateUi(QWidget *filereader)
    {
        filereader->setWindowTitle(QCoreApplication::translate("filereader", "Form", nullptr));
        label->setText(QCoreApplication::translate("filereader", "fileReader", nullptr));
        nameofFile->setText(QString());
        resetButton->setText(QCoreApplication::translate("filereader", "reset", nullptr));
        label_2->setText(QCoreApplication::translate("filereader", "sec of ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filereader: public Ui_filereader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEREADER_2D_WIDGET_H
