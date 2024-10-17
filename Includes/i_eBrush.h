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

 class i_eBrush{
protected:

const char * i_eBrushName(const i_eBrush* brush)const;

public:

int brush_points[8][4];

static int i_eBrushNumberId;
iEBoolean i_eBrushCreated();

enum i_eBrushMode{
    i_eFreeMode = 0,
    i_eLockMode = 1,
    i_eEpairMode = 2
};

iEBoolean BrushDeleted(i_eBrush& brush);

i_eBrush * qt_ieBrushOwner, * qt_ieBrushPrevious, * qt_ieBrushNext;

virtual void Create_Brush(i_eBrush& iebrush, iEBoolean i_eBrushCreatedTrue, static char * i_eSpawn, static int i_eBrushSpawnflags);
virtual void BrushEpair(i_eBrush * ieglobal, const char * brushname, const i_ePreference * i_eKey, const i_ePreference * i_eValue);
void Delete_Brush(i_eBrush * brushCurrent, unsigned int brushFaces);

 class i_ebrushtable{
  public:
    i_ebrushtable(i_eBrush& brush);
 };


};
