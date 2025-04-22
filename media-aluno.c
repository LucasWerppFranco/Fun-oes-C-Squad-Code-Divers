#include <stdio.h>

void boasVindas(char nome[20])
{

    printf("Boas Vindas! %s", nome);
}

float calcularMedia(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3;
}

void exibirResultado(float media)
{
    char nome[20];
    printf("Digie seu nome: ");
    scanf("%s", nome);
    boasVindas(nome[20]);
    if (media >= 7.0)
    {
        printf("Aprovado ! Media: %.2f\n", media);
    }
    else if (media >= 5.0)
    {
        printf("Recuperação! Media: %.2f/n", media);
    }
    else
    {
        printf("Reprovado! Media: %.2f/n", media);
    }
}