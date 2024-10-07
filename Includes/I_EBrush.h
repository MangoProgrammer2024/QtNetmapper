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

const i_ePreference * i_eBrushName;

public:

static int i_eBrushNumberId = 0;
iEBoolean i_eBrushCreated();

virtual void Create_Brush(i_eBrush& iebrush, iEBoolean i_eBrushCreatedTrue, static char * i_eSpawn, static int i_eBrushSpawnflags);

 class i_ebrushtable{
  public:

 };


};
