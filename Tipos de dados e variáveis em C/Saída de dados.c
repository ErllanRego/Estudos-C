#include <stdio.h>
#include <string.h>
#include <locale.h>

	int main(){
		
		double a, b, resultado;
			
			a = 2.0;
			b = 2.5;
			
			resultado = a + b;
		
				printf("%lf\n", resultado);//POR PADRÃO RETORNA O NÚMERO COM 6 DIGITOS DECIMAIS
				
				printf("%.1lf\n", resultado);//Acrescentando ".1" entre a porcentagem e o lf (placeholder de número decimal), ele passa a mostrar 1 número decimal na tela
				
				printf("%.2lf\n", resultado);//Exemplo mostrando 2 digitos decimais
		
				printf("%.4lf\n", resultado);//Exemplo com 4 digitos decimais
				
				/*------------------------PODE SER QUE ALGUNS VALORES SEJAM ARREDONDADOS------------------------------*/
				
				
			//exemplo usando placeholder--->
			
						int idade = 32;
						double salario = 4560.9;
						char sexo = 'F';
						char nome[50];
						
						strcpy (nome, "MARIA SILVA");//Não é necessário usar o "=" neste
						
						printf("------------------------------------------------------------------------------------------------\n");
						printf(" Ola %s, voce e do sexo %c, ganha %.1lf e tem %d anos ", nome, sexo, salario, idade);
						
	return 0;	
	}
	
	
