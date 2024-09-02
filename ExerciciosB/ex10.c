/*Sejam A, B e C os três lados de um triângulo. Faça um programa que leia o valor de três lados de um
triângulo A, B e C. Seu algoritmo deve informar se o triângulo é: Escaleno (todos os lados diferentes);
Isósceles (possui dois lados iguais); e Equilátero (todos os lados iguais); Não forma triângulo (quando a
soma de dois lados é menor que o terceiro lado).

*/
#include <stdio.h>
#include <stdlib.h>


int main(){
     float A, B, C;

    printf("Lado A: ");
    scanf("%f", &A);
    
    printf("Lado B: ");
    scanf("%f", &B);
    
    printf("Lado C: ");
    scanf("%f", &C);
    if (A + B < C || A + C < B || B + C < A) {
        printf("INVALIDO\n");
    } else if (A == B && B == C) {
        printf("EQUILATERO\n");  
    } else if (A == B || A == C || B == C) {
        printf("ISOSCELES\n");  // 
    } else {
        printf("ESCALENO\n"); 
    }
    
    return 0;

}