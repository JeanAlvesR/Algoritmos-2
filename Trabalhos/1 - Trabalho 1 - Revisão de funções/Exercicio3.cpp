/*
3.	Crie um programa que receba uma temperatura em Celsius, faça a conversão para Farenheit e apresente o valor convertido. F= (9*C/5) + 32
*/

#include <iostream>
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Função de entrada
float entrada (){
	float temperatura1;
	printf("\nInserir Temperatura: ");
	scanf("%f",&temperatura1);
	
	return temperatura1;
}
// Função para a conversão
float calculo1(float temperatura){
	float calculo1;
	calculo1 = 9*temperatura/5 + 32;
	return calculo1;
}

// Função para a impressão
void impressao(float calculo){
	printf("A temperatura em Farenheit: %.1f",calculo);
}

// Função Principal
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	float temperatura, calculo;
	temperatura = entrada();
	calculo = calculo1(temperatura);
	impressao(calculo);
	
	return 0;
}


