/*C008. Fatorial
O fatorial de um número inteiro positivo N, denotado por N!, é definido como o produto dos inteiros
positivos menores ou iguais a N. Por exemplo 4! = 4 × 3 × 2 × 1 = 24.
Faça um programa que leia um número inteiro N e imprima o seu fatorial. Não utilize bibliotecas
matemáticas.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int fatorial=1;
    printf("Digite um numero para descobrir seu fatorial:");
    scanf("%d",&n);
    for(int i=n;i>1;i--){
        fatorial*=i;
        
    }
    printf("%d\n",fatorial);

 
}