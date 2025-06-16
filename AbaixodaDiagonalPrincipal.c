#include <stdio.h>

int main() {
    char op;
    double M[12][12];
    double sum = 0.0;
    int count = 0;

    scanf(" %c", &op);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
            if (i > j) {
                sum += M[i][j];
                count++;
            }
        }
    }

    if (op == 'S') {
        printf("%.1lf\n", sum);
    } else if (op == 'M') {
        printf("%.1lf\n", sum / count);
    }

    return 0;
}