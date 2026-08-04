#include <string.h>
#include <stdio.h>

int main (void)
{
    char nome[] = "Rodrigo";
    int tamanho = strlen(nome);
    printf("%s \n", nome);
    printf("começa com %c \n", nome[0]);
    printf("possui tamanho %d. \n", tamanho);
}