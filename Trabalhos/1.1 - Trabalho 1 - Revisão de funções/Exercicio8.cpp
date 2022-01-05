/*
8.	Faça um programa que leia o salário de um trabalhador, calcule a desvalorização em um ano, usando como base a inflação anual de 2015 (a inflação foi de 10,67%) 
e mostre o quanto de poder aquisitivo ele perdeu (supondo que não tenha recebido reajuste ou aumento). 
Por exemplo, uma pessoa que ganhava R$ 1000 em janeiro de 2015 deveria ganhar R$ 1106,7 em janeiro de 2016 para que seu salário acompanhe a inflação. O cálculo foi feito da seguinte forma: salario_novo = 110,67 * salario_antigo / 100.
Caso este trabalhador não receba reajuste, isso significa que ele teve uma perda aquisitiva de R$ 106,7 (isto é: salario_novo - salario_antigo).

FUNCAO INSERIR O SALÁRIO
FUNCAO CÁLCULO DE DESVALORIZAÇÃO 10,67%
FUNCAO QUANTO DE DESVALORIZACAO
1000 ===> DEVERIA GANHAR 1106,7
*/

//AS FUNÇÕES COMEÇAM COM LETRA MAIÚSCULA
#include <iostream>
#include<locale.h>


float Salario_inicial (){
	
	float salario_inicial;
	
	printf("\n\nInserir salário atual: ");
	scanf("%f",&salario_inicial);
	
	
	return salario_inicial;
}

// Função salário corrigido
float Salario_corrigido(float salario_inicial){
	
	float salario_corrigido;
	salario_corrigido = salario_inicial + salario_inicial*10.67/100;
	
	return salario_corrigido;
}

// Função para calculo da desvalorização do salario.
float Desvalorizacao (float salario_inicial, float salario_corrigido){
	
	float desvalorizacao;
	desvalorizacao = salario_corrigido - salario_inicial;
	
	return desvalorizacao;
}



// Função saída
void saida(float desvalorizacao){
	
	printf("\n\nA desvalorização foi de %.2f\n\n",desvalorizacao);
	
}

// Função principal
int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float salario_corrigido, desvalorizacao, salario_inicial;
	salario_inicial = Salario_inicial();
	salario_corrigido = Salario_corrigido(salario_inicial);
	desvalorizacao = Desvalorizacao(salario_inicial, salario_corrigido);
	saida (desvalorizacao);
	

	
	return 0;
}
