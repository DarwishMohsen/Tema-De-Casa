#ifndef EDIT_DISTANCE_H
#define EDIT_DISTANCE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int a, int b, int c);


int edit_distance(char* code_fragment, char* syntax_rule);

#endif
