######################################################################
# Automatically generated by qmake (2.01a) Wed Jun 19 18:47:11 2013
######################################################################
TEMPLATE = app
QT	+= widgets
CONFIG	+= console
TARGET	= swradio-8.0
QMAKE_CFLAGS	+= -ffast-math -g
QMAKE_CXXFLAGS	+= -ffast-math -g
QMAKE_LFLAGS	+= -g
RC_ICONS        =  swradio.ico
RESOURCES       += resources.qrc

DEPENDPATH += .  \
	      decimators \
	      filters \
	      various \
	      output \
	      scopes-qwt6 \
	      devices \
	      devices/filereader \
	      decoders 
INCLUDEPATH += .  \
	      decimators \
	      filters \
	      various \
	      output \
	      scopes-qwt6 \
	      devices \
	      devices/filereader \
	      decoders

#CONFIG += static

# Input
HEADERS += ./radio-constants.h \
	   ./radio.h \
           ./output/upconverter.h \
	   ./output/audiosink.h \
           ./various/agchandler.h \
           ./various/ringbuffer.h \
           ./various/fft.h \
	   ./various/shifter.h \
	   ./various/utilities.h \
	   ./various/program-list.h \
	   ./various/popup-keypad.h \
	   ./various/s-meter.h \
	   ./various/downconverter.h \
	   ./decimators/newconverter.h \
	   ./decimators/decimator.h \
           ./filters/fft-filters.h \
           ./filters/fir-filters.h \
           ./filters/iir-filters.h \
	   ./scopes-qwt6/virtual-scope.h \
	   ./scopes-qwt6/spectrogramdata.h \
	   ./scopes-qwt6/waterfall-scope.h \
	   ./scopes-qwt6/spectrum-scope.h \
           ./scopes-qwt6/fft-scope.h \
	   ./decimators/decimator.h \
	   ./devices/virtual-input.h \
           ./devices/filereader/filereader.h \
           ./devices/filereader/filehulp.h \
           ./decoders/virtual-decoder.h 

	   
FORMS	+= ./newradio.ui \
	   ./devices/filereader/filereader-widget.ui

SOURCES += ./main.cpp \
	   ./radio.cpp \
	   ./output/upconverter.cpp \
           ./output/audiosink.cpp \
           ./various/agchandler.cpp \
           ./various/fft.cpp \
	   ./various/popup-keypad.cpp \
	   ./various/s-meter.cpp \
           ./various/shifter.cpp \
	   ./various/utilities.cpp \
	   ./various/program-list.cpp \
	   ./various/downconverter.cpp \
           ./filters/fft-filters.cpp \
           ./filters/fir-filters.cpp \
           ./filters/iir-filters.cpp \
	   ./scopes-qwt6/virtual-scope.cpp \
	   ./scopes-qwt6/waterfall-scope.cpp \
	   ./scopes-qwt6/spectrum-scope.cpp \
           ./scopes-qwt6/fft-scope.cpp \
	   ./decimators/decimator.cpp \
	   ./devices/virtual-input.cpp \
           ./devices/filereader/filereader.cpp \
           ./devices/filereader/filehulp.cpp \
           ./decoders/virtual-decoder.cpp 

unix {
DESTDIR		= ./linux-bin
CONFIG		+= sdrplay
CONFIG		+= am-decoder
CONFIG		+= ssb-decoder
CONFIG		+= cw-decoder
CONFIG		+= amtor-decoder
CONFIG		+= psk-decoder
CONFIG		+= rtty-decoder
CONFIG		+= fax-decoder
CONFIG		+= drm-decoder
LIBS		+= -L/usr/lib64
LIBS		+= -L/lib64
INCLUDEPATH	+= /usr/include/qt5/qwt
LIBS		+= -lqwt-qt5 -lrt -lsndfile -lsamplerate -lportaudio -lusb-1.0 -lfftw3f -ldl
}

win32 {
DESTDIR		= ../../../windows-bin
CONFIG		+= sdrplay
CONFIG		+= am-decoder
CONFIG		+= ssb-decoder
CONFIG		+= cw-decoder
CONFIG		+= amtor-decoder
CONFIG		+= psk-decoder
CONFIG		+= rtty-decoder
CONFIG		+= fax-decoder
CONFIG		+= drm-decoder
# includes in mingw differ from the includes in fedora linux
INCLUDEPATH += /usr/i686-w64-mingw32/sys-root/mingw/include
INCLUDEPATH += /usr/i686-w64-mingw32/sys-root/mingw/include/qt5/qwt
INCLUDEPATH += C:\msys32\mingw32\include\qwt
LIBS    += -L/usr/i686-w64-mingw32/sys-root/mingw/lib
LIBS    += -lfftw3f
LIBS    += -lportaudio
LIBS    += -lqwt-qt5
#LIBS    += -lqwt
LIBS    += -lusb-1.0
LIBS    += -lsndfile
LIBS    += -lsamplerate
LIBS    += -lole32
#LIBS	+= -lfaad
LIBS    += -lwinmm
}


#       the SDRplay
#
sdrplay {
        DEFINES         += HAVE_SDRPLAY
        FORMS           += ./devices/sdrplay-handler/sdrplay-widget.ui
        INCLUDEPATH     += ./devices/sdrplay-handler
        HEADERS         += ./devices/sdrplay-handler/sdrplay-handler.h \
                           ./devices/sdrplay-handler/sdrplayselect.h
        SOURCES         += ./devices/sdrplay-handler/sdrplay-handler.cpp \
                           ./devices/sdrplay-handler/sdrplayselect.cpp
}

am-decoder {
        DEFINES         += HAVE_AM_DECODER
        INCLUDEPATH     += ./decoders/am-decoder
        DEPENDPATH      += ./decoders/am-decoder
        FORMS           += ./decoders/am-decoder/am-decoder.ui
        HEADERS         += ./decoders/am-decoder/am-decoder.h
        SOURCES         += ./decoders/am-decoder/am-decoder.cpp
}

ssb-decoder {
        DEFINES         += HAVE_SSB_DECODER
        INCLUDEPATH     += ./decoders/ssb-decoder
        DEPENDPATH      += ./decoders/ssb-decoder
        FORMS           += ./decoders/ssb-decoder/ssb-decoder.ui
        HEADERS         += ./decoders/ssb-decoder/ssb-decoder.h
        SOURCES         += ./decoders/ssb-decoder/ssb-decoder.cpp
}

cw-decoder {
        DEFINES         += HAVE_CW_DECODER
        INCLUDEPATH     += ./decoders/cw-decoder
        DEPENDPATH      += ./decoders/cw-decoder
        FORMS           += ./decoders/cw-decoder/cw-decoder.ui
        HEADERS         += ./decoders/cw-decoder/cw-decoder.h
        SOURCES         += ./decoders/cw-decoder/cw-decoder.cpp
}

amtor-decoder {
        DEFINES         += HAVE_AMTOR_DECODER
        INCLUDEPATH     += ./decoders/amtor-decoder
        DEPENDPATH      += ./decoders/amtor-decoder
        FORMS           += ./decoders/amtor-decoder/amtor-widget.ui
        HEADERS         += ./decoders/amtor-decoder/amtor-decoder.h
        SOURCES         += ./decoders/amtor-decoder/amtor-decoder.cpp
}

psk-decoder {
        DEFINES         += HAVE_PSK_DECODER
        INCLUDEPATH     += ./decoders/psk-decoder
        DEPENDPATH      += ./decoders/psk-decoder
        FORMS           += ./decoders/psk-decoder/psk-decoder.ui
        HEADERS         += ./decoders/psk-decoder/psk-decoder.h \
                           ./decoders/psk-decoder/viterbi.h
        SOURCES         += ./decoders/psk-decoder/psk-decoder.cpp \
                           ./decoders/psk-decoder/viterbi.cpp
}

rtty-decoder {
        DEFINES         += HAVE_RTTY_DECODER
        INCLUDEPATH     += ./decoders/rtty-decoder
        DEPENDPATH      += ./decoders/rtty-decoder
        FORMS           += ./decoders/rtty-decoder/rtty-decoder.ui
        HEADERS         += ./decoders/rtty-decoder/rtty-decoder.h 
        SOURCES         += ./decoders/rtty-decoder/rtty-decoder.cpp 
}

fax-decoder {
        DEFINES         += HAVE_FAX_DECODER
        INCLUDEPATH     += ./decoders/fax-decoder
        DEPENDPATH      += ./decoders/fax-decoder
        FORMS           += ./decoders/fax-decoder/fax-decoder.ui
        HEADERS         += ./decoders/fax-decoder/fax-decoder.h \
                           ./decoders/fax-decoder/fax-demodulator.h \
                           ./decoders/fax-decoder/fax-image.h \
                           ./decoders/fax-decoder/fax-scroller.h \
                           ./decoders/fax-decoder/fax-filenames.h 
        SOURCES         += ./decoders/fax-decoder/fax-decoder.cpp \
                           ./decoders/fax-decoder/fax-demodulator.cpp \
                           ./decoders/fax-decoder/fax-image.cpp \
                           ./decoders/fax-decoder/fax-scroller.cpp \
                           ./decoders/fax-decoder/fax-filenames.cpp 
}

drm-decoder {
	DEFINES		+= HAVE_DRM_DECODER
	DEFINES		+= ESTIMATOR_1
	LIBS		+= -lfaad
#	LIBS		+= -lfaad -larmadillo
	DEPENDPATH	+= ./decoders/drm-decoder/ \
	                   ./decoders/drm-decoder/signal-handling \
                           ./decoders/drm-decoder/signal-handling/eq-1 \
                           ./decoders/drm-decoder/utilities \
                           ./decoders/drm-decoder/parameters \
                           ./decoders/drm-decoder/msc \
	                   ./decoders/drm-decoder/sdc \
	                   ./decoders/drm-decoder/fac \
	                   ./decoders/drm-decoder/data
	                   ./decoders/drm-decoder/input
	INCLUDEPATH	+= ./decoders/drm-decoder/ \
	                   ./decoders/drm-decoder/signal-handling \
                           ./decoders/drm-decoder/signal-handling/eq-1 \
                           ./decoders/drm-decoder/utilities \
                           ./decoders/drm-decoder/parameters \
                           ./decoders/drm-decoder/msc \
	                   ./decoders/drm-decoder/sdc \
	                   ./decoders/drm-decoder/fac \
	                   ./decoders/drm-decoder/data \
	                   ./decoders/drm-decoder/input
	FORMS		+= ./decoders/drm-decoder/drmdecoder.ui
	HEADERS		+= ./decoders/drm-decoder/drm-decoder.h  \
	                   ./decoders/drm-decoder/basics.h \
	                   ./decoders/drm-decoder/input/reader.h \
	                   ./decoders/drm-decoder/timesync.h \
	                   ./decoders/drm-decoder/freqsyncer.h \
	                   ./decoders/drm-decoder/word-collector.h \
	                   ./decoders/drm-decoder/frame-processor.h \
	                   ./decoders/drm-decoder/signal-handling/referenceframe.h \
	                   ./decoders/drm-decoder/signal-handling/equalizer-base.h \
	                   ./decoders/drm-decoder/signal-handling/matrix2.h \
	                   ./decoders/drm-decoder/signal-handling/eq-1/equalizer-1.h \
	                   ./decoders/drm-decoder/signal-handling/eq-1/estimator-base.h \
	                   ./decoders/drm-decoder/signal-handling/eq-1/estimator-1.h \
	                   ./decoders/drm-decoder/utilities/viterbi-drm.h \
	                   ./decoders/drm-decoder/utilities/mapper.h \
	                   ./decoders/drm-decoder/utilities/prbs.h \
	                   ./decoders/drm-decoder/utilities/checkcrc.h \
	                   ./decoders/drm-decoder/utilities/qam64-metrics.h \
	                   ./decoders/drm-decoder/utilities/qam16-metrics.h \
	                   ./decoders/drm-decoder/utilities/qam4-metrics.h \
	                   ./decoders/drm-decoder/utilities/deinterleaver.h \
	                   ./decoders/drm-decoder/parameters/msc-config.h \
	                   ./decoders/drm-decoder/parameters/fac-data.h \
	                   ./decoders/drm-decoder/parameters/channelparameters.h \
	                   ./decoders/drm-decoder/parameters/serviceparameters.h \
	                   ./decoders/drm-decoder/parameters/puncture-tables.h \
	                   ./decoders/drm-decoder/fac/fac-processor.h \
	                   ./decoders/drm-decoder/sdc/sdc-streamer.h \
	                   ./decoders/drm-decoder/sdc/sdc-processor.h \
	                   ./decoders/drm-decoder/msc/msc-processor.h \
	                   ./decoders/drm-decoder/msc/msc-handler-qam16.h \
	                   ./decoders/drm-decoder/msc/msc-handler-qam64.h \
	                   ./decoders/drm-decoder/msc/msc-streamer.h \
	                   ./decoders/drm-decoder/msc/msc-handler.h \
	                   ./decoders/drm-decoder/data/data-processor.h \
	                   ./decoders/drm-decoder/data/fec-handler.h \
	                   ./decoders/drm-decoder/data/galois.h \
	                   ./decoders/drm-decoder/data/reed-solomon.h \
	                   ./decoders/drm-decoder/data/message-processor.h \
	                   ./decoders/drm-decoder/data/packet-assembler.h \
	                   ./decoders/drm-decoder/data/virtual-datahandler.h \
	                   ./decoders/drm-decoder/data/mot-data.h \
	                   ./decoders/drm-decoder/data/drm-aacdecoder.h \
	                   ./decoders/drm-decoder/data/neaacdec_dll.h 

	SOURCES		+= ./decoders/drm-decoder/drm-decoder.cpp  \
	                   ./decoders/drm-decoder/basics.cpp \
	                   ./decoders/drm-decoder/input/reader.cpp \
	                   ./decoders/drm-decoder/timesync.cpp \
	                   ./decoders/drm-decoder/word-collector.cpp \
	                   ./decoders/drm-decoder/freqsyncer.cpp \
	                   ./decoders/drm-decoder/frame-processor.cpp \
	                   ./decoders/drm-decoder/signal-handling/referenceframe.cpp \
	                   ./decoders/drm-decoder/signal-handling/equalizer-base.cpp \
	                   ./decoders/drm-decoder/signal-handling/matrix2.cpp \
	                   ./decoders/drm-decoder/signal-handling/eq-1/equalizer-1.cpp \
	                   ./decoders/drm-decoder/signal-handling/eq-1/estimator-base.cpp \
	                   ./decoders/drm-decoder/signal-handling/eq-1/estimator-1.cpp \
	                   ./decoders/drm-decoder/utilities/viterbi-drm.cpp \
	                   ./decoders/drm-decoder/utilities/mapper.cpp \
	                   ./decoders/drm-decoder/utilities/prbs.cpp \
	                   ./decoders/drm-decoder/utilities/checkcrc.cpp \
	                   ./decoders/drm-decoder/utilities/qam64-metrics.cpp \
	                   ./decoders/drm-decoder/utilities/qam16-metrics.cpp \
	                   ./decoders/drm-decoder/utilities/qam4-metrics.cpp \
 	                   ./decoders/drm-decoder/utilities/deinterleaver.cpp \
	                   ./decoders/drm-decoder/parameters/msc-config.cpp \
	                   ./decoders/drm-decoder/parameters/fac-data.cpp \
	                   ./decoders/drm-decoder/parameters/channelparameters.cpp \
	                   ./decoders/drm-decoder/parameters/serviceparameters.cpp \
	                   ./decoders/drm-decoder/parameters/puncture-tables.cpp \
	                   ./decoders/drm-decoder/fac/fac-processor.cpp \
	                   ./decoders/drm-decoder/sdc/sdc-streamer.cpp \
	                   ./decoders/drm-decoder/sdc/sdc-processor.cpp \
	                   ./decoders/drm-decoder/msc/msc-processor.cpp \
	                   ./decoders/drm-decoder/msc/msc-handler-qam16.cpp \
	                   ./decoders/drm-decoder/msc/msc-handler-qam64.cpp \
	                   ./decoders/drm-decoder/msc/msc-streamer.cpp \
	                   ./decoders/drm-decoder/msc/msc-handler.cpp \
	                   ./decoders/drm-decoder/data/data-processor.cpp \
	                   ./decoders/drm-decoder/data/fec-handler.cpp \
	                   ./decoders/drm-decoder/data/galois.cpp \
	                   ./decoders/drm-decoder/data/reed-solomon.cpp \
	                   ./decoders/drm-decoder/data/message-processor.cpp \
	                   ./decoders/drm-decoder/data/packet-assembler.cpp \
	                   ./decoders/drm-decoder/data/virtual-datahandler.cpp \
	                   ./decoders/drm-decoder/data/mot-data.cpp \
	                   ./decoders/drm-decoder/data/drm-aacdecoder.cpp 
}
