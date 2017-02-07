/*Faça um programa que entre com dez números (positivos ou negativos) e imprima o maior e menor número da lista.*/
#include <stdio.h>
#include <stdlib.h>
//Entrar com numeros positivos ou negativos e listar o maior e o menor 
main ()
{
int i,num;
float num1,maior, menor;
printf("\n Digite quantos numeros serao comparados:\n"); scanf("%d", &num);
num=num-1;
printf("\n Digite o primeiro numero:\n"); scanf("%f", &num1);
maior=num1;
menor=num1;
for (i=0;i<num;i++) {
printf("\n Digite o proximo numero:\n"); scanf("%f", &num1);
if (num1>maior)
maior=num1; else
if(num1<menor)
menor=num1; }
printf("\t\n *** O maior numero e %1.f", maior); printf(", e o menor numero e %1.f\n\n", menor); printf("------------------------------------------\n"); system("pause");
}