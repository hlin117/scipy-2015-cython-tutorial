#include "cfib.h"
#include <stdio.h>
#define NN 10000000

int v;

int main(int argc, char **argv)
{
    unsigned long i;
    /*
    for(i=0; i<NN; i++) {
        cfib(100);
    }*/
    printf("F(10) = %lu", cfib(10));
    return 0;
}
