#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int telefone[2000], opcao, i, j, z = 0;
	char nome[2000][250];
	
	for(i = 0; i < 2000; i++){
		printf("Escreva seu nome: ");
		gets(nome[i]);
		printf("Digite seu telefone: ");
		scanf("%d",&telefone[i]);
		printf("1 - Para adicionar um número. 2 -  Para mostrar os números cadastrados: ");
		scanf("%d",&opcao);
		z++;
		fflush(stdin);
		if(opcao == 2){
			system("cls");
            printf("Agenda.\n");
			for(i = 0; i < z; i++){
			printf("Nome: %s\n",nome[i]);
			printf("Telefone: %d\n",telefone[i]);
		}
		break;
	} else if(opcao != 1){
		break;
	}
}
	
	return 0;
}