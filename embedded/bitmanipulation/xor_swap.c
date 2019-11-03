#include <stdio.h>

void
swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int
main(int argc, char** argcv){
    int a = 3, b = 10;
    printf("a=%d b=%d", a, b);
    putchar('\n');
    swap(&a, &b);
    printf("a=%d b=%d", a, b);
    return 0;
}