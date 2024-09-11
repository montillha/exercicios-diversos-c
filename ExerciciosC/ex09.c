/*C009. Sequência de Fibonacci
Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de
coelhos através de uma sequência de números naturais que passou a ser conhecida como Sequência de
Fibonacci. O n-ésimo número da sequência de Fibonacci Fn é dado pela seguinte fórmula: Fi = Fi-1 + Fi-2. O
resultado é a sequência {1, 1, 2, 3, 5, 8, 13, 21, …}.
Faça um programa que leia um número inteiro positivo N e imprima os N primeiros números da sequência
de Fibonacci, todos em uma linha separados por espaço.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int f2=1;
    int f1=1;
    int atual=1;
    printf("Digite um numero:");
    scanf("%d",&n);
    printf("1 1 ");
    for(int i=1;i<=n-2;i++){
        atual=f2+f1;
        printf("%d ",atual);
        f2=f1;
        f1=atual; 
        
    }

}