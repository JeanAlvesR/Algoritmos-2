/*
5-Transforme o trecho do-while abaixo em uma função recursiva:

int main(int argc, char** argv) {

	int a;
	
	do{
		printf("\nMenu:");
		printf("\n1-Dizer oi");
		printf("\nOutro número para sair");
		scanf("%d",&a);
		if(a==1){
			printf("\nOi");
		}
	}while(a!=1);
	return 0;
}

*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void fazer (){
	
	int a;
	
	printf("\nMenu:");
	printf("\n1-Dizer oi");
	printf("\nX-Outro número para sair(nao vai sair)\nInserir Valor: ");
	scanf(" %d",&a);
		if(a==1){
			printf("\nOi");
		}
		else
			fazer();

}

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	fazer();
	
	return 0;
}
