/*C016. Soma de números primos
Faça um programa que leia um número inteiro N e imprima a soma de todos os números primos entre 1 e N (inclusive N).*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,divisores;
    int soma=0;
    printf("Digite um inteiro:");
    scanf("%d",&n);
    divisores=0;
    for(int i=1;i<=n;i++){
        divisores=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
               divisores+=1;
            }
        }
        if(divisores==2){
            soma+=i;
        }
    }
    printf("Soma dos primos ente 1 e %d: %d",n,soma);


}