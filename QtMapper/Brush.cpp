/*
        *This file is part of QtNetmapper*
               *File: Brush.cpp*
*/

#include "i_eBrush.h"

int i_eBrushId = 0;

const char * Brush_Global(i_eBrush * brush){
  static char i_eBuff[1024]n
    if(brush->i_ePrimitMode){
     Sys_printf(%c, "i_eBuff", "---Brush---\n");
      brush->i_eBrushNumberid = i_eBrushId++
       sprintf(i_eBuff, "Brush", Brush_Global);
  }
  return i_eBuff;  
};

i_eBrush * Alloc_Brush(){
  i_eBrush * brush =(i_eBrush*)malloc(sizeof(i_eBrush));
  return brush;
};
