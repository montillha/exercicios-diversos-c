/*C029. Número palíndromo
Faça um programa que leia um número inteiro não negativo N e imprima "S" se ele é palíndromo e "N" caso
contrário. Um número é palíndromo quando lido da esquerda para a direita é igual ao ser lido da direita
para a esquerda. Exemplos: 37173, 1221.
Obs: Faça seu programa utilizando apenas números inteiros. Não é permitido converter o número para
string.*/
#include <stdio.h>
#include <stdlib.h>
int conferir_palindromo(int n){
    int n_invertido=0;
    int atual=n;
    while(atual!=0){
        n_invertido = (n_invertido * 10) + (atual % 10); ;
        atual=atual/10;
    }
    if(n==n_invertido){
        return 1;
    }
    return 0;
}

int main() {
    int n;
    printf("inteiro:");
    scanf("%d", &n);
    int resultado=conferir_palindromo(n);
    if(resultado==1){
        printf("S\n");

    }else{
        printf("N\n");

    }

    return 0;
}