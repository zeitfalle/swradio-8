/********************************************************************************
** Form generated from reading UI file 'fax-decoder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAX_2D_DECODER_H
#define UI_FAX_2D_DECODER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fax_decoder
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *iocSetter;
    QComboBox *modeSetter;
    QComboBox *phaseSetter;
    QComboBox *colorSetter;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *correctButton;
    QSpinBox *sampleCorrection;
    QComboBox *deviationSetter;
    QLabel *label;
    QLabel *showState;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *saveContinuousButton;
    QPushButton *saveSingleButton;
    QPushButton *resetButton;
    QPushButton *cheatButton;
    QLCDNumber *lineNumber;

    void setupUi(QWidget *fax_decoder)
    {
        if (fax_decoder->objectName().isEmpty())
            fax_decoder->setObjectName(QString::fromUtf8("fax_decoder"));
        fax_decoder->resize(541, 182);
        verticalLayout = new QVBoxLayout(fax_decoder);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        iocSetter = new QComboBox(fax_decoder);
        iocSetter->addItem(QString());
        iocSetter->addItem(QString());
        iocSetter->setObjectName(QString::fromUtf8("iocSetter"));

        horizontalLayout->addWidget(iocSetter);

        modeSetter = new QComboBox(fax_decoder);
        modeSetter->addItem(QString());
        modeSetter->addItem(QString());
        modeSetter->setObjectName(QString::fromUtf8("modeSetter"));

        horizontalLayout->addWidget(modeSetter);

        phaseSetter = new QComboBox(fax_decoder);
        phaseSetter->addItem(QString());
        phaseSetter->addItem(QString());
        phaseSetter->setObjectName(QString::fromUtf8("phaseSetter"));

        horizontalLayout->addWidget(phaseSetter);

        colorSetter = new QComboBox(fax_decoder);
        colorSetter->addItem(QString());
        colorSetter->addItem(QString());
        colorSetter->addItem(QString());
        colorSetter->setObjectName(QString::fromUtf8("colorSetter"));

        horizontalLayout->addWidget(colorSetter);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        correctButton = new QPushButton(fax_decoder);
        correctButton->setObjectName(QString::fromUtf8("correctButton"));

        horizontalLayout_2->addWidget(correctButton);

        sampleCorrection = new QSpinBox(fax_decoder);
        sampleCorrection->setObjectName(QString::fromUtf8("sampleCorrection"));

        horizontalLayout_2->addWidget(sampleCorrection);

        deviationSetter = new QComboBox(fax_decoder);
        deviationSetter->addItem(QString());
        deviationSetter->addItem(QString());
        deviationSetter->setObjectName(QString::fromUtf8("deviationSetter"));

        horizontalLayout_2->addWidget(deviationSetter);

        label = new QLabel(fax_decoder);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        showState = new QLabel(fax_decoder);
        showState->setObjectName(QString::fromUtf8("showState"));
        showState->setFrameShape(QFrame::Box);

        horizontalLayout_2->addWidget(showState);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        saveContinuousButton = new QPushButton(fax_decoder);
        saveContinuousButton->setObjectName(QString::fromUtf8("saveContinuousButton"));

        horizontalLayout_3->addWidget(saveContinuousButton);

        saveSingleButton = new QPushButton(fax_decoder);
        saveSingleButton->setObjectName(QString::fromUtf8("saveSingleButton"));

        horizontalLayout_3->addWidget(saveSingleButton);

        resetButton = new QPushButton(fax_decoder);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        horizontalLayout_3->addWidget(resetButton);

        cheatButton = new QPushButton(fax_decoder);
        cheatButton->setObjectName(QString::fromUtf8("cheatButton"));

        horizontalLayout_3->addWidget(cheatButton);

        lineNumber = new QLCDNumber(fax_decoder);
        lineNumber->setObjectName(QString::fromUtf8("lineNumber"));
        lineNumber->setLineWidth(0);
        lineNumber->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_3->addWidget(lineNumber);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(fax_decoder);

        QMetaObject::connectSlotsByName(fax_decoder);
    } // setupUi

    void retranslateUi(QWidget *fax_decoder)
    {
        fax_decoder->setWindowTitle(QCoreApplication::translate("fax_decoder", "fax-decoder", nullptr));
        iocSetter->setItemText(0, QCoreApplication::translate("fax_decoder", "Wefax576", nullptr));
        iocSetter->setItemText(1, QCoreApplication::translate("fax_decoder", "Wefax288", nullptr));

#if QT_CONFIG(tooltip)
        iocSetter->setToolTip(QCoreApplication::translate("fax_decoder", "<html><head/><body><p>FAX mode, implies some settings.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        modeSetter->setItemText(0, QCoreApplication::translate("fax_decoder", "FM", nullptr));
        modeSetter->setItemText(1, QCoreApplication::translate("fax_decoder", "AM", nullptr));

        phaseSetter->setItemText(0, QCoreApplication::translate("fax_decoder", "phase", nullptr));
        phaseSetter->setItemText(1, QCoreApplication::translate("fax_decoder", "inverse", nullptr));

#if QT_CONFIG(tooltip)
        phaseSetter->setToolTip(QCoreApplication::translate("fax_decoder", "<html><head/><body><p>Normal or inverse (i.e.back and white).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        colorSetter->setItemText(0, QCoreApplication::translate("fax_decoder", "BW", nullptr));
        colorSetter->setItemText(1, QCoreApplication::translate("fax_decoder", "GRAY", nullptr));
        colorSetter->setItemText(2, QCoreApplication::translate("fax_decoder", "COLOR", nullptr));

#if QT_CONFIG(tooltip)
        colorSetter->setToolTip(QCoreApplication::translate("fax_decoder", "<html><head/><body><p>Black and white or color.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        correctButton->setText(QCoreApplication::translate("fax_decoder", "correct", nullptr));
        deviationSetter->setItemText(0, QCoreApplication::translate("fax_decoder", "1900-400", nullptr));
        deviationSetter->setItemText(1, QCoreApplication::translate("fax_decoder", "1950-450", nullptr));

        label->setText(QCoreApplication::translate("fax_decoder", "fax decoder", nullptr));
#if QT_CONFIG(tooltip)
        showState->setToolTip(QCoreApplication::translate("fax_decoder", "<html><head/><body><p>Current state of operation.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        showState->setText(QString());
#if QT_CONFIG(tooltip)
        saveContinuousButton->setToolTip(QCoreApplication::translate("fax_decoder", "<html><head/><body><p>Save the picture when the end is reached. A menu will apear at the end with which a file(name) can be selected.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        saveContinuousButton->setText(QCoreApplication::translate("fax_decoder", "save Cont", nullptr));
        saveSingleButton->setText(QCoreApplication::translate("fax_decoder", "saveSingle", nullptr));
        resetButton->setText(QCoreApplication::translate("fax_decoder", "reset", nullptr));
        cheatButton->setText(QCoreApplication::translate("fax_decoder", "cheat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fax_decoder: public Ui_fax_decoder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAX_2D_DECODER_H
