/*
         *This file is part of QtNetmapper*
                *File: i_eSystem.h*
*/
#pragma once

#ifndef I_ESYSTEM_H
#define I_ESYSTEM_H

typedef char Sys_charf;

const Sys_charf * charprintf(*)const;

typedef class Sys_callf{
public:

 Sys_callf();
 virtual ~Sys_callf();

 virtual void Sys_printf(const Sys_charf * text, ...);//acts as a printf function
 void Sys_printi(const int * i, ...);//prints an integer
 void Sys_printc(const char * c, ...);//prints an character

};

#endif
