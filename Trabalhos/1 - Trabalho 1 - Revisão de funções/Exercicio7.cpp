/*
7.	Crie um programa que apresente o seguinte menu:

1-Converter um valor de Celsius para Farenheit
2-Converter um valor de Farenheit para Celsius
0-Sair

Uma vez que o usuário escolha a opção 1 ou 2, o programa deve pedir a temperatura, fazer a conversão de Celsius para Farenheit ou Farenheit para Celsius (dependendo da opção escolhida) e mostre o valor original e o valor convertido.
Por fim, o menu deve ser apresentado novamente.

--------------------------------------------------
-Função para receber a opção 1 ou 2;
-Função que verifica;
-Função que converte com base na verificação;
-imprimir o número que foi convertido com base na opção escolhida
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

//função saída
void saida(int opcao, float t, float t_convertido){
	if (opcao)
	{
		printf("\n\nA temperatura em ferenheint é: %.2f\nA temperatura em celsius é: %.2f\n\n",t,t_convertido);
	}
	else {
		printf("\n\nA temperatura em Celsius é: %.2f\nA temperatura em Ferenheint é: %.2f\n\n",t, t_convertido);
	}
}
//Funcao para verificar se o usuário gostaria de continuar...
char continuacao(){
	char verificador;
	
	printf("\n\nDeseja continuar? Se sim, insira a letra 'c': ");
	scanf(" %c",&verificador);
	
	return verificador;
}



// Função principal
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

