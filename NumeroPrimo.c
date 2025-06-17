#include <stdio.h>

int eh_primo(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N, X;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &X);
        if (eh_primo(X))
            printf("%d eh primo\n", X);
        else
            printf("%d nao eh primo\n", X);
    }
    return 0;
}
