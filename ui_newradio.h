/********************************************************************************
** Form generated from reading UI file 'newradio.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWRADIO_H
#define UI_NEWRADIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QwtPlot *hfSpectrum;
    QSlider *hfScopeSlider;
    QwtPlot *lfSpectrum;
    QSlider *lfScopeSlider;
    QComboBox *decoderTable;
    QLCDNumber *frequencyDisplay;
    QPushButton *freqButton;
    QComboBox *bandSelector;
    QComboBox *streamOutSelector;
    QPushButton *freqSave;
    QPushButton *middleButton;
    QSpinBox *mouse_Inc;
    QComboBox *AGC_select;
    QSpinBox *agc_thresholdSlider;
    QLabel *timeDisplay;
    QLabel *label_2;
    QPushButton *dumpButton;
    QwtPlot *audioSpectrum;
    QLabel *bandLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1072, 610);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hfSpectrum = new QwtPlot(centralwidget);
        hfSpectrum->setObjectName(QString::fromUtf8("hfSpectrum"));
        hfSpectrum->setGeometry(QRect(40, 30, 1001, 241));
        hfScopeSlider = new QSlider(centralwidget);
        hfScopeSlider->setObjectName(QString::fromUtf8("hfScopeSlider"));
        hfScopeSlider->setGeometry(QRect(20, 40, 24, 171));
        hfScopeSlider->setOrientation(Qt::Vertical);
        lfSpectrum = new QwtPlot(centralwidget);
        lfSpectrum->setObjectName(QString::fromUtf8("lfSpectrum"));
        lfSpectrum->setGeometry(QRect(300, 290, 741, 241));
        lfScopeSlider = new QSlider(centralwidget);
        lfScopeSlider->setObjectName(QString::fromUtf8("lfScopeSlider"));
        lfScopeSlider->setGeometry(QRect(270, 340, 21, 141));
        lfScopeSlider->setOrientation(Qt::Vertical);
        decoderTable = new QComboBox(centralwidget);
        decoderTable->addItem(QString());
        decoderTable->setObjectName(QString::fromUtf8("decoderTable"));
        decoderTable->setGeometry(QRect(160, 0, 141, 31));
        frequencyDisplay = new QLCDNumber(centralwidget);
        frequencyDisplay->setObjectName(QString::fromUtf8("frequencyDisplay"));
        frequencyDisplay->setGeometry(QRect(100, 40, 241, 61));
        QFont font;
        font.setPointSize(13);
        frequencyDisplay->setFont(font);
        frequencyDisplay->setFrameShape(QFrame::NoFrame);
        frequencyDisplay->setLineWidth(4);
        frequencyDisplay->setDigitCount(11);
        frequencyDisplay->setSegmentStyle(QLCDNumber::Flat);
        freqButton = new QPushButton(centralwidget);
        freqButton->setObjectName(QString::fromUtf8("freqButton"));
        freqButton->setGeometry(QRect(30, 550, 111, 21));
        freqButton->setStyleSheet(QString::fromUtf8("QPushButton#freqButton {\n"
"    background-color:#4dff88 ;\n"
"    color:black;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    font: bold 14px;\n"
"    min-width: 5em;\n"
"    padding: 1px;\n"
"}\n"
"QPushButton#freqButton:pressed {\n"
"    background-color: #00ff55;\n"
"}"));
        bandSelector = new QComboBox(centralwidget);
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->addItem(QString());
        bandSelector->setObjectName(QString::fromUtf8("bandSelector"));
        bandSelector->setGeometry(QRect(300, 0, 111, 31));
        streamOutSelector = new QComboBox(centralwidget);
        streamOutSelector->setObjectName(QString::fromUtf8("streamOutSelector"));
        streamOutSelector->setGeometry(QRect(620, 0, 151, 31));
        freqSave = new QPushButton(centralwidget);
        freqSave->setObjectName(QString::fromUtf8("freqSave"));
        freqSave->setGeometry(QRect(270, 550, 111, 21));
        freqSave->setStyleSheet(QString::fromUtf8("QPushButton#freqSave {\n"
"    background-color:#4dff88 ;\n"
"    color:black;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    font: bold 14px;\n"
"    min-width: 5em;\n"
"    padding: 1px;\n"
"}\n"
"QPushButton#freqSave:pressed {\n"
"    background-color: #00ff55;\n"
"}"));
        middleButton = new QPushButton(centralwidget);
        middleButton->setObjectName(QString::fromUtf8("middleButton"));
        middleButton->setGeometry(QRect(150, 550, 111, 21));
        middleButton->setStyleSheet(QString::fromUtf8("QPushButton#middleButton {\n"
"    background-color:#4dff88 ;\n"
"    color:black;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    font: bold 14px;\n"
"    min-width: 5em;\n"
"    padding: 1px;\n"
"}\n"
"QPushButton#middleButton:pressed {\n"
"    background-color: #00ff55;\n"
"}"));
        mouse_Inc = new QSpinBox(centralwidget);
        mouse_Inc->setObjectName(QString::fromUtf8("mouse_Inc"));
        mouse_Inc->setGeometry(QRect(520, 0, 101, 31));
        mouse_Inc->setValue(5);
        AGC_select = new QComboBox(centralwidget);
        AGC_select->addItem(QString());
        AGC_select->addItem(QString());
        AGC_select->addItem(QString());
        AGC_select->setObjectName(QString::fromUtf8("AGC_select"));
        AGC_select->setGeometry(QRect(390, 550, 121, 21));
        agc_thresholdSlider = new QSpinBox(centralwidget);
        agc_thresholdSlider->setObjectName(QString::fromUtf8("agc_thresholdSlider"));
        agc_thresholdSlider->setGeometry(QRect(520, 550, 81, 21));
        agc_thresholdSlider->setMinimum(-144);
        agc_thresholdSlider->setMaximum(0);
        agc_thresholdSlider->setValue(-100);
        timeDisplay = new QLabel(centralwidget);
        timeDisplay->setObjectName(QString::fromUtf8("timeDisplay"));
        timeDisplay->setGeometry(QRect(740, 550, 261, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 0, 21, 21));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        dumpButton = new QPushButton(centralwidget);
        dumpButton->setObjectName(QString::fromUtf8("dumpButton"));
        dumpButton->setGeometry(QRect(410, 0, 111, 31));
        audioSpectrum = new QwtPlot(centralwidget);
        audioSpectrum->setObjectName(QString::fromUtf8("audioSpectrum"));
        audioSpectrum->setGeometry(QRect(20, 290, 221, 231));
        bandLabel = new QLabel(centralwidget);
        bandLabel->setObjectName(QString::fromUtf8("bandLabel"));
        bandLabel->setGeometry(QRect(470, 40, 251, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        bandLabel->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        hfSpectrum->raise();
        hfScopeSlider->raise();
        lfSpectrum->raise();
        lfScopeSlider->raise();
        decoderTable->raise();
        freqButton->raise();
        bandSelector->raise();
        streamOutSelector->raise();
        freqSave->raise();
        middleButton->raise();
        mouse_Inc->raise();
        AGC_select->raise();
        agc_thresholdSlider->raise();
        timeDisplay->raise();
        label_2->raise();
        dumpButton->raise();
        frequencyDisplay->raise();
        audioSpectrum->raise();
        bandLabel->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "swradio-8", nullptr));
#if QT_CONFIG(tooltip)
        hfSpectrum->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        decoderTable->setItemText(0, QCoreApplication::translate("MainWindow", "Select Decoder", nullptr));

#if QT_CONFIG(tooltip)
        decoderTable->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        freqButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        freqButton->setText(QCoreApplication::translate("MainWindow", "Select Freq", nullptr));
        bandSelector->setItemText(0, QCoreApplication::translate("MainWindow", "AM", nullptr));
        bandSelector->setItemText(1, QCoreApplication::translate("MainWindow", "200", nullptr));
        bandSelector->setItemText(2, QCoreApplication::translate("MainWindow", "500", nullptr));
        bandSelector->setItemText(3, QCoreApplication::translate("MainWindow", "1000", nullptr));
        bandSelector->setItemText(4, QCoreApplication::translate("MainWindow", "1500", nullptr));
        bandSelector->setItemText(5, QCoreApplication::translate("MainWindow", "2000", nullptr));
        bandSelector->setItemText(6, QCoreApplication::translate("MainWindow", "4000", nullptr));
        bandSelector->setItemText(7, QCoreApplication::translate("MainWindow", "5000", nullptr));
        bandSelector->setItemText(8, QCoreApplication::translate("MainWindow", "6000", nullptr));
        bandSelector->setItemText(9, QCoreApplication::translate("MainWindow", "7000", nullptr));
        bandSelector->setItemText(10, QCoreApplication::translate("MainWindow", "8000", nullptr));
        bandSelector->setItemText(11, QCoreApplication::translate("MainWindow", "USB", nullptr));
        bandSelector->setItemText(12, QCoreApplication::translate("MainWindow", "LSB", nullptr));
        bandSelector->setItemText(13, QCoreApplication::translate("MainWindow", "Wide", nullptr));

#if QT_CONFIG(tooltip)
        bandSelector->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        streamOutSelector->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>select an audio output device. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        freqSave->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        freqSave->setText(QCoreApplication::translate("MainWindow", "Station Save", nullptr));
#if QT_CONFIG(tooltip)
        middleButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        middleButton->setText(QCoreApplication::translate("MainWindow", "Middle", nullptr));
#if QT_CONFIG(tooltip)
        mouse_Inc->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Mouse Increment. The amount of Hz that will change when moving the mousewheel is set here.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        AGC_select->setItemText(0, QCoreApplication::translate("MainWindow", "AGC Off", nullptr));
        AGC_select->setItemText(1, QCoreApplication::translate("MainWindow", "Slow", nullptr));
        AGC_select->setItemText(2, QCoreApplication::translate("MainWindow", "Fast", nullptr));

#if QT_CONFIG(tooltip)
        AGC_select->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Agc, automatic gain control, will be enabled when the agc is switched on and the signal strength exceeds</p><p>the value in the spinbox. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        timeDisplay->setText(QString());
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>SWRadio copyright:</p><p>Copyright of the Qt toolkit used: the Qt Company</p><p>Copyright of the libraries used for SDRplay, portaudio, libsndfile and libsamplerate to their developers</p><p>Copyright of the Reed Solomon Decoder software: Phil Karns</p><p>All copyrights gratefully acknowledged</p><p>CopyRight: 2018, Jan van Katwijk, Lazy Chair Computing.</p><p>sdr-j swradio (an SDR-J program) is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("MainWindow", "\302\251", nullptr));
#if QT_CONFIG(tooltip)
        dumpButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        dumpButton->setText(QCoreApplication::translate("MainWindow", "Dump", nullptr));
        bandLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWRADIO_H
