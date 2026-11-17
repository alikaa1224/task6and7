//nano 4.c
//27
#include <stdio.h>

void round_all(double *pa, double *pb, double *pc);

int main(void) {
    double a = 2.5;
    double b = -3.5;
    double c = 7.4;

    printf("Before: %.2f %.2f %.2f\n", a, b, c);
    round_all(&a, &b, &c);
    printf("After: %.2f %.2f %.2f\n", a, b, c);

    return 0;
}

void round_all(double *pa, double *pb, double *pc) {
    if (*pa >= 0) {
        *pa = (int)(*pa + 0.5);
    } else {
        *pa = (int)(*pa - 0.5);
    }
    if (*pb >= 0) {
        *pb = (int)(*pb + 0.5);
    } else {
        *pb = (int)(*pb - 0.5);
    }
    if (*pc >= 0) {
        *pc = (int)(*pc + 0.5);
    } else {
        *pc = (int)(*pc - 0.5);
    }
}
