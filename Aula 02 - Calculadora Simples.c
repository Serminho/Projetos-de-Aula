#include <stdio.h>
#include <stdlib.h>

/*Implemente uma calculadora simplificada, que receba
via teclado dois numeros inteiros, aprensente como saida 
o resultado de acordo com a operacao selecionada.*/

int num1, num2, res, op, op2;

int main () {
	do{
	printf("===============================\n");
	printf("|     CALCULADORA SIMPLES     |\n");
	printf("-------------------------------\n");
	printf("|     1-Somar | 2-Subtrair    |\n");
	printf("-------------------------------\n");
	printf("|     3-Mult  | 4- Dividir    |\n");
	printf("===============================\n");
	printf("Informe a operacao desejada ou 5 para sair\n");
	scanf("%i", &op);
	
	printf("Digite o primeiro valor\n");
	scanf("%i", &num1);
	printf("Digite o segundo valor\n");
	scanf("%i", &num2);
	if(op==1){ //Operacao de Soma
		res=num1+num2;
	}
	if(op==2){ //Operacao de Subtracao
		res=num1-num2;
	}
	if(op==3){ //Operacao de Multiplicacao
		res=num1*num2;
	}
	if(op==4){ //Operacao de Divisao
		if(num1==0){
			res=0;
		}
		if(num2==0){
			res=0;
		}
		else
		{
			res=num1/num2;
		}
	}
	
	printf("==============================\n");
	printf("|O resultado da operacao e: %i\n",res);
	printf("==============================\n");
	printf("Deseja realizar outra operacao? Digite qualquer valor ou 5 para sair\n");
	scanf("%i",&op2);
	system("cls");
	}while(op2!=5);
}