#include <stdio.h>
#include <math.h>

int main() {
    double N;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int qtd, i;
    int valor;

    scanf("%lf", &N);

    valor = (int)round(N * 100);

    printf("NOTAS:\n");
    for (i = 0; i < 6; i++) {
        qtd = valor / (notas[i] * 100);
        printf("%d nota(s) de R$ %d.00\n", qtd, notas[i]);
        valor = valor % (notas[i] * 100);
    }

    printf("MOEDAS:\n");
    qtd = valor / 100;
    printf("%d moeda(s) de R$ 1.00\n", qtd);
    valor = valor % 100;

    for (i = 1; i < 6; i++) {
        qtd = valor / moedas[i];
        if (moedas[i] >= 10)
            printf("%d moeda(s) de R$ 0.%02d\n", qtd, moedas[i]);
        else
            printf("%d moeda(s) de R$ 0.0%d\n", qtd, moedas[i]);
        valor = valor % moedas[i];
    }

    return 0;
}