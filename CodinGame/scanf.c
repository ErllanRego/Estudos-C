#include<stdio.h>//Biblioteca pra usar comandos de entrada e saída
int main(){
 int numero;
 char carac;
 printf("\ndigite um numero:");
 scanf("%d", &numero);
 printf("\ndigite um caracter:");
 getchar();//Esse comando evita que a tecla enter sera capturada também e ignore o outro valor
 scanf("%c",&carac);
 printf("\nnumero digitado foi: %d", numero);
 printf("\ncaracter digitado foi:%c", carac);

return 0;
}
