#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota[5][3], media[5], soma = 0;
	char nome[5][250];
	int idade[5], i, j;
	
	printf("Cadastro.\n");
	for(i = 0; i < 5; i++){
		printf("Aluno: ");
		gets(nome[i]);
		printf("Idade: ");
		scanf("%d",&idade[i]);
		for(j = 0; j < 3; j++){
			printf("%dª Nota: ",j + 1);
			scanf("%f",&nota[i][j]);
			soma += nota[i][j];
		}
		media[i] = soma / j;
		soma = 0;
		fflush(stdin);
	}
	
	system("cls");
	
	
	for(i = 0; i < 5; i++){
		printf("Aluno: %s. Idade: %d\n",nome[i],idade[i]);	
			for(j = 0; j < 5; j++){
			printf("%dª Nota: %.1f\n",j + 1,nota[i][j]);
			}
			printf("Media: %.1f\n",media[i]);
			if(media[i] >= 7){
				printf("Aprovado!\n");
			} else if(media[i] >= 5){
				printf("Recuperação!\n");
			} else {
				printf("Reprovado!\n");
			}
		}
	return 0;
}
