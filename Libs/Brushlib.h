/*
*   *this file belongs to QtNetmapper*
*        *File: Brushlib.h*
*/
#pragma once 

#ifndef BRUSHLIB_H
#define BRUSHLIB_H

#endif

typedef class brush_t{
public:
const char * brush_name(const brush_t * b)const;

brush_t * brushnode;

static int bNumberid;

enum brushtype{
 TBspBrush = 0,
 TCsgBrush = 1,
 THollowBrush = 2
};

};
