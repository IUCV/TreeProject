/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x08,
      57,   11,   11,   11, 0x08,
      90,   11,   11,   11, 0x08,
     118,   11,   11,   11, 0x08,
     149,   11,   11,   11, 0x08,
     178,   11,   11,   11, 0x08,
     204,   11,   11,   11, 0x08,
     242,   11,   11,   11, 0x08,
     278,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0value\0"
    "on_learningRateSlider_sliderMoved(int)\0"
    "on_lastSelectionButton_clicked()\0"
    "on_settingsButton_clicked()\0"
    "on_loadDatasetButton_clicked()\0"
    "on_loadImageButton_clicked()\0"
    "on_selectButton_clicked()\0"
    "on_generateCandidatesButton_clicked()\0"
    "on_updateCandidatesButton_clicked()\0"
    "on_finishButton_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_learningRateSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_lastSelectionButton_clicked(); break;
        case 2: _t->on_settingsButton_clicked(); break;
        case 3: _t->on_loadDatasetButton_clicked(); break;
        case 4: _t->on_loadImageButton_clicked(); break;
        case 5: _t->on_selectButton_clicked(); break;
        case 6: _t->on_generateCandidatesButton_clicked(); break;
        case 7: _t->on_updateCandidatesButton_clicked(); break;
        case 8: _t->on_finishButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
