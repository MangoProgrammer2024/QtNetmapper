/*
     *This file is part QtNetmapper.h*
     *File: Static Brush Information*
*/
#pragma once

#ifndef I_EBRUSH_H
#define I_EBRUSH_H

#endif

#include "IPreferences.h"
#include "Vectorlib.hpp"

typedef class i_eBrush{
protected:

const i_ePreference * i_eBrushName(i_eBrush*)const;

public:

static int i_eBrushNumberId = 0;
iEBoolean i_eBrushCreated();

enum i_eBrushMode{
    i_eFreeMode = 0,
    i_eLockMode = 1,
    i_eEpairMode = 2
};

iEBoolean BrushDeleted(i_eBrush);

i_eBrush * qt_ieBrushOwner, * qt_ieBrushPrevious, * qt_ieBrushNext;

virtual void Create_Brush(i_eBrush& iebrush, iEBoolean i_eBrushCreatedTrue, static char * i_eSpawn, static int i_eBrushSpawnflags);
virtual void BrushEpair(i_eBrush * ieglobal, const char * brushname, const i_ePreference * i_eKey, const i_ePreference * i_eValue);
void Delete_Brush(i_eBrush * brushCurrent, unsigned int brushFaces);

 class i_ebrushtable{
  public:
    i_eBrush::i_ebrushtable(i_eBrush&);
 };


};
