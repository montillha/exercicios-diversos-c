/*C015. Número primo
Na matemática, um número primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
Faça um programa que leia um número inteiro positivo N e imprima 1 se ele for primo e 0 caso contrário.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int inteiro,divisores,resultado;
    printf("Digite um inteiro:");
    scanf("%d",&inteiro);
    divisores=0;
    for(int i=1;i<=inteiro;i++){
        if(inteiro%i==0){
            divisores+=1;
        }
    }
    if(divisores>2){
        resultado=0;
        
    }else{
        resultado=1;
    }
    printf("%d",resultado);


}