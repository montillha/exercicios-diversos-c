/*B003. Eleitores
Faça um programa que leia a idade de um eleitor e imprima se ele é eleitor facultativo (entre 16 e 17 anos),
eleitor obrigatório (entre 18 a 69) ou dispensado (acima de 70 ou menor que 16)*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if (idade < 16 || idade>=70) {
        printf("DISPENSADO\n");
    } else if (idade >= 16 && idade <= 17) {
        printf("FACULTATIVO\n");
    } else {
        printf("OBRIGATORIO\n");
    } 

    return 0;
}