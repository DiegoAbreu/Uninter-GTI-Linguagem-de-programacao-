/* Utilizando a linguagem de programação C/C++ o aluno deverá escrever um programa que receba uma matriz 3X3 e imprima tanto a matriz digitada quanto a sua inversa em uma janela de console.
*/
#include <stdio.h>
main() {
int i,j,k,l,m,n;
float det;
int m1[3][3], m2[3][3], aux[2][2];
printf("Informa a matriz 3x3:\n");
for (i=0;i<3;i++) {
for (j=0;j<3;j++) {
printf("linha %d - coluna %d : ",i+1,j+1);
scanf("%d",&m1[i][j]); }
}
printf("\nMatriz informada: \n");
for (i=0;i<3;i++) {
for (j=0;j<3;j++) {
printf("%d ",m1[i][j]); }
printf("\n"); }
//calcula a matriz inversa usando matriz adjunta
//Passo 1: calculo do determinante por Regra de Sarrus
det = (m1[0][0]*m1[1][1]*m1[2][2] + m1[0][1]*m1[1][2]*m1[2][0] + m1[0][2]*m1[1]
[0]*m1[2][1]);
det = det - (m1[0][2]*m1[1][1]*m1[2][0]+m1[0][0]*m1[1][2]*m1[2][1]+m1[0][1]*m1[1]
[0]*m1[2][2]);
if (det == 0) {
printf("\nO determinante desta matriz e zero, entao a matriz nao pode ser
invertida \n "); }
else {
//Passo 2: matriz de cofatores
for (i=0;i<3;i++) {
for (j=0;j<3;j++) {
m=0;
for (k=0;k<3;k++) {
n=0;
for (l=0;l<3;l++) {
if ((k!=i)&&(l!=j)) {
aux[m][n] = m1[k][l]; n++;
} 
}
if (k!=i) m++;
}
m2[i][j] = ((aux[0][0]*aux[1][1]) - (aux[1][0]*aux[0][1])); if ((i+1+j+1)%2!=0)
m2[i][j] = -1 * m2[i][j]; }
}
printf("\nMatriz Inversa: \n"); for (i=0;i<3;i++) {
for (j=0;j<3;j++) {
printf("%.2f ", (1/det) * m2[i][j]);
}
printf("\n"); }
}
}