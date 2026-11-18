//27
#include <stdio.h>

void roundvar(double *pa, double *pb, double *pc) {
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

int main(void) {
    double a = 2.5;
    double b = -3.5;
    double c = 7.4;
    printf("Без округления: %.2f %.2f %.2f\n", a, b, c);
    roundvar(&a, &b, &c);
    printf("С округлением: %.2f %.2f %.2f\n", a, b, c);

    return 0;
}
