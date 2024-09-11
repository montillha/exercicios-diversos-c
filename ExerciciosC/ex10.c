/*C010. Máximo Divisor Comum
Faça um programa que leia dois números inteiros e imprima o máximo divisor comum (MDC) entre eles.
Dica: pesquise sobre o algoritmo de euclides.
*/
#include <stdio.h>
#include <stdlib.h>
int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Digite o primeiro numero:");
    scanf("%d",&num1);
    printf("Digite o segundo numero:");
    scanf("%d",&num2);
    while(num2!=0){
        int restoDivisao=num1%num2;
        num1=num2;
        num2=restoDivisao;

    }

    printf("MDC: %d\n", num1);

    return 0;
}