#include <stdio.h>

float somar(float a, float b)
{
    return a + b;
}
float subtrair(float a, float b)
{
    return a - b;
}
float multiplicar(float a, float b)
{
    return a * b;
}
float divisao(float a, float b)
{
    if (b == 0)
    {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
    return a / b;
}

int main()
{
    int selecao;
    float a, b;

    do
    {
        printf("CALCULADORA\n");
        printf("(1) Somar\n");
        printf("(2) Subtrair\n");
        printf("(3) Multiplicar\n");
        printf("(4) Dividir\n");
        printf("(5) Sair\n");
        printf("Escolha uma das opções, fornecendo o número correspondente: ");
        scanf("%d", &selecao);

        if (selecao >= 1 && selecao <= 4)
        {
            printf("Insira o primeiro número: ");
            scanf("%f", &a);
            printf("Insira o segundo número: ");
            scanf("%f", &b);
        }

        switch (selecao)
        {
        case 1:
            printf("O Resultado da soma é igual a: %.2f\n", somar(a, b));
            break;
        case 2:
            printf("O Resultado da subtração é igual a: %.2f\n", subtrair(a, b));
            break;
        case 3:
            printf("O Resultado da multiplicação é igual a: %.2f\n", multiplicar(a, b));
            break;
        case 4:
            printf("O Resultado da divisão é igual a: %.2f\n", divisao(a, b));
            break;
        case 5:
            printf("Encerrando..\n");
            break;
        default:
            printf("Opção Inválida! Tente novamente.\n");
        }
    } while (selecao != 5);

    return 0;
}