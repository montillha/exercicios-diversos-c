/*C018. Multiplicação usando somas
Faça um programa que leia dois números inteiros positivos A e B e faça o cálculo de multiplicação de A e B usando apenas a operação de soma. Imprima o resultado ao final.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    int soma=a;
    printf("Digite o primeiro numero:");
    scanf("%d",&a);
    printf("Digite o segundo numero:");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        soma+=a;     
    }
    printf("%d",soma);


}