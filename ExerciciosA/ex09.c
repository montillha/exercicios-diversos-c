/*Faça um programa que leia três números reais A, B e C de uma equação do segundo grau, considerando: Ax^2 + Bx + C. Seu programa deve calcular e imprimir as as raízes da equação. Assuma que delta sempre será positivo.*/
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    printf("Digite os valores:");
    scanf("%d%d%d",&a,&b,&c);
    int delta = (b*b)- 4*a*c;
    float raiz1=(-b+sqrt(delta))/2*a;
    float raiz2=(-b-sqrt(delta))/2*a;

    printf("Raiz 1: %.2f \n",raiz1);
    printf("Raiz 2: %.2f \n",raiz2);
    return 0;

}
