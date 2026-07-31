#include <stdio.h>

int main(void)
{
    int numu = 0;
    int numo = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &numu);

    printf("Digite o segundo número: ");
    scanf("%d", &numo);

    int soma = numu + numo;


    printf("A soma é %d \n", soma);
}
