#pragma once

#include <stdio.h>
#include <stdlib.h>
typedef int datetype;


typedef struct list
{
	datetype date;
	struct list* next;
}list;

void PrintList(list* p);


void PushBackList(list** p, datetype x);
void PushFrontList(list** p, datetype x);
void PushList(list** p, datetype x, int y);
void PushReList(list** p, datetype x, datetype y);