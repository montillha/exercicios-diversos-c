/*C026. Número da Ana
Ana gosta muito de matemática e de brincar com números. Ela definiu o conceito de "Número da Ana. Se
um número inteiro não negativo N é produto de três números inteiros consecutivos então N é um "Número
da Ana".
Faça um programa que leia um número inteiro não negativo N e imprima "S" se for um "Número da Ana" e
"N" caso contrário. Por exemplo, 120 é um "Número da Ana", pois é resultado da multiplicação 4 x 5 x 6.*/
#include <stdio.h>
#include <stdlib.h>
int conferir_num_ana( int n){
    int produto=1;
    int resultado=0;
    int num_atual=1;
    while(produto<=n){
        produto=(num_atual)*(num_atual+1)*(num_atual+2);
        if(produto==n){
            resultado =1;
            return resultado;
        }

        num_atual++;

    }
    return resultado;
}

int main() {
    int n;
    printf("inteiro:");
    scanf("%d", &n);
    
    int resultado=conferir_num_ana(n);
    if(resultado==1){
        printf("S\n");

    }else{
        printf("N\n");    
    }


    return 0;
}