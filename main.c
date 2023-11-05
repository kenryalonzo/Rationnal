#include <stdio.h>
#include <stdlib.h>
#include "rationnal.h"

int main(int argc, char* argv[]) {

    rationnal r, r1, r2;
    Trationnal tab_rationnal[10];
    
    r1 = read();
    r2 = read();
    print(r1);
    print(r2);
    
    printf("After normalisation, this is the new value of r1 and r2\n\n");
    r1 = normaliser(r1);
    r2 = normaliser(r2);
    print(r1);
    print(r2);

    printf("After the normalisation, we need to do additional and stock the answer in the new variable that is r \n\n");

    r = add(r1, r2);

    print(r);


    return 0;
}