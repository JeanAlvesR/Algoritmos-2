/*
6.	Crie um programa que receba uma temperatura em Farenheit, fa�a a convers�o para Celsius e apresente o valor em Farenheit e em Celsius. C= 5*(F-32)/9
*/

#include <iostream>
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// funcao para receber um valor
float entrada (){
	float f;
	
	printf("\nInserir temperatura em ferenheint: ");
	scanf("%f",&f);
		
	return f;
}
//funcao para fazer a conversao 

float conversao(float f){
	
	float c;
	
	c = 5*(f-32)/9;
	
	return c;
	
}
// Funcao de sa�da dos dados
void saida (float c, float f){
	printf("\n\nA temperatura em Ferenheint �: %.2f\n\nA temperatura em Celcius �: %.2f\n\n", f, c);
}

//Funcao Principal
int main(int argc, char** argv) {
	
	float temperatura_celsius, temperatura_feren;
	setlocale(LC_ALL,"Portuguese");
		
	temperatura_feren = entrada ();
	temperatura_celsius = conversao (temperatura_feren);
	saida (temperatura_celsius, temperatura_feren);
	
	return 0;
}
