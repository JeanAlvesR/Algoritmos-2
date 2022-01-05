/*
6-Transforme o trecho do-while abaixo em uma função recursiva:

int main(int argc, char** argv) {

	int a;
	
	do{
		printf("\nMenu:");
		printf("\n1-Dizer oi");
		printf("\nOutro número para sair");
		scanf("%d",&a);
	}while(a!=1);
	printf("\nOi");
	return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void fazer(){
			
	int a;
	
	do{
		printf("\nMenu:");
		printf("\n1-Dizer oi");
		printf("\nOutro número para sair");
		scanf("%d",&a);
			if(a!=1){
			fazer();
			}
				
	}while(a!=1);
	printf("\nOi");
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	fazer();
	
	return 0;
}
