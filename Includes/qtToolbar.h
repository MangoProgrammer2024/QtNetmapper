/*
        *QTTOOLBAR*
*/
#pragma once 

#ifndef QT_TOOLBAR_H
#define QT_TOOLBAR_H

#include <QWidget>
#include <QToolbar>
#include <QAction>

class i_eToolbar{
public:

const char * i_eToolbarName;
QWidget * i_eQWindowToolbarFrame;//holder frame for toolbar
QAction * construct_toolbar(QToolbar * i_eToolbar, int x, int y, bool i_eLoadButtons);


};
#endif
