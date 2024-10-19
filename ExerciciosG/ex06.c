/*G006. Tamanho da string
Faça um programa que leia uma string S e imprima a quantidade de caracteres de S. Não é permitido
utilizar funções de string.h.*/
#include <stdio.h>
#include <stdlib.h>
int my_strlen(char str[]) {
    int tamanho=0;
    int i=0;
    while(str[i]!='\0'){
        tamanho++;
        i++;
    }
    return tamanho;
}
int main(){
    char string[32];
    printf("Digite uma string:");
    scanf("%s",string);
    int tamanho=my_strlen(string);
    printf("Tamanho da string: %d ",tamanho);

}
