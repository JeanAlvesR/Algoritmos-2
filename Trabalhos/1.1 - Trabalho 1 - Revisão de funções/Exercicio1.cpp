//1.	Crie um programa que pe�a um n�mero inteiro e diga se � par ou �mpar.
/* Fun��o entrada: numero inteiro
Fun��o checagem: Divis�o para saber o resto
Fun��o sa�da*/

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Fun��o para a entrada entrada
int entrada (){
    int numero;
    printf("\nInserir n�mero: ");
    scanf("%d",&numero);
    return numero;
}
//Fun��o para o calculo.
int processo (int a){
    int verificador = 1;
    if (a % 2 != 0){
        verificador = 0;
    }
    return verificador;
}
//Fun��o para a impress�o
void saida (int b){
        
    if (b)
    {
        printf("\nO n�mero � par\n");
    }
    else{
        printf("\nO n�mero � impar\n");
    }
}

// Fun��o Principal
int main(int argc, char** argv) {
		
	setlocale(LC_ALL,"Portuguese");
	int a, b;
	a=entrada();
	b=processo(a);
	saida(b);

	return 0;
}
