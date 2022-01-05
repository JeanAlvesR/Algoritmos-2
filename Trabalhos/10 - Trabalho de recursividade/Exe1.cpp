//1-Faça um programa que conte até 3, usando recursividade.


#include <stdio.h>
#include <stdlib.h>




void soma (int a){
	
	printf("\n%d",a);
	if (a<3)
	{
		
		soma(a+1);
		
	}
	
}



int main (){
	
	soma (0);
	
	return 0;	
}
