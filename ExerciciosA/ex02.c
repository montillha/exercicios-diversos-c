/*A002. Soma, subtração e multiplicação de dois números inteiros
Faça um programa que leia dois números inteiros e imprima o valor da soma deles, a diferença do primeiro pro segundo e a multiplicação entre eles.
*/
#include <stdio.h>
int main(){
    int n1,n2;
    printf("Digite dois números:");
    scanf("%d%d",&n1,&n2);
    int soma=n1+n2;
    int diferenca=n1-n2;
    int mult=n1*n2;
    printf("Soma: %d \n",soma);
    printf("Diferença: %d \n",diferenca);
    printf("Multiplicação: %d \n",mult);

    return 0;
}
