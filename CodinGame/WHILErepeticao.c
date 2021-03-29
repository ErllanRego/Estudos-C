#include <stdio.h>

	int main(){
			
			int i, N, soma, x;
			
			i =1;// Para que i não inicie com valor 0 e bugue o programa
			
			printf("Digite a quantidade de numeros: \n");
			scanf("%d", &N);
			
			soma=0;
			
			while(i<= N) //Condição entre parênteses
			{
				printf("Digite um numero:\n");
				i++;// O controle de repetição precisa ser feito manualmente, diferente do For
				scanf("%d",&x);	
				soma = soma + x;
			}
			
			
			
			printf(" A soma e: %d", soma);
		
		
		return 0;
	}
