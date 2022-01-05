//3-Faça um programa que conte até 5, e diga se o número da vez é par ou ímpar.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




void soma (int a){
	if (a<6)
	{
		if (a%2 == 0){
			printf("\nO %d é par",a);
		}
		else {
			printf("\nO %d é impar",a);
		}
		soma(a+1);
				
	}
	
}



int main (){
	setlocale(LC_ALL, "Portuguese");
	soma (0);
	
	return 0;	
}
