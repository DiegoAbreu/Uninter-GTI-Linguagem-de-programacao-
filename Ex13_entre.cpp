/*Construir um programa que indique se o número digitado esta compreendido entre 20 e 90 ou não.*/
#include <stdlib.h>
#include <stdio.h> 
#include <string.h> 
#include <math.h> 
main ()
{
int num1;
printf("\n Digite um numero qualquer \n \n");
scanf ("%d", &num1); if (num1>=20 && num1<=90)
printf("\n O numero esta entre 20 e 90 \n\n"); else
printf("\n O numero digitado esta fora dos valores 20 e 90 \n\n");
system("pause");
}