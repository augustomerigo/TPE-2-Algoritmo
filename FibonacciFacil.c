#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a = 0, b = 1, c, i;
    if (N == 0) {
        printf("0\n");
    } else if (N == 1) {
        printf("1\n");
    } else {
        printf("0 1");
        for (i = 2; i < N; i++) {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
        printf("\n");
    }
}