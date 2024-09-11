/*C004. Soma de sequência
Faça um programa que leia dois números inteiros N e M e imprima a soma de todos os números entre eles
(inclua N e M na soma). Faça sua solução utilizando laço de repetição.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, m;
    int soma=0;
    printf("Digite um inteiro n:");
    scanf("%d", &n);
    printf("Digite um inteiro m:");
    scanf("%d", &m);
    for (int i = n; i <= m; i++){
            soma+=i;
    }
    printf("Soma: %d",soma);
       
    return 0;
}