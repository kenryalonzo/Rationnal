#include <stdio.h>
#include <stdlib.h>
#include "rationnal.h"

int abs(int x) {

    if (x > 0)
        return x;
    return abs(x) > 0;
    
}

int pgcd(int a, int b) {

    if (a == 0) 
        return b;
    else if (b == 0)
        return a;
    else
        return pgcd(a-b, b);
    
}

rationnal read() {

    rationnal r;
    printf("Please can you enter the value of the numerator : \n");
    scanf("%d", &r.num);
    printf("Please can you enter the value of the denominator : \n");
    scanf("%d", &r.denom);
    return r;
}

void print(rationnal rat) {
    
    printf("Your rationnal is %d/%d\n\n", rat.num, rat.denom);
}

rationnal normaliser(rationnal r) {

    int norme = pgcd(abs(r.num), abs(r.denom));

    r.num /= norme;
    r.denom /= norme;

    return r;
}

rationnal add(rationnal rt1, rationnal rt2) {

    rationnal rt;

    if (rt1.denom == rt2.denom) {
        rt.num = rt1.num + rt2.num;
        rt.denom = rt1.denom;
    }
    else
        rt.num = ((rt1.num * rt2.denom) + (rt2.num * rt1.denom)) / (rt1.denom * rt2.denom);   

    return rt; 
}

rationnal sub(rationnal rt1, rationnal rt2) {

    rationnal rt;

    if (rt1.denom == rt2.denom) {
        rt.num = rt1.num - rt2.num;
        rt.denom = rt1.denom;
    }
    else
        rt.num = ((rt1.num * rt2.denom) - (rt2.num * rt1.denom)) / (rt1.denom * rt2.denom);   

    return rt;    
}

rationnal mult(rationnal rt1, rationnal rt2) {

    rationnal rt;

    rt.num = rt1.num * rt2.num;
    rt.denom = rt1.denom * rt2.denom;

    return rt;
}

rationnal divis(rationnal rt1, rationnal rt2) {

    rationnal rt;

    rt.num = rt1.num * rt2.denom;
    rt.denom = rt1.denom * rt2.num;

    return rt;
}

// une fontion qui pemet de lire une collection de rationnel

void readT(Trationnal t, int n) {

    for (int i = 0; i < n; i++) {
        t[i] = read();
    }
    
}

float convert(rationnal r) {
    return (float)r.num/r.denom;
}

// une fontion qui renvoie le plus grand rationnel de la collection

// rationnal maxT(Trationnal t, int n) {

//     int max = 0;
//     for (int i = 1; i < n; i++) {
        
//         if (convert(t[i] > t[max]))
//             max = i;
//     }

//     return t[max];
    
// }