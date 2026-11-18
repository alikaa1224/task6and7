//21
#include <stdio.h>
#include <math.h>

double power_of(double a, double b) {
    return pow(b, a);
}
int main(void) {
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2) {
        printf("%.4f\n", power_of(a, b));
    }

    return 0;
}
