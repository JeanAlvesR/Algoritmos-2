#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char** argv){

	setlocale(LC_ALL, "Portuguese");
	int a;
	a = 1 + NULL;
	if(a==NULL)
	{
		("OLA MUNDO");
	}
	printf("%d",a);
	return 0;
}

