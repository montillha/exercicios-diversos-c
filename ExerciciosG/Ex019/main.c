#include <stdio.h>
#include <stdlib.h>
/*G019. Busca número - Usando Makefile
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida leia um
número inteiro X. Ao fim escreva a posição no vetor em que o valor X foi encontrado no vetor. Se X não
estiver no vetor, escrever -1.
*/
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
int main() {
    int n,x;
    printf("digite tamanho da lista:" );
    scanf("%d",&n);
    int numeros[n];
    preencher_vetor(n,numeros);
    printf("digite o inteiro que deseja achar:" );
    scanf("%d",&x);
    int indice_x= achar_x(n,x,numeros);
    printf("%d\n",indice_x);
}