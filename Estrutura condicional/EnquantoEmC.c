#include <stdio.h>
/*O programa vai receber valores infinitamente, while(enquanto) x for diferente de 0
Quando x receber zero, o while para de ser executado*/
	int main(){
		int x,y;
		
		y=0;
		
		printf("Digite o primeiro numero: \n");
		scanf("%d", &x);
		
			while(x != 0) {//Enquanto x for diferente de zero
				y = y+x;
				printf("Digite outro numero: ");
				scanf("%d", &x);
			}
		
		printf("SOMA = %d\n", y);
		
	return 0;
	}
	
	
