/*Questão 7. Desenvolva um programa que calcule e imprima o valor de bn . O valor de n deverá ser maior do que 1 e inteiro e o valor de b maior ou igual a 2 e inteiro.*/
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
main () {
int base,exp,res;
printf("\nCalcular uma base elevada a um exponte\n"); printf("\nDigite a Base\n");
scanf("%d", &base);
printf("\nDigite o Expoente\n");
scanf("%d", &exp);
res=pow(base,exp);
if (base>1&&exp>=2) printf("\nResultado\n\n%d", res);
else
printf("\nValores invalidos\n"); return(0);
system("pause"); }