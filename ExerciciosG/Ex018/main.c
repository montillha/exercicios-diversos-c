/*G018. Soma dos Fatoriais - Usando Makefile
Faça um programa que leia um número inteiro N e imprima a soma de todos os fatoriais entre 0 e N
(inclusive N). Não utilize bibliotecas matemáticas e resolva usando funções e Makefile.
*/
#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"
int main(){
    int n;
    printf("Digite um inteiro:");
    scanf("%d",&n); 
    int somaFatorial=somar_fatoriais(n);
    printf("Soma dos fatorial ente 1 e %d: %d",n,somaFatorial);
}