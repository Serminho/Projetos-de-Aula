#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*Elabore um algoritmo que faca uso da repeticao for para imprimir
	uma sequencia numerica inicializada em 1 a 100.*/
	
	int n;
	for(n=1;n<=100;n++)
	{
		printf("%d\n",n);
	}
	for(n=100;n>=1;n--)
	{
		printf("%d\n",n);
	}
	
}