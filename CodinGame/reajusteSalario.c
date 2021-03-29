#include <stdio.h>
/*Faça um programa C para reajustar o salário atual de um funcionário. Para isso, o 
programa deve ler o valor do salário e o percentual de reajuste. Calcular e escrever o valor do salário reajustado.*/

int main() {

  float salario_atual, salario_novo;
  float percentual;        

  printf("\nDigite o salario atual do funcionario:"); 
  scanf("%f", &salario_atual );  

  printf("\nDigite o percentual de reajuste:"); 
  scanf("%f", &percentual );  

  salario_novo = salario_atual + salario_atual * percentual/100; 
  printf("\nSalario reajustado é: %f", salario_novo);
  
  return 0;
}
