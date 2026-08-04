#include <stdio.h>

void trocar (int *x, int *y);

int main (void)
{
    int a = 10;
    int b = 20;

    trocar(&a, &b);
    printf("a = %d \n", a);
    printf("b = %d \n", b);

}

void trocar (int *x, int *y)
{
    
    int c = *x;
    
    *x = *y;
    *y = c;

}