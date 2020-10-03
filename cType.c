#include <stdio.h>
#include <stdlib.h>

#include "cType.h"

//TODO: Create Macros for quick access writing

Exp* createExp(int s) {
   Exp* e = (Exp*) malloc(sizeof(Exp));
   e->unsign = s;
   e->base.i = 0;
   e->exp = 0;
}

Exp* createExpArr(int size, int s) {

   Exp* e = (Exp*) malloc(sizeof(Exp));
   e->unsign = s;
   e->base.i = 0;
   e->exp = 0;
}

Exp* setValue(Exp* exp, dat b, int e) {
    
    while (b.i % 10 == 0 && b.i != 0) {
        e++;
        b.i = b.i / 10;   
    }
        
    exp->base.i = b.i;
    exp->exp = e;

    return exp;
}

char* printExp(Exp* e) {
    char s[BASE_SIZE + EXP_SIZE + 3];    

    return NULL;
}

