/*Usando a linguagem de programação C/C++ escreva um programa que recebe uma string de até 50 caracteres,
um carctere específico e devolve o número de ocorrências deste caractere na string digitada.
Não esqueça que o programa deverá imprimir a string, o carctere e o número de ocorrências.
*/
#include <stdio.h>
main() {
char texto[50], c; int i,ocor;
printf("Informe uma string de ate 50 caracteres:"); gets(texto);
printf("\nInforme o caracter para pesquisar:"); scanf("%c",&c);
ocor = 0;
for (i=0;i<50;i++){
if (texto[i] == c) { ocor++;
} }
printf("\nString digitada: %s", texto);
printf("\nCaracter digitado: %c", c);
printf("\nNumero de ocorrencias do caracter na string: %d",ocor);
}