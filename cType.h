#ifndef BASE_SIZE
#define BASE_SIZE 48
#endif

#ifndef EXP_SIZE
#define EXP_SIZE 15
#endif

#ifndef C_TYPE
#define C_TYPE

typedef union data {
    long long int i : BASE_SIZE;
    unsigned int u;
} dat;

typedef struct exp Exp;
/*  number represented in base 10 as: base x 10^exp
 *  Made to reduce floating point / double errors
 *  and to be more precise.
 *
 *  Default bit width of 64
 */

struct exp {
    dat base;
    // 2^BASE_SIZE values either signed or unsigned
    long int exp : EXP_SIZE;
    // 2^EXP_SIZE values => exp of 10
    int unsign : 1;
    // Tells if base unsigned
};

Exp* createExp(int s);
Exp* createExpArr(int size, int s);
Exp* setValue(Exp* exp, dat b, int e);
char* printExp(Exp* e);

#endif
