#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char produto[999][250];
	int venda = 0, quantidade[999], i, opcao;
	float valor[999], total, soma = 0;
	
	do{
	for(i = 0; i < 999; i++){
	printf("Escreva o nome do produto: ");
	gets(produto[i]);
	printf("Quantidade do produto: ");
	scanf("%d",&quantidade[i]);
	printf("Valor: ");
	scanf("%f",&valor[i]);
	venda++;
	
	soma += valor[i];
	
	printf("1 para adicionar uma venda. 2 para terminar a compra: ");
	scanf("%d",&opcao);
	
	if(opcao == 2){
        system("cls");
		printf("Total de vendas: %d\n",venda);
		for(i = 0; i < venda; i++){
		printf("%dº Produto: %s\n",i + 1,produto[i]);
		printf("Quantidade: %d\n",quantidade[i]);
		printf("Valor: %.2f\n",valor[i]);
	}
	printf("Total a pagar: %.2f",soma);
	}
	if(opcao != 1){
		break;
	}
	fflush(stdin);
}
}while(opcao == 1);
	return 0;
}