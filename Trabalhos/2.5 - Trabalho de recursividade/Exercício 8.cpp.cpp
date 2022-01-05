/*
8-Transforme o trecho while abaixo em uma função recursiva:

int main(int argc, char** argv) {

	int a;
	
	printf("\nDigite um número entre 1 e 3");
	scanf("%d",&a);	

	while(a<1 || a>3){
		printf("\nErrrrou! Tente novamente!");
		scanf("%d",&a);
	}
	printf("Tchau");
	return 0;
}

*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void fazer(int a){
		
	printf("\nErrrrou! Tente novamente!");
	scanf("%d",&a);		
		if (a<1 || a>3){
			fazer(a);
		}
		else 
			printf("Tchau");	
}

int main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("\nDigite um número entre 1 e 3");
	scanf("%d",&a);
		
	fazer(a);
		
	return 0;
}
