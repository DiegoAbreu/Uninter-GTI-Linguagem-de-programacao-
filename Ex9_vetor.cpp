/* Usando a linguagem de programação C/C++ escreva um programa que preenche um vetor de inteiros
com 20 posições de números maiores ou iguais a 10 e menores que 100, e imprima o maior número
armazenado neste vetor. Observe que, sempre que o usuário digitar um número fora do intervalo
permitido o programa deverá solicitar outro número até que o vetor esteja preenchido. Observe
também que o seu programa deverá imprimir, além do maior número armazenado, o vetor contendo
os números digitados.
*/
#include <stdio.h>
main() {
int vetor[20], i, maior = 0;
for(i=0;i<20;i++) {
printf("\nInforme o valor da posicao %d do vetor:", i+1);
scanf("%d",&vetor[i]);
if ((vetor[i] < 10) || (vetor[i] >=100)) {
printf("\nValor Invalido para a posicao %d !\n", i+1);
i--; }
else {
if (vetor[i]>maior) {
maior = vetor[i]; }
} }
printf("\nVetor digitado:"); for(i=0;i<20;i++) {
printf("\nvetor[%d]:%d",i,vetor[i]); }
printf("\n\nMaior valor digitado: %d",maior); }