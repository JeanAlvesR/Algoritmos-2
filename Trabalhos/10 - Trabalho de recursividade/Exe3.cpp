//3-Fa�a um programa que conte at� 5, e diga se o n�mero da vez � par ou �mpar.


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




void soma (int a){
	if (a<6)
	{
		if (a%2 == 0){
			printf("\nO %d � par",a);
		}
		else {
			printf("\nO %d � impar",a);
		}
		soma(a+1);
				
	}
	
}



int main (){
	setlocale(LC_ALL, "Portuguese");
	soma (0);
	
	return 0;	
}
