/*Faça um programa que carregue uma matriz 2x2, calcule e mostre uma matriz resultante que será a matriz digitada 
multiplicada pelo maior elemento da matriz.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[2][2];
	int i,j,maior;
	
	for (j=0;j<2;j++){
	
		for (i=0;i<2;i++){
		
			printf("Insira o numero: ");
			scanf("%d",&matriz[i][j]);
			
			if(maior<matriz[i][j])
			maior=matriz[i][j];
		}
	}
	for (i=0;i<2;i++){
	
		printf("\n\nLinha %d: ",i+1);
		for (j=0;j<2;j++){
		
			
			printf(" %d", matriz[i][j]);
		}
	}
	
	printf("\n\nMaior elemento: %d\n\n", maior);
	
	for (i=0;i<2;i++){
	
		printf(" \nLinha %d: ",i+1);
		
		for (j=0;j<2;j++)
		
			printf(" \n%d\n",(matriz[i][j]*maior));
			
	}
  	system("pause");		
    return 0;
       
}
