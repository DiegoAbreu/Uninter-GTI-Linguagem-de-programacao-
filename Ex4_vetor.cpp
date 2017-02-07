/*Faça um programa que efetue reserva de passagens aéreas de uma certa companhia. O programa deverá ler 
informações sobre os voos (número, origem e destino) juntamente com o número de lugares disponíveis para 
12 aviões ( um vetor para cada um desses dados). 
O programa deverá apresentar um menu com as seguintes opções:	
  Consultar
  Efetuar reserva
  Sair
Quando a opção escolhida for Efetuar reserva deverá ser perguntado o número do vôo no qual a pessoa deseja viajar. O programa deverá dar as seguintes respostas:
  Reserva confirmada –c aso exista o vôo e lugar disponível, dando baixa nos lugares disponíveis.
  Vôo lotado – caso não exista lugar disponível nesse vôo
  Vôo inexistente – caso o código do vôo não exista
A opção sair é a única que permite sair do programa. Sendo assim, após cada operação de consulta ou reserva o programa volta ao 
menu principal.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[12]={1,2,3,4,5,6,7,8,9,10,11,12},lugares[12]={0,0,0,0,0,0,0,0,0,0,1,2},o,a,c,c1;
	char origem[12][15]={"cuiaba","moscow","tokio","sao paulo","rio","marrocos","curitiba","sao paulo","nova iorque","okinawa","roma","vietnam"};
	char destino[12][15]={"salvador","curitiba","veneza", "cuiaba","moscow","tokio","sao paulo","rio de janeiro","marrocos","nova iorque","okinawa","registro"};
	
	INICIO:
	printf("\n\nEscolha uma opcao abaixo: ");
	printf("\n\n1 Consultar\n2 Efetuar reserva\n3 Sair ");
	printf("\n\nDigite a opcao: ");
	scanf("%d",&o);
	
	
	switch (o){
		
		case 1:
		
			c=1;
			break;
		
		case 2:
		
			c=2;
			break;
		
		case 3:
		
			exit (EXIT_FAILURE);
			break;	
	}
	
	
	switch (c){
	
	case 1:
		printf("\n 4 Por numero de voo");
		printf("\n 5 Por origem");	
		printf("\n 6 Por destino");
		printf("\n\n Digite a opcao: ");
		scanf("%d",&c);
		
	break;
	case 2:
		
		printf("\n\n Informe o numero do voo: ");
		scanf("%d",&c1);
		

	}
	
	if(c==4){
		printf("\n");
			for (a=0;a<=11;a++){
			
				printf(" %d",num[a]);
			
			}
		printf("\n\n");
		goto INICIO;
	}
	
	
		if(c==5){
			printf("\n");	
				for (a=0;a<=11;a++){
			
					printf(" %s ",origem[a]);
			
				}	
			printf("\n\n");
			goto INICIO;
		}
		
			if(c==6){
				printf("\n");
					for (a=0;a<=11;a++){
				
						printf(" %s",destino[a]);
				
					}
				printf("\n\n");
				goto INICIO;
			}
			
			
			for (a=0;a<=11;a++){//so confere 1 voo
				
				if(c1!=num[a]){
					printf("\n  Voo inexistente");
					goto INICIO;
				}else{
					 if(lugares[a]>0){
					 	printf("\n  Reserva confirmada");
						goto INICIO;
					}else{
						printf("\n  Voo lotado");
						goto INICIO;
					}
				}
		
			}
		
	

return 0;	
}
