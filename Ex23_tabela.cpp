/* A viação José Maria Rodrigues tem na rodoviária de Rio Novo uma tabela contendo os horários de partidas dos ônibus para Juiz de Fora nos sete dias da semana. Criar um programa que possa armazenar esses horários e os horários do dia quando forem solicitados pelo funcionário, sabendo-se que, no máximo, são dez horários.*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define segunda ("08:00 e 09:00 hs.") 
#define terca ("08:00 hs.")
#define quarta ("08:00 hs.")
#define quinta ("09:00 hs.")
#define sexta ("10:00 e 11:00 hs.") 
#define sabado ("08:00 e 12:00 hs.") 
#define domingo ("11:00 hs.") 
main(){
int i,sem=0;
printf("\n\t***Digite o numero correspondente a semana :\n \n 1-Domingo \n 2- Segunda \n 3-terca \n 4-Quarta \n 5-Quinta \n 6-Sexta \n 7-Sabado \n\n");
scanf("%d", &sem);
switch (sem) {
case 1 :
printf("Horario disponivel para Domingo : %s", domingo ); break;
case 2 :
printf("Horario disponivel para Segunda-feira : %s", segunda); break;
case 3 :
printf("Horario disponivel para Terca-feira : %s", terca); break;
case 4 :
printf("Horario disponivel para Quarta-feira : %s", quarta); break;
case 5 :
printf("Horario disponivel para Quinta-feira : %s", quinta);
break;
case 6 :
printf("Horario disponivel para Sexta-feira : %s", sexta); break;
case 7 :
printf("Horario disponivel para Sabado : %s", sabado); break;
default:
printf("Numero nao corresponde ao menu indicado");
} return 0;
system("pause");
}