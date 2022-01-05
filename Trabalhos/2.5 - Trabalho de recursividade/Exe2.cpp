//2-Faça um programa que conte de 3 até 0, usando recursividade.


#include <stdio.h>
#include <stdlib.h>




void soma (int a){
	if (a>=0)
	{
		printf("\n%d",a);
		soma(a-1);
		
		
	}
	
}



int main (){
	soma (3);
	
	return 0;	
}
