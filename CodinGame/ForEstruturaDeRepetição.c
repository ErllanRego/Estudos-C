#include <stdio.h>
int main()
{
	int N, i, x, soma;
	
		printf("Quantos numeros serao digitados? ");
		scanf("%d", &N);
		
		soma = 0;
		
		for (i = 1; i <= N; i++) {
			printf("Digite um numero: ");
			scanf("%d", &x);
			soma = soma + x;
		}
		/*o primeiro comando no parenteses do for ocorre somente na primeira execução. O segundo é a condição para que
		o comando seja realizado, quando a condição se tornar false, comando para de repetir. O ultimo é o incremento (nome da variavel++), também
		 há o decremento (nome da variavel--)
		 ----------------------------------------------------------------------
		 
		 No exemplo acima, o usuario coloca um valor em N. na condição primeiramente o i recebe 1. o for vai se repetir enquanto o i for menor ou igual a N.
		 Toda vez que o código se repete, o incremento do i é executado, então o código vai se repetir até que i seja menor ou igual a N, pois essa é a condição.
		 O código que se repete faz o usuário atribuir um valor a X, no final todos os numeros digitados são somados e mostrados na tela com o comando abaixo*/
		printf("SOMA = %d\n", soma);
		
	return 0;
}
