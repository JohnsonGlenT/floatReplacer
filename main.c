#include <stdio.h>
#include <stdlib.h>

#include "cType.h"

int main(void) {
        
        Exp* e = createExp(1);

        printf("Exp: %d\n", sizeof(Exp));
        printf("dat: %d\n", sizeof(dat));
        printf("e: %d\n", sizeof(e));
        printf("e: %d\n", sizeof(*e));
        printf("e->dat: %d\n", BASE_SIZE);
        printf("e->exp: %d\n", EXP_SIZE);

        return 1;
}
