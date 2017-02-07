/*A turma de Linguagem de Programação, por ter muitos alunos, será dividida em dias de provas. Após um estudo feito pelo coordenador, decidiu-se dividi- la em três grupos. Fazer um programa que leia o nome do aluno e indique a sala em que ele deverá fazer as provas, tendo em vista a tabela a seguir e sabendo-se que todas as salas encontram no bloco F:
A – K: sala 101
L – N: sala 102
O – Z: sala 103 */
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include<ctype.h> 
main (){
char aluno[30]; int i;
for (i=0;i<=1;i++){
printf("\n\nDigite o nome do aluno\n"); scanf("%s", aluno,i); aluno[0]=toupper(aluno[0]);
if (aluno[0]=='A' || aluno[0]=='B' || aluno[0]=='C' || aluno[0]=='D' || aluno[0]=='D' || aluno[0]=='E' ||
aluno[0]=='F' || aluno[0]=='G' || aluno[0]=='H' || aluno[0]=='I' || aluno[0]=='J' || aluno[0]=='K')
printf("Aluno(a) %s faz a prova na sala 101\n", aluno); else if (aluno[0]=='L' || aluno[0]=='M' || aluno[0]=='N')
printf("Aluno(a) %s faz a prova na sala 102\n", aluno);
else if (aluno[0]=='O' || aluno[0]=='P' || aluno[0]=='Q' || aluno[0]=='R' || aluno[0]=='S' || aluno[0]=='T' ||
aluno[0]=='U' || aluno[0]=='V' || aluno[0]=='W' || aluno[0]=='X' || aluno[0]=='Y' || aluno[0]=='Z')
printf("Aluno(a) %s faz a prova na sala 103\n", aluno);
else
printf("\nO caractere digitado nabo corresponde a um nome\n\n"); return 0;
system("pause");
} 
}