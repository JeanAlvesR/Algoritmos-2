//4-Faça um programa que conte até 6, mas de 2 em 2.



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




void soma (int a){
	if (a<7)
	{
		printf("\n%d",a);
		soma(a+2);
				
	}
	
}



int main (){
	setlocale(LC_ALL, "Portuguese");
	soma (0);
	
	return 0;	
}
