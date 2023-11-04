#ifndef __RATIONNAL__H__
#define __RATIONNAL__H___

typedef struct {

    int num;
    int denom;
}rationnal;

// on voudrais creer le type Trationnel permettant de stocker 10 rationnel a la fois

typedef rationnal Trationnal[10];

int abs(int x);
int pgcd(int a, int b);

rationnal read();
void print(rationnal rat);
rationnal normaliser(rationnal r);
rationnal add(rationnal rt1, rationnal rt2);
rationnal sub(rationnal rt1, rationnal rt2);
rationnal mult(rationnal rt1, rationnal rt2);
rationnal divis(rationnal rt1, rationnal rt2);
void readT(Trationnal t, int n);
rationnal maxT(Trationnal t, int n);

#endif