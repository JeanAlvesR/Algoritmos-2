//4.	Crie um programa que receba uma temperatura em Celsius, fa�a a convers�o para Farenheit e apresente o valor em Celsius e em Farenheit. F= (9*C/5) + 32
/*
Uma entrada float
convers�o
sa�da com dois valores

*/

#include <iostream>
#include<locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// funcao para receber um valor
float entrada (){
	float c;
	
	printf("\nInserir temperatura em celsius: ");
	scanf("%f",&c);
		
	return c;
}
//funcao para fazer a convers�o 

float conversao(float c){
	
	float f;
	
	f = 9*c/5 + 32;
	
	return f;
	
}
// Funcao de sa�da dos dados
void saida (float c, float f){
	printf("\n\nA temperatura em Celcius �: %.2f\nA temperatura em Ferenheint �: %.2f\n\n", c, f);
}

//Funcao Principal
int main(int argc, char** argv) {
	
	float temperatura_celsius, temperatura_feren;
	setlocale(LC_ALL,"Portuguese");
	
	temperatura_celsius = entrada ();
	temperatura_feren = conversao (temperatura_celsius);
	saida (temperatura_celsius, temperatura_feren);
	
	return 0;
}
