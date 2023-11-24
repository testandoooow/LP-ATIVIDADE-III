#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
	char nome[5][250];
	int idade[5], i, maiorIdade = 0, menorIdade = 99999;
	float peso[5], altura[5], maiorAltura = 0, menorAltura = 99999, maiorPeso = 0, menorPeso = 99999;
	
	for(i = 0; i < 5; i++){
		printf("%d pessoa. Escreva seu nome: ",i + 1);
		gets(nome[i]);
		
		printf("Digite sua idade: ");
		scanf("%d",&idade[i]);
		
		maiorIdade = maiorIdade > idade[i] ? maiorIdade : idade[i];
		menorIdade = menorIdade < idade[i] ? menorIdade : idade[i];
		
		printf("Digite seu peso: ");
		scanf("%f",&peso[i]);
		
		maiorPeso = maiorPeso > peso[i] ? maiorPeso : peso[i];
		menorPeso = menorPeso < peso[i] ? menorPeso : peso[i];
		
		printf("Digite sua altura: ");
		scanf("%f",&altura[i]);
		
		maiorAltura = maiorAltura > altura[i] ? maiorAltura : altura[i];
		menorAltura = menorAltura < altura[i] ? menorAltura : altura[i];
		
		fflush(stdin);
	}
	
	system("cls");
	
	for(i = 0; i < 5; i++){
		printf("%dº Nome: %s\n",i + 1, nome[i]);
		printf("Idade: %d\n",idade[i]);
		printf("Peso: %.2f\n",peso[i]);
		printf("Altura: %.2f\n",altura[i]);
	}
	
	for(i = 0; i < 5; i++){
		if(idade[i] == maiorIdade){
			printf("Nome: %s, maior idade: %d\n",nome[i], maiorIdade);
        }
        if(idade[i] == menorIdade){
			printf("Nome: %s, menor idade: %d\n",nome[i], menorIdade);
		}
        if(altura[i] == maiorAltura){
			printf("Nome: %s, maior altura: %.2f\n",nome[i],maiorAltura);
		}
        if(altura[i] == menorAltura){
			printf("Nome: %s, menor altura: %.2f\n",nome[i],menorAltura);
		} 
        if(peso[i] == maiorPeso){
			printf("Nome: %s, maior peso: %.2f\n",nome[i],maiorPeso);
		}
        if(peso[i] == menorPeso){
			printf("Nome: %s, menor peso: %.2f\n",nome[i],menorPeso);
		}
	}
	return 0;
}