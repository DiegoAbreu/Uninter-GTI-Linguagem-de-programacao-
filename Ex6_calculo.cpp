/* Usando a linguagem de programação C/C++ escreva um programa que contenha uma função que retorna o seguinte:
A função recebe 3 valores float e retorna o quadrado do 1o mais a soma dos outros dois. Observe que esta função deverá retornar um tipo float.
O seu programa deverá ter esta função, permitir a digitação dos números, e imprimir tanto os números
digitados quanto o resultado da função.
*/
#include <stdio.h>
main()
{
//função que recebe 3 valores float e retorna o quadrado do 1o mais a soma dos outros dois.
float formula(float n1, float n2, float n3) { return (n1*n1)+n2+n3;
}
float v1,v2,v3;
printf("\nInforme o primeiro numero:"); scanf("%f",&v1);
printf("\nInforme o segundo numero:"); scanf("%f",&v2);
printf("\nInforme o terceiro numero:"); scanf("%f",&v3);
printf("\n\nOs numeros digitados foram: %.2f , %.2f , %.2f",v1,v2,v3); printf("\nResultado da formula: %.2f", formula(v1,v2,v3));
}