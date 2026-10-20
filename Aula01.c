#include <stdio.h>
/*
Programa que calcula a média aritmética de 2 provas e diz se o aluno foi aprovado ou reprovado.
*/
int main(void) {
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    media = (nota1 + nota2)/2;
    printf("Sua nota final foi: %.2f\n", media);

    if (media >= 7)
        printf("Aprovado! \n");
    else
        printf("Reprovado! \n");

    return 0;
}
