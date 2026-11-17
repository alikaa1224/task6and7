#include <stdio.h>

int main(void) {
    int ch;
    int prev = -1;
    int run = 0;
    int seq = 0;
    int total = 0;

    while ((ch = getchar()) != EOF) {
        total++;
        if (ch == prev) {
            run++;
        } else {
            run = 1;
        }
        if (run == 3) {
            seq++;
        }
        prev = ch;
    }

    printf("%d", seq);
    printf("%d", total);

    return 0;
}
