#include <stdio.h>
	
	int main(){
		
		/*Naturalmente, por mais que a variavel "resultado" seja do tipo double, 
		o computador entregaria um resultado int pois as variaveis a e b são int*/
		
		int a = 5, b = 2;
		double resultado = (double) a / b;
		
		/*Com este "(double)", notificamos o computador que estamos tornando a e b double para receber um valor double
		isto é um casting*/
		
		printf("%lf\n", resultado);
		
		
	return 0;
	}
