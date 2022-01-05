//1.	Crie um programa que peça um número inteiro e diga se é par ou ímpar.
/* Função entrada: numero inteiro
Função checagem: Divisão para saber o resto
Função saída*/

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Função para a entrada entrada
int entrada (){
    int numero;
    printf("\nInserir número: ");
    scanf("%d",&numero);
    return numero;
}
//Função para o calculo.
int processo (int a){
    int verificador = 1;
    if (a % 2 != 0){
        verificador = 0;
    }
    return verificador;
}
//Função para a impressão
void saida (int b){
        
    if (b)
    {
        printf("\nO número é par\n");
    }
    else{
        printf("\nO número é impar\n");
    }
}

// Função Principal
int main(int argc, char** argv) {
		
	setlocale(LC_ALL,"Portuguese");
	int a, b;
	a=entrada();
	b=processo(a);
	saida(b);

	return 0;
}
