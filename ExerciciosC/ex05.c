/*C005. Somas de sequência digitada
Faça um programa que leia uma sequência de números inteiros do usuário até que ele digite o valor zero.
Quando o valor zero for digitado, o programa deve imprimir o resultado em três linhas: 1ª linha) Soma dos
valores pares da sequência; 2ª linha) Soma dos valores ímpares da sequência; 3ª linha) soma de todos os
valores da sequência*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int somaTotal;
    int somaPares=0;
    int somaImpares=0;
    int num;
    printf("Digite um numero:");
    scanf("%d",&num);
    while(num!=0){
        if(num%2==0){
            somaPares+=num;
        }else{
            somaImpares+=num;
        }
        printf("Digite um numero:");
        scanf("%d",&num);
    }
    somaTotal=somaImpares+somaPares;
    printf("Soma dos Pares: %d\n",somaPares);
    printf("Soma dos Impares: %d\n",somaImpares);
    printf("Soma Total: %d\n",somaTotal);

 
}