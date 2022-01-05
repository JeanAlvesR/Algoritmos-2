/*2-	Faça um programa que peça 4 valores, coloque estes valores em um  vetor global e, 
calcule a soma de todos os valores. Por fim, faça o cálculo da média. Detalhe: 
crie um vetor já com os valores definidos para se concentrar no mais importante que é a soma.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float vetor[5]; // Variável Global

float pegar(int i){
		int x;
			
		scanf("%f",&vetor[i]);	
		x = vetor[i];
			if (i<3){
				x+= pegar(i+1);
			}
		
		return x;
	}
		



int main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	vetor[4]=pegar(0); 
	printf("\nSoma: %.2f \tMédia: %.2f",vetor[4], vetor[4]/4);

	return 0;
}

