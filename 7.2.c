//15
#include <stdio.h>

int main(void) {
    int ch;
    int predch = -1;
    int len = 0;
    int seriescount = 0;
    int allch = 0;
    while ((ch = getchar()) != EOF) {
        allch++;
        if (ch == predch) {
            len++;
        } else {
            len = 1;
        }
        if (len == 3) {
            seriescount++;
        }
        predch = ch;
    }
    printf("%d", seq);
    printf("%d", allch);

    return 0;
}
