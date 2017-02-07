/*Faça um programa que receba a quantidade de peças vendidas por vendedor e armazene essas quantidades em um vetor.  
Receba também o preço da peça vendida de cada vendedor e armazene esses preços em outro vetor.
Existem apenas dez vendedores e cada vendedor pode vender apenas um tipo de peça, isto é, para cada vendedor existe apenas um preço. 
Calcule e mostre a quantidade total de peças vendidas por todos os vendedores e para cada vendedor calcule e mostre o valor total da venda,
isto é, a quantidade de peças e preço da peça.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,t[10],to=0.0;
	float preco[10],qtde[10];
	
	for(a=0;a<=9;a++)
    {
		printf("\n\nNumero de pecas vendidas pelo vendedor/tipo %.0f: ", a + 1.0);
		scanf("%f",&qtde[a]);	
		printf("\nPreco da peca %.0f: ",a + 1.0);
		scanf("%f",&preco[a]);
		
		to=qtde[a]+to;
	}
		printf("\n\nTotal de pecas vendidas: %.d",to);
			
		for(a=0;a<=9;a++){
			printf("\n\nTotal da venda %.0f: %.2f\n\n",a+1.0,qtde[a]*preco[a]);
		}
	system("pause");
	return 0;
}

