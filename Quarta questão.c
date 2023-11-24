#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero[5], i, impar = 0, par = 0, maior = 0, menor = 99999, negativo = 0, somaPar = 0, soma = 0;
	float mediaPar, media;
	
	for(i = 0; i < 5; i++){
		printf("Digite um número: ");
		scanf("%d",&numero[i]);
		 
		maior = maior > numero[i] ? maior : numero[i];
		menor = menor < numero[i] ? menor : numero[i];
		
		soma += numero[i];
		
		if(numero[i] < 0){
			negativo++;
		}
		
		if(numero[i] % 2 != 0){
			impar++;
		} else {
			par++;
			somaPar += numero[i];
		}
	}
	media = (float) soma / i;
	mediaPar = (float) somaPar / par;
	
		printf("Quantidade de numeros impares: %d\n",impar);
		printf("Quantidade de numeros negativos: %d\n",negativo);
		printf("Maior numero: %d\n",maior);
		printf("Menor numero: %d\n",menor);
		printf("Media de numeros pares: %.1f\n",mediaPar);
		printf("Media dos numeros inseridos: %.1f\n",media);
			
	return 0;
}
