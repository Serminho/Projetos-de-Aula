#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*Implemente um algoritmo que utilize a estrutura de repeticao for para
	imprimir o sucessor e o antecessor de 10 numeros digitados pelo usuario*/
	
	int x, num;
	for(x=1;x<=10;x++){
		printf("|Posicao :   [%i]\n",x);
		printf("|");
		scanf("%i",&num);
		printf("|Antecessor: %i\n", num-1);
		printf("|Sucessor:   %i\n", num+1);
		printf("================\n");
	}		
}