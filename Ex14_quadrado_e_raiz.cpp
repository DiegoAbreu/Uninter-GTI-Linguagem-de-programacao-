/*Criar um programa que deixe entrar com dois números e imprimir o quadrado do menor número e a raiz do maior número, se for possível.*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
main ()
{
int num1, num2,resp1,resp2,maior,menor,quad=2;
printf("\n Digite um numero qualquer \n \n"); scanf ("%d", &num1);
printf("\n Digite outro numero qualquer \n \n"); scanf("%d", &num2);
if (num1<num2)
{ menor=pow(num1,quad); maior=sqrt(num2);
}
else
{ menor=pow(num2,quad); maior=sqrt(num1);
}
printf("\nO menor numero ao quadrado e %d ", menor); printf(", e a raiz quadrada do maior e %d\n\n", maior);
printf("-------------------------------------------------------------------\n"); system("pause");
}