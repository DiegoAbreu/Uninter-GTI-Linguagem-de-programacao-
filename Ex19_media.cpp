/*Num campeonato de volleyball, se inscreveram 30 países. Sabendo-se que na lista oficial de cada país consta, além de outros dados, peso e idade de 12 jogadores, crie um programa que apresente as seguintes informações:
- O peso médio e a idade média de cada um dos times;
- O peso médio e a idade média de todos os participantes. */
#include <stdio.h>
#include <stdlib.h>
//calcular a idade e o peso medio dos times e participantes 
main ()
{
int i,x;
float peso,totpeso, somapeso,id,somaid,totid;
totpeso=0; totid=0;
for (i=1;i<=2;i++) {
somapeso=0; somaid=0;
for(x=1;x<=2;x++) {
printf("\nDigite o peso: "); 
scanf("%f", &peso); 
printf("\nDigite a idade: "); 
scanf("%f", &id); 
somapeso=somapeso + peso; 
somaid=somaid + id;
}
printf("\nO peso medio do time %.2f\n\n", somapeso); 
printf("\nA idade media do time %.2f\n\n", somaid);
totpeso=totpeso + somaid;
totid=totid + somaid; 
}
printf("\nO peso medio de todos os participantes %.2f\n\n", totpeso/360);
printf("\nA idade media de todos os participantes %.2f\n\n", totid/360); 
printf("\n");
system("pause"); 
}