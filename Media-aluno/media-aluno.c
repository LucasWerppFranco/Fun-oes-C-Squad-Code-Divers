#include <stdio.h>


void boasVindas(char nome[]) {
    printf("Bem-vindo(a), %s!\n", nome);
}

int main() {
    char nome[50];

   
    printf("Digite o nome do aluno: ");
    scanf("%49s", nome);
    
    boasVindas(nome);

    return 0;
}