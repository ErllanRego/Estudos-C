#include <stdio.h>
//Estrutura condicional composta
	int main(){
		
		int soma = 0;
		
			printf("Digite o resultado da soma entre 5+5: \n");
			scanf("%d", &soma);
			
		
			
			if(soma == 10){//ocorre caso a condição seja true
				printf("Voce digitou %d, esta correto!", soma);
			}
			else{//Ocorre caso seja false
				printf("Voce digitou %d, esta errado!", soma);
			}
		return 0;
	}
	
