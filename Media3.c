#include <stdio.h>

int main() {
    float N1, N2, N3, N4, media, exame;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    media = N1 * 0.2 + N2 * 0.3 + N3 * 0.4 + N4 * 0.1;
    printf("Media: %.1f\n", media);
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
} else if (media >= 5.0 && media <= 6.9) {
    printf("Aluno em exame.\n");}
    scanf("%f", &exame);
    printf("Nota do exame: %.1f\n", exame);
    media = (media + exame) / 2;
    if (media >= 5.0) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", media);
    return 0;

}