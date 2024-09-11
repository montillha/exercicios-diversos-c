/*C001.Sequência de1 a N
 Faça um programa que leia um número inteiro positivo N e imprima todos os números de 1 até N.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Digite um inteiro:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}