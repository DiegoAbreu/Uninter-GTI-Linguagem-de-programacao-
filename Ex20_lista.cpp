/*Armazenar dez nomes em um vetor NOME e imprimir uma listagem numerada e ordenada.*/
#include <stdlib.h> 
#include <string.h> 
#include <stdio.h> 
#define quant 4 
main (){
int i;
int z;
char nome[quant]; z=1;
for (i=0;i<quant;i++){
printf("\n\n\tDigite o nome %d :",z);
z++;
scanf ("%s", nome,i); 
system("clear||cls");
}
z=1;
printf("\n\n\t***Lista com os nomes***\n\n");
for (i=0;i<quant;i++){
printf("%d - ",z);
z++;
printf("%s\n", &nome[i]);
}
printf("\n_______________________________________\n"); 
system("pause");
}