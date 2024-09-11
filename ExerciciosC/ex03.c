/*C003. Sequências de X a Y e de Y a X
Faça um programa que leia dois números inteiros positivos X e Y e imprima todos os números de X até Y,
seguidos nos números de Y até X. Se X for maior que Y, imprima INVALIDO.

*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, y;
    printf("Digite um inteiro X:");
    scanf("%d", &x);
    printf("Digite um inteiro Y:");
    scanf("%d", &y);
    if (x < y){
        for (int i = x; i <= y; i++){
            printf("%d\n", i);
        }
        for (int i = y; i >= x; i--){
            printf("%d\n", i);
        }
    }else{
        printf("INVALIDO");
    }

    return 0;
}