/*2-	Fa�a um programa que pe�a 4 valores, coloque estes valores em um  vetor global e, 
calcule a soma de todos os valores. Por fim, fa�a o c�lculo da m�dia. Detalhe: 
crie um vetor j� com os valores definidos para se concentrar no mais importante que � a soma.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float vetor[5]; // Vari�vel Global

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
	printf("\nSoma: %.2f \tM�dia: %.2f",vetor[4], vetor[4]/4);

	return 0;
}

