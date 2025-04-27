#include <stdio.h>

// Função para calcular a média
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

// Função para exibir o resultado
void exibirResultado(float media) {
    if (media >= 7.0) {
        printf("Aprovado!\n");
    } else if (media >= 5.0) {
        printf("Em recuperação.\n");
    } else {
        printf("Reprovado.\n");
    }
}

// Função para exibir boas-vindas
void boasVindas(char nome[]) {
    printf("Bem-vindo(a), %s!\n", nome);
}

int main() {
    char nome[50];
    float n1, n2, n3, media;

    // Solicitar o nome do aluno
    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    // Remover a nova linha do final do nome, se existir
    nome[strcspn(nome, "\n")] = 0;

    // Chamar a função de boas-vindas
    boasVindas(nome);

    // Solicitar as notas
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    // Calcular a média
    media = calcularMedia(n1, n2, n3);

    // Exibir o resultado
    printf("A média do aluno é: %.2f\n", media);
    exibirResultado(media);

    return 0;
}