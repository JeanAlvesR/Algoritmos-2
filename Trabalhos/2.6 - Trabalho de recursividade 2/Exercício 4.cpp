/*
4-	Faça um programa que peça 4 valores, coloque estes valores em um  vetor global e, apresente, no fim, o menor valor do vetor. 
Detalhe: crie um vetor já com os valores definidos para se concentrar no mais importante que é a soma.
*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float vetor[5]; // Variável Global

float pegar(int i){
	
		int x,y;
			scanf("%f",&vetor[i]);
			x = vetor[i];
			vetor[4] += vetor[i];	
			if (i<3){
				y = pegar(i+1);
				if (x > y){
					x = y;
				}
			}
			
		return x;
	}

int main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	float x = pegar(0); 
	
	printf("\nMenor Valor: %.2f.\t Soma: %.2f.",x,vetor[4]);

	return 0;
}

