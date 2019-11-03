#include <stdio.h>
#include <stdbool.h>

typedef unsigned int INT;

bool 
isBitSet(INT n, int bitNo){
    INT mask = 1UL << bitNo;
    return mask & n;
}

void
setBit(int *n, int bitNo){
    INT mask = 1UL << bitNo;
    *n |= mask;
}

void
clearBit(int *n, int bitNo){
    INT mask = ~(1UL << bitNo);
    *n &= mask;
}

void 
toggelBit(int *n, int bitNo){
    INT mask = (1UL << bitNo);
    *n ^= mask;
}

int
main(int argc, char** argcv){
    int n = 0;
    printf("Befor set n:%d\n", n); // prints 0
    setBit(&n,0);
    printf("After set n:%d\n", n); // prints 1

    clearBit(&n,0);
    printf("After clear n:%d\n", n); // prints 0

    toggelBit(&n, 0);
    printf("After toggle n:%d\n", n); // prints 1

    bool result = isBitSet(n, 0);
    printf("%d\n", result); // Print 1
    return 0;
}