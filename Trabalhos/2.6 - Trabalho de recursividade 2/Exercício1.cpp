//1-	Fa�a um programa que pe�a um n�mero e retorne a somat�ria deste n�mero.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(int argc, char** argv){

	setlocale(LC_ALL, "Portuguese");
	float num;
	//scanf("%d",&num);
	
	num = 12 % 18;
	
	printf("\nSomat�rio: %f",num);
	
	return 0;
}

