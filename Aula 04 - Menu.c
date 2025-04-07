#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int opMenuPrincipal, opMenuCadastro, opMenuImpressao;
char nome[80], curso[40];

void CadastroAluno(){
	printf("Informe seu nome\n");
	fgets(nome, sizeof(nome),stdin);
	getchar();
	printf("Digite o curso\n");
	fgets(curso, sizeof(curso),stdin);
	getchar();	
}
void MenuPrincipal(){
	printf("+=======================================+\n");
	printf("|         TEMPLATE DA APLICACAO         |\n");	
	printf("|---------------------------------------|\n");
	printf("|        1-ACAO     |     2-ACAO        |\n");
	printf("|---------------------------------------|\n");
	printf("|        3-ACAO     |     4-ACAO        |\n");
	printf("|---------------------------------------|\n");
	printf("|    SELECIONE A OPCAO OU 5 P/ VOLTAR   |\n");
	printf("+=======================================+\n");
	scanf("%i",&opMenuPrincipal);	
}
void MenuCadastro(){
	printf("+=======================================+\n");
	printf("|            MENU DE CADASTRO           |\n");	
	printf("|---------------------------------------|\n");
	printf("|     1-CADASTRO1   |   2-CADASTRO2     |\n");
	printf("|---------------------------------------|\n");
	printf("|     3-CADASTRO3   |   4-CADASTRO4     |\n");
	printf("|---------------------------------------|\n");
	printf("|    SELECIONE A OPCAO OU 5 P/ VOLTAR   |\n");
	printf("+=======================================+\n");
	scanf("%i",&opMenuCadastro);
	switch(opMenuCadastro){
	case 1:{
		system("cls");
		CadastroAluno();
		break;
	}
	case 2:{
		printf("Em desenvolvimento\n");  
		break;
	}
	default:
		break;
	}	
}
void MenuImpressao(){
	printf("+=======================================+\n");
	printf("|           MENU DE IMPRESSAO           |\n");	
	printf("|---------------------------------------|\n");
	printf("|    1-IMPRESSAO1   |   2-IMPRESSAO2    |\n");
	printf("|---------------------------------------|\n");
	printf("|    3-IMPRESSAO3   |   4-IMPRESSAO4    |\n");
	printf("|---------------------------------------|\n");
	printf("|    SELECIONE A OPCAO OU 5 P/ VOLTAR   |\n");
	printf("+=======================================+\n");
	scanf("%i",&opMenuImpressao);	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	MenuPrincipal();
	switch(opMenuPrincipal){
	case 1:{
		system("cls");
		MenuCadastro();
		break;
	}
	case 2:{
		system("cls");
		MenuImpressao();
		break;
	}
	default:
		break;
	}	
}