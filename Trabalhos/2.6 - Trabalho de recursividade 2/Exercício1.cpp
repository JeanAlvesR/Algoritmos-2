//1-	Faça um programa que peça um número e retorne a somatória deste número.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(int argc, char** argv){

	setlocale(LC_ALL, "Portuguese");
	float num;
	//scanf("%d",&num);
	
	num = 12 % 18;
	
	printf("\nSomatório: %f",num);
	
	return 0;
}

