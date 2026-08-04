#include <stdio.h>

void dobrar (int *p);

int main (void)
{
    int x = 25;
    dobrar(&x);
    printf("x na main: %d\n", x);
    printf("o endereço de x é %p \n", &x);
}

void dobrar (int *p)
{
    *p = *p * 2;
    printf("o dobro é %d \n", *p);
    printf("o endereço de p é %p \n", &p);
    printf("o valor de p é %d \n", *p);
}

// A main declara x valendo 25 e chama dobrar passando o endereço de x. 
// A função recebe esse endereço e o chama de p. 
// Lá dentro, *p = *p * 2 significa: 
//         vá até o endereço, 
//         leia o valor (25), 
//         dobre (50), 
//         e grave de volta no mesmo endereço. 
// Como aquele endereço é onde x mora, o x da main vira 50.