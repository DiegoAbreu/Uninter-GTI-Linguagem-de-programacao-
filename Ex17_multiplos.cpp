/*Elabore um programa que leia um número da entrada e imprima os múltiplos de 3 e 5 ao mesmo tempo no intervalo de 1 a num. Exemplo: 2 Número lido: 50
Saída: 15 30 45 */
#include <string.h> 
#include <stdio.h> 
#include <math.h> 
main (){
int num=0,i;
printf("Digite um numero inteiro:\n"); scanf ("%i",&num); for(i=1;i<=num;i++){
if(i%3==0 && i%5==0)
printf("%i\n",i); }
return 0; }