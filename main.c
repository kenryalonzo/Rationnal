#include <stdio.h>
#include <stdlib.h>
#include "rationnal.h"

int main(int argc, char* argv[]) {

    rationnal r1, r2;
    
    r1 = read();
    r2 = read();
    print(r1);
    print(r2);
    
    printf("After normalisation, this is the new value of r1 and r2\n");
    normaliser(r1);
    normaliser(r2);
    print(r1);
    print(r2);

    return 0;
}