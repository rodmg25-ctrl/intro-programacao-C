#include <stdio.h>

int maior_de_dois (int a, int b);

int main (void)
{
    int x = 121;
    int y = 99;

    int resultado = maior_de_dois(x,y);
    printf("resultado = %d \n", resultado);
}

int maior_de_dois (int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else if (a == b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}