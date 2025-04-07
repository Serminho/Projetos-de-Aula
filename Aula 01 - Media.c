#include <stdio.h>
#include <stdlib.h>

/*Implemente um Algoritmo que receba via teclado
o nome do aluno, a primeira nota, segunda nota e 
terceira nota. Calcule das tres notas recebidas 
e imprima o nome e media*/

char nome[50];
float nota1,nota2,nota3,media;

int main(){
	/*Definicao das Entradas*/
	printf("Digite seu nome\n");
	scanf("%s",&nome);
	printf("Digite a primeira nota\n");
	scanf("%f",&nota1);
	printf("Digite a segunda nota\n");
	scanf("%f",&nota2);
	printf("Digite a terceira nota\n");
	scanf("%f",&nota3);
	/*Definição do processamento*/
	media=(nota1+nota2+nota3)/3;
	/*Definição da saida*/
	printf("Nome:%s\n",nome);
	printf("Media:%.2f\n",media);
	
}