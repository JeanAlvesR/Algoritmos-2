/*
5.	Crie um programa que receba uma temperatura em Farenheit, fa�a a convers�o para Celsius e apresente o valor convertido. C= 5*(F-32)/9
*/

#include <iostream>
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Fun��o entrada
float entrada (){
	float temperatura1;
	printf("\nInserir Temperatura: ");
	scanf("%f",&temperatura1);
	
	return temperatura1;
}

// Fun��o de conversao
float calculo1(float temperatura){
	float calculo1;
	calculo1 = 5*(temperatura-32)/9;
	return calculo1;
}

// Funcao de sa�da
void impressao(float calculo){
	printf("A temperatura em Celcius �: %.1f",calculo);
}

// Fun��o principal
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	float temperatura, calculo;
	temperatura = entrada();
	calculo = calculo1(temperatura);
	impressao(calculo);
	
	return 0;
}
