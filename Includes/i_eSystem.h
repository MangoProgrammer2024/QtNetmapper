/*
         *This file is part of QtNetmapper*
                *File: i_eSystem.h*
*/
#pragma once

#ifndef I_ESYSTEM_H
#define I_ESYSTEM_H

#endif

typedef char Sys_charf;

const Sys_charf * charprintf(Sys_charf*)const;

typedef class Sys_callf{
public:

 Sys_callf();
 virtual ~Sys_callf();

extern virtual void Sys_printf(const Sys_charf * text, ...);//acts as a printf function

};
