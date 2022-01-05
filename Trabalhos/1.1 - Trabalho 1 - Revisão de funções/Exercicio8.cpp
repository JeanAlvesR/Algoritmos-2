/*
8.	Fa�a um programa que leia o sal�rio de um trabalhador, calcule a desvaloriza��o em um ano, usando como base a infla��o anual de 2015 (a infla��o foi de 10,67%) 
e mostre o quanto de poder aquisitivo ele perdeu (supondo que n�o tenha recebido reajuste ou aumento). 
Por exemplo, uma pessoa que ganhava R$ 1000 em janeiro de 2015 deveria ganhar R$ 1106,7 em janeiro de 2016 para que seu sal�rio acompanhe a infla��o. O c�lculo foi feito da seguinte forma: salario_novo = 110,67 * salario_antigo / 100.
Caso este trabalhador n�o receba reajuste, isso significa que ele teve uma perda aquisitiva de R$ 106,7 (isto �: salario_novo - salario_antigo).

FUNCAO INSERIR O SAL�RIO
FUNCAO C�LCULO DE DESVALORIZA��O 10,67%
FUNCAO QUANTO DE DESVALORIZACAO
1000 ===> DEVERIA GANHAR 1106,7
*/

//AS FUN��ES COME�AM COM LETRA MAI�SCULA
#include <iostream>
#include<locale.h>


float Salario_inicial (){
	
	float salario_inicial;
	
	printf("\n\nInserir sal�rio atual: ");
	scanf("%f",&salario_inicial);
	
	
	return salario_inicial;
}

// Fun��o sal�rio corrigido
float Salario_corrigido(float salario_inicial){
	
	float salario_corrigido;
	salario_corrigido = salario_inicial + salario_inicial*10.67/100;
	
	return salario_corrigido;
}

// Fun��o para calculo da desvaloriza��o do salario.
float Desvalorizacao (float salario_inicial, float salario_corrigido){
	
	float desvalorizacao;
	desvalorizacao = salario_corrigido - salario_inicial;
	
	return desvalorizacao;
}



// Fun��o sa�da
void saida(float desvalorizacao){
	
	printf("\n\nA desvaloriza��o foi de %.2f\n\n",desvalorizacao);
	
}

// Fun��o principal
int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float salario_corrigido, desvalorizacao, salario_inicial;
	salario_inicial = Salario_inicial();
	salario_corrigido = Salario_corrigido(salario_inicial);
	desvalorizacao = Desvalorizacao(salario_inicial, salario_corrigido);
	saida (desvalorizacao);
	

	
	return 0;
}
