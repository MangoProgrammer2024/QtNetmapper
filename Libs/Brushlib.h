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

brush_t * alloc();

/*
* brush functions
*/
void brush_free(brush_t * b, bool free);
void brush_epair(brush_t * b, const char * key, const char * value);
void brush_link(brush_t * b, *owner, *child, const char * brush_name);
void brush_lock(brush_t * block, bool lock * current);
void brush_addtolist(brush_t * b, * lst);
void brush_create(brush_t * b);

brush_t *previous, *owner, *next;

enum brushmode{
 TBrushFree = 0,
 TBrushLock = 1,
 TBrushPrint = 3,
 TBrushPrimit = 4
};

};
