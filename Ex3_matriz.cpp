/* Faça um programa que carregue:
Um vetor com oito posições com os nomes das lojas;
Um outro vetor com quatro posições com os nomes dos produtos;
Uma matriz com os preços de todos os produtos em cada loja.
O programa deve mostrar todas as relações (nome do produto – nome da loja) nas quais o preço não ultrapasse R$ 120,00. */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a,b;
	char loja[8][20];
	char produto[4][20];
	float preco[8][4];
		
	for (a=0;a<8;a++){
	
		printf("Insira o nome da loja %d: ",a+1);
		scanf("%s",&loja[a]);
	}
	
		for (b=0;b<4;b++){
			printf("Insira o nome do produto %d: ",b+1);
			scanf("%s",&produto[b]);
		
	}	

	for(a=0;a<8;a++){
			for(b=0;b<4;b++){
				printf("Insira o preco do produto %d na loja %s: ",b+1,loja[a]);
				scanf("%f",&preco[a][b]);
			}
	}
	

	
	for(a=0;a<8;a++)//if menor que 120.00
			for(b=0;b<4;b++)
				if(preco[a][b]<=120.00){
									
					printf("\nProduto %s - loja %s - %.2f\n",produto[b],loja[a], preco[a][b]);
				}
	
	return 0;
	system("pause");
}
