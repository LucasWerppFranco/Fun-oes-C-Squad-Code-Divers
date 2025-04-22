#include <stdio.h>
#include <unistd.h>

void contagemRegressiva(int inicio)
{
    for (int i = inicio; i >= 0; i--)
    {
        printf("%d\n", i);
        sleep(1);
    }
    printf("Tempo esgotado!\n");
}

int main()
{

    return 0;
}