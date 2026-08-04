#include <stdio.h>

int main (void)
{
    int x = 33;
    int *p  = &x; 
    
    // na linha 6 o * faz parte do tipo. 
    // Está dizendo: p não é um int, é um "endereço de int". 
    // Acontece uma vez só, na linha que cria a variável. 
    // Ele não executa nada, só declara e guarda um endereço.



    printf("valor de x é %d \n", x);
    printf("endereço de x é %p \n", &x);
    printf("valor de p é %p \n", p);
    printf("valor de *p é %d \n", *p); //pega o endereço em p, vai até lá, devolve o valor. 
    printf("endereço de p é %p \n", &p);

    *p = 99; //atribui um novo valor e grava
    printf("agora x vale %d \n", x);
}