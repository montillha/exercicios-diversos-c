/*C027. Número perfeito
Faça um programa que leia um número inteiro positivo N e imprima "S" se for um número perfeito e "N"
caso contrário. Um número é perfeito se for igual à soma de seus divisores positivos diferentes de N. Por
exemplo, 6 é perfeito, pois 1 + 2 + 3 = 6.
*/
#include <stdio.h>
#include <stdlib.h>
int conferir_num_perfeito( int n){
    int soma=1;
    int resultado=0;
    int num_atual=1;
    while(soma<=n){
        soma=(num_atual)+(num_atual+1)+(num_atual+2);
        if(soma==n){
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
    
    int resultado=conferir_num_perfeito(n);
    if(resultado==1){
        printf("S\n");

    }else{
        printf("N\n");    
    }


    return 0;
}