//1
#include <stdio.h>

unsigned long fact(unsigned long n);
unsigned long rfact(unsigned long n);

int main(void) {
    int n;

    printf("Enter n (0..20): ");
    if (scanf("%d", &n) == 1 && n >= 0 && n <= 20) {
        printf("Iterative: %lu\n", fact(n));
        printf("Recursive: %lu\n", rfact(n));
    } else {
        printf("Error: enter an integer from 0 to 20\n");
    }

    return 0;
}

unsigned long fact(unsigned long n) {
    unsigned long ans;
    for (ans = 1; n > 1; n--) {
        ans *= n;
    }
    return ans;
}

unsigned long rfact(unsigned long n) {
    if (n > 0) {
        return n * rfact(n - 1);
    } else {
        return 1;
    }
}
