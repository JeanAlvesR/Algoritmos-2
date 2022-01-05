/*
9-Transforme o laço FOR abaixo em função recursiva:

int main(int argc, char** argv) {

	int i;
	
	for(i=0;i<4;i++){
		printf("\nE dá-lhe %d",i);
	}
	
	return 0;
}
*/



#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void fazer(int i){
	
	printf("\nE dá-lhe %d",i);
	if (i<3){
		fazer(i+1);
	}
	
}

int main(int argc, char** argv){

	setlocale(LC_ALL, "Portuguese");
	fazer(0);

	return 0;
}

