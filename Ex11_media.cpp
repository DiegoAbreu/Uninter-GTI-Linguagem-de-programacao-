/* Faça um programa que imprima a média aritmética entre os números 8, 9 e 7.*/
#include <stdlib.h>
#include <stdio.h> 
#include <string.h> 
main ()
{
float num1, num2, num3, media;
printf("\n Digite o primeiro numero \n \n \n");
scanf ("%f", &num1);
printf("\n Digite o segundo numero \n \n \n");
scanf ("%f", &num2);
printf("\n Digite o terceiro numero \n \n \n");
scanf ("%f", &num3);
media = (num1 +num2 + num3)/3;
printf("\n A media dos numeros e %.1f \n\n\n" , media);
system("pause"); }