#include <stdio.h>/*Vai permitir comandos de entrada e saída*/
#include <string.h>/*Garante que funções de string funcionem*/



int main(){
	
	/*Variaveis*/
	int idade;
	double salario, altura;/*Declarando duas variáveis de mesmo tipo*/
	char genero;/*Texto de um caractere*/
	char nome[50];/*(VETOR DE CHAR)Texto com vários caracteres permitindo até 50 caracteres*/
	
	idade= 20;
	salario= 5800.5;
	altura= 1.63;
	genero= 'F'; /*Lembrando que se usa aspas simples por ser apenas um caractere*/
	
	/*PODE ATRIBUIR VALORES NA DECLARAÇÃO DE VARIAVEL TAMBÉM. EXEMPLO:
	
	int idade = 20;
	char genero = 'F';
	*/
	
	/*Por ser um vetor de char, para atribuir valor fica um pouco diferente
	STRCPY É UMA FUNÇÃO PARA SE TRABALHAR COM TEXTO*/
	strcpy(nome, "Maria Silva"); /*Comando para vetor de char(nome da variavel, "valor que queremos colocar na variavel");*/
	
	/*OUTRA FORMA DE EXECUTAR O COMANDO ACIMA SERIA DANDO O VALOR DIRETO NA DECLARAÇÃO
		DE VARIAVEL:
		
		char nome[50] = "Maria Silva ";
		
	*/
	
	
	printf("IDADE = %d\n", idade);/* %d indica para printf que um inteiro deve ser colocado na tela, logo depois é dado o valor deste inteiro.*/
								  /*\n é meramente para mudar de linha*/
	printf("SALARIO = %lf");
	printf("ALTURA = %lf");
	printf("GENERO = %c");
	
	
	
	
	
	
	return 0;
}
