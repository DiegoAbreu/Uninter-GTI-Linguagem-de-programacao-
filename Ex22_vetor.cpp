/*Suponha três vetores de 30 elementos cada, contendo: nome, endereço, telefonema. Fazer um programa que se possa buscar pelo nome e imprimir todos os dados.*/
#include <string.h> 
#include<stdlib.h> 
#include<stdio.h> 
#define num 2 
main()
{
int i=0,fone[num]={0};
char nome[num+1][30]={{0},{0}}, endereco[num][30]={{0},{0}};
printf("****************Cadastro****************\n\n"); 
for (i=0;i<num;i++)
{
printf("Digite o nome %i:\n",i+1);
scanf("%s", nome[i]);
printf("digite o endereco do(a) %s:\n",nome[i]); 
scanf("%s", endereco[i]);
printf("Digite o telefone do(a) %s:\n\n", nome[i]);
scanf("%i", &fone[i]); }
system("clear||cls");
printf("Digite o nome para pesquisar!\n");
scanf("%s", nome[num]); 
system ("clear||cls");
for (i=0;i<num;i++){ 
    if(!(stricmp(nome[num],nome[i])))
printf("%s:\nEndereco: %s\nTelefone: %i\n\n", nome[i], endereco[i], fone[i]);
}
return 0; }
