/*
        *This file is part of QtNetmapper*
               *File: Brush.cpp*
*Brush.cpp is not for printing a 3D brush it is only for handling brush information*
*/

#include "i_eBrush.h"

int i_eBrushId = 0;

const char * Brush_Global(i_eBrush * brush){
  static char i_eBuff[1024]
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

i_eBrush * Brush_Epair(){
 i_eBrush * brush_e = (i_eBrush*)const(char * iKey, char * eValue(i_eBrush));
 return brush_e;  
};
