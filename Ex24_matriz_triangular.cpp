/*Faça um programa que deixe entrar com valores para uma matriz de ordem de cinco e verificar se ela é ou não uma matriz triangular superior.*/
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#define num 3 
main()
{
float matriz[num][num]; 
int i=0,j=0,x=0; 
for(i=0;i<num;i++)
{
for (j=0;j<num;j++){
printf("Digite o valor da linha: %i coluna: %i\n",
i+1,j+1);
} }
scanf("%f", &matriz[i][j]);
if ((i-j>0 && matriz[i][j]!=0)) x++;
else if ((i-j<=0 && matriz[i][j]==0)) x++;
if (x>0)
printf ("Nao e matriz triangular superior\n");
else
printf ("E uma matriz triangular superior\n"); for (i=0;i<num;i++)//mostra a matriz
{
{
for (j=0;j<num;j++) {
printf("%.1f",matriz[i][j]); }
printf("\n"); }
}
return 0;
}