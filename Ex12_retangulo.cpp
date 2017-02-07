/*Faça um programa no qual se possa inserir a base e altura de um retângulo e imprima a seguinte tela:
- Perímetro: ;
- Área: ;
- Diagonal: ;*/
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 
#include <math.h> 
main ()
{
float base, altura, perimetro, area, diagonal;
printf("\n Digite a base do retangulo em metros \n \n");
scanf ("%f", &base);
printf("\n Digite a altura do retangulo em metros \n \n");
scanf ("%f", &altura);
area = (base*altura);
perimetro = ((base*2)+(altura*2));
diagonal = sqrt(2* area);
printf("\n A area do retangulo e %.1f ", area);
printf("metros\n\n");
printf("\n O perimetro a do retangulo e %.1f ", perimetro); printf("metros\n\n");
printf("\n A diagonal do retangulo e %.1f ", diagonal); printf("metros\n\n"); 
printf("\n-----------------------------------------------------------------------\n"); 
system("pause");
}