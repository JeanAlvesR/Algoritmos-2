/*
7.	Crie um programa que apresente o seguinte menu:

1-Converter um valor de Celsius para Farenheit
2-Converter um valor de Farenheit para Celsius
0-Sair

Uma vez que o usu�rio escolha a op��o 1 ou 2, o programa deve pedir a temperatura, fazer a convers�o de Celsius para Farenheit ou Farenheit para Celsius (dependendo da op��o escolhida) e mostre o valor original e o valor convertido.
Por fim, o menu deve ser apresentado novamente.

--------------------------------------------------
-Fun��o para receber a op��o 1 ou 2;
-Fun��o que verifica;
-Fun��o que converte com base na verifica��o;
-imprimir o n�mero que foi convertido com base na op��o escolhida
*/

#include <iostream>
#include<locale.h>

// entrada da opcao
int entradaopcao(){
	int i;
	printf("\n\n-----MENU-----\n\nConverter Celsius para Ferenheint: 0\nConverter Ferenheint para Celsius: 1\n\nEscolher: ");
	scanf("%d",&i);
	while(i>1 || i<0)
	{
		scanf("%i",&i);
	}
	return i;
}

// funcao entrada da temperatura
float entradatemp(){
	float t;
	printf("Inserir a temperatura a ser convertida: ");
	scanf(" %f",&t);
	return t;
}

//funcao conversao
float conversao(int opcao, float t){
	float t_convertido;
	
	if (opcao)
	{
		t_convertido= 5*(t-32)/9;
	}
	else{
		t_convertido = 9*t/5 + 32;
	}
	
	return t_convertido;
}

//fun��o sa�da
void saida(int opcao, float t, float t_convertido){
	if (opcao)
	{
		printf("\n\nA temperatura em ferenheint �: %.2f\nA temperatura em celsius �: %.2f\n\n",t,t_convertido);
	}
	else {
		printf("\n\nA temperatura em Celsius �: %.2f\nA temperatura em Ferenheint �: %.2f\n\n",t, t_convertido);
	}
}
//Funcao para verificar se o usu�rio gostaria de continuar...
char continuacao(){
	char verificador;
	
	printf("\n\nDeseja continuar? Se sim, insira a letra 'c': ");
	scanf(" %c",&verificador);
	
	return verificador;
}



// Fun��o principal
int main(int argc, char** argv) {
	char verificador;
	int opcao;
	float t_convertido,t;
	setlocale(LC_ALL,"Portuguese");
	
	do{
		opcao = entradaopcao();
		t = entradatemp();
		t_convertido = conversao(opcao, t);
		saida(opcao, t, t_convertido);
		verificador = continuacao();
		
	}while(verificador == 'c' || verificador == 'C');

	
	return 0;
}

