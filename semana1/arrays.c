#include <stdio.h>
#include <string.h>

int main (void)
{
    int vetor[7] = {0, 1, 2, 3, 4, 5, 6};
    float soma = 0;
    float divisor = 7;

    for (int i=0; i < divisor; i++)
    {
        printf("%d \n", vetor[i]);
        soma += vetor[i];
    }
    
    float media = soma/divisor;

    printf("média = %.2f \n", media);
}