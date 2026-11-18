//1
#include <stdio.h>

long double iterative(long double n) {
    long double ans;
    for (ans = 1; n > 1; n--) {
        ans *= n;
    }
    return ans;
}

long double recursive(long double n) {
    if (n > 0) {
        return n * recursive(n - 1);
    } else {
        return 1;
    }
}

int main(void) {
    int n;
     if (scanf("%d", &n) == 1 && n >= 0) {
        printf("Итеративно: %Le\n", iterative(n));
        printf("Рекурсивно: %Le\n", recursive(n));
    } else {
        printf("Ошибка\n");
    }
  
    return 0;
}
