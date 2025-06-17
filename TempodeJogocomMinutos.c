#include <stdio.h>

int main() {
    int hi, mi, hf, mf;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    int inicio = hi * 60 + mi;
    int fim = hf * 60 + mf;
    if (fim <= inicio) {
        fim += 24 * 60;
    }
    int duracao = fim - inicio;
    int horas = duracao / 60;
    int minutos = duracao % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    
    return 0;}