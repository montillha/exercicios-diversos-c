/*G018. Soma dos Fatoriais - Usando Makefile
Faça um programa que leia um número inteiro N e imprima a soma de todos os fatoriais entre 0 e N
(inclusive N). Não utilize bibliotecas matemáticas e resolva usando funções e Makefile.
*/
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(){
    char string[32];
    printf("Digite uma string:");
    scanf("%s",string);
    int tamanho=my_strlen(string);
    printf("Tamanho da string: %d ",tamanho);

}
