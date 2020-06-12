QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    adminadddriver.cpp \
    adminchangesdialog.cpp \
    admindialog.cpp \
    adminremovedriver.cpp \
    adminsearchdriver.cpp \
    adminsearchuser.cpp \
    adminsetcharges.cpp \
    driver2.cpp \
    driverbill.cpp \
    driverchangedetails.cpp \
    driverchangenumber.cpp \
    driverchangepassword.cpp \
    driverendride.cpp \
    driverlogsign.cpp \
    driverpickupstop.cpp \
    driverreceiveamount.cpp \
    driverrideaccept.cpp \
    driverridedialog.cpp \
    driversignup.cpp \
    driverstartride.cpp \
    locations.cpp \
    logsignform.cpp \
    main.cpp \
    mainwindow.cpp \
    promocode.cpp \
    promocodeyes.cpp \
    ridedialog.cpp \
    scheduletimeslots.cpp \
    scheduletransport.cpp \
    user2.cpp \
    useraccesswallet.cpp \
    useraddbalance.cpp \
    userbill.cpp \
    usercheckbalance.cpp \
    userchecknotifications.cpp \
    userdisplaydetails.cpp \
    usereditaccountdetails.cpp \
    usereditemail.cpp \
    usereditpassword.cpp \
    usereditphone.cpp \
    usergarischedule.cpp \
    userpaymentoption.cpp

HEADERS += \
    admin.h \
    adminadddriver.h \
    adminchangesdialog.h \
    admindialog.h \
    adminremovedriver.h \
    adminsearchdriver.h \
    adminsearchuser.h \
    adminsetcharges.h \
    driver2.h \
    driverbill.h \
    driverchangedetails.h \
    driverchangenumber.h \
    driverchangepassword.h \
    driverendride.h \
    driverlogsign.h \
    driverpickupstop.h \
    driverreceiveamount.h \
    driverrideaccept.h \
    driverridedialog.h \
    driversignup.h \
    driverstartride.h \
    locations.h \
    logsignform.h \
    mainwindow.h \
    promocode.h \
    promocodeyes.h \
    ridedialog.h \
    scheduletimeslots.h \
    scheduletransport.h \
    user2.h \
    useraccesswallet.h \
    useraddbalance.h \
    userbill.h \
    usercheckbalance.h \
    userchecknotifications.h \
    userdisplaydetails.h \
    usereditaccountdetails.h \
    usereditemail.h \
    usereditpassword.h \
    usereditphone.h \
    usergarischedule.h \
    userpaymentoption.h

FORMS += \
    admin.ui \
    adminadddriver.ui \
    adminchangesdialog.ui \
    admindialog.ui \
    adminremovedriver.ui \
    adminsearchdriver.ui \
    adminsearchuser.ui \
    adminsetcharges.ui \
    driver2.ui \
    driverbill.ui \
    driverchangedetails.ui \
    driverchangenumber.ui \
    driverchangepassword.ui \
    driverendride.ui \
    driverlogsign.ui \
    driverpickupstop.ui \
    driverreceiveamount.ui \
    driverrideaccept.ui \
    driverridedialog.ui \
    driversignup.ui \
    driverstartride.ui \
    locations.ui \
    logsignform.ui \
    mainwindow.ui \
    promocode.ui \
    promocodeyes.ui \
    ridedialog.ui \
    scheduletimeslots.ui \
    scheduletransport.ui \
    user2.ui \
    useraccesswallet.ui \
    useraddbalance.ui \
    userbill.ui \
    usercheckbalance.ui \
    userchecknotifications.ui \
    userdisplaydetails.ui \
    usereditaccountdetails.ui \
    usereditemail.ui \
    usereditpassword.ui \
    usereditphone.ui \
    usergarischedule.ui \
    userpaymentoption.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
