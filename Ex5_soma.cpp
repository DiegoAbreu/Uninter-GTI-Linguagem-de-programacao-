/* Questão 1/5
Usando a linguagem de programação C/C++ escreva um programa de imprima a soma dos 10 primeiros números pares entre 1 e 100. Observe que seu programa deverá ter uma função para indicar se um número é par, imprimir os números selecionados e a soma solicitada.
*/
#include <stdio.h>
main()
{
int sel[10], i, j, k;
//função para indicar se um número é par int eh_par(int n) {
if( (n%2) == 0 ) return 1;
else
return 0;
}
//função para imprimir os números selecionados void imprime_sel() {
printf("Numeros selecionados:\n"); for (i = 0;i < 10; i++)
printf("%i\n",sel[i]);
}
//função para imprimir a soma solicitada void imprime_soma_sel() {
int soma = 0;
printf("Soma dos numeros selecionados:\n"); for (i = 0; i<10;i++)
soma = soma + sel[i]; printf("%i\n",soma);
}
k = 0; for(j=1;j<=100;j++) {
if (eh_par(j)==1){ sel[k] = j;
k++;
if (k==10)
break;
} }
imprime_sel(); printf("\n"); imprime_soma_sel();
}