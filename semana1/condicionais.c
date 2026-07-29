#include <stdio.h>

int main (void)
{
    int x = 3;
    int y = 6;

    if (x > y)
    {
        printf("X é maior que Y \n");
    }
    else if (x == y)
    {
        printf("X é igual a Y \n");
    }
    else
    {
        printf("X é menor que Y \n");
    }
}