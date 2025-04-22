#include <stdio.h>
#include <unistd.h> 

void contagemRegressiva(int inicio) {
    for (int i = inicio; i >= 0; i--) {
        printf("%d\n", i);
        sleep(1); 
    }
    printf("Tempo esgotado!\n");
}

int main() {
    int segundos;

    printf("Digite o tempo em segundos para a contagem regressiva: ");
    scanf("%d", &segundos);

    if (segundos < 0) {
        printf("Por favor, insira um número não negativo.\n");
        return 1;
    }

    contagemRegressiva(segundos);

    return 0;
}
