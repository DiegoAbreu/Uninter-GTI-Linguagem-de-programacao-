/*Entrar com dados para um vetor VET do tipo inteiro com 20m posições, onde podem existir vários elementos repetidos. Gere o vetor VET1 que também será ordenado e terá somente os elementos do vetor VET que não são repetidos.*/
#include <stdio.h>
#include <stdlib.h>
//entra com dados em vetor e gera outro vetor apenas com dados nao repetidos 
main (){
int i=0,c,j=0,teste=0;
float num[20]={0},comp[20]={0},aux; //recebe os 20 numeros aqui
for (i=0;i<=20;i++) {
printf("\nDigite os 20 Numeros %i:\n ",i+1); scanf("%f", &num[i]);
}
//ordena os numeros em modo crescente do{
teste=0;
for (i=1;i<20;i++){
if (num[i-1]>num[i]){
} }
j=0;
aux=num[i-1]; num[i-1]=num[i]; 
num[i]=aux; teste+=1;
if(teste==0) j=1;
}while(j==0);
//exclui repetidos comp[0]=num[0]; j=0;
for(i=1;i<20;i++) {
if (num[i-1]!=num[i]) {
j++;
comp[j]=num[i]; }
}
//resultado final system("clear||cls");
i=0; printf("%.2f\n",comp[0]); 
for (i=1;i<20;i++){
if(comp[i]>comp[i-1]) printf("%.2f\n",comp[i]); 
else
i=20;
}
return 0;
}
