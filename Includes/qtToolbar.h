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
QAction * construct_toolbar(QToolbar * i_eToolbar, int _x, int _y, bool i_eLoadButtons);
void iToolbar(QToolbar * i_eToolbar);

i_eToolbar * Alloc_ieToolbar(){
   i_eToolbar * toolbar = (i_eToolbar*)malloc(sizeof(i_eToolbar));
};


};
#endif
