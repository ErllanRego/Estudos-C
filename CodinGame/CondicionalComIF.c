#include <stdio.h>
//ESTRUTURA CONDICIONAL SIMPLES
int main(void)
{
    int A, B, Soma;
 
    A = 4;
    B = 6;
    Soma = A + B;
    printf ("O Valor da soma = %d", Soma);
 
    if(Soma >= 10) //A condição entre parenteses
    {
        printf("\n\nEstou dentro da Estrutura IFSimples, logo:\n valor da soma é maior ou igual a 10\n");//Executado somente se a condição for true.
    }
 
 
    return(0);
}
