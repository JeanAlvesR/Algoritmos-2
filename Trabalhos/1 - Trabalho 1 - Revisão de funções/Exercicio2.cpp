//2.	Crie um programa que receba dois n�meros e apresente o maior.
// Ordem das fun��es
// Checagem
// Entrada
// Sa�da
// main
#include <iostream>
#include<locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//funcao checagem
int checagem (int a, int b){
	float c = a;

	if (b>a)
	{
		c = b;
	}

	return c;
}
//funcao entrada
int entrada (){
	int a, b,c;
	printf("\nInserir dois n�meros: ");
	scanf("%d %d",&a, &b);
	//enviei para a checagem
	c = checagem (a, b);

	return c;
}
//funcao sem retorno que imprime o numero maior.
void saida(int c){

	printf("\nO maior n�mero �: %d\n\n",c);

}


//funcao principal

int main(int argc, char** argv) {

	
	setlocale(LC_ALL,"Portuguese");
	
	saida (entrada ());
	
	return 0;
}
