/*E001. Imprimindo caracteres de uma palavra
Faça um programa que leia uma string S, composta apenas por uma palavra. Seu programa deve imprimir os caracteres de S na ordem que aparecem em S, separados por espaço.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    char palavra[256];
    printf("Digite uma string:");
    scanf("%s",palavra);
    int i=0;
    while(palavra[i]!='\0'){
        printf("%c ",palavra[i]);
        i++;
    }

    return 0;
}