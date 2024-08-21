/*A010. Celsius para Fahrenheit
Faça um programa que leia uma temperatura em graus Celsius e converta e escreva o correspondente em graus Fahrenheit (pesquise como essa conversão é feita).
*/
#include <stdio.h>
int main(){
    float celsius,fahrenheit;
    printf(" Graus Celsius:");
    scanf("%f",&celsius);
    fahrenheit = (celsius*1.8)+32;
    printf("Fahrenheit: %.2f",fahrenheit);
    return 0;
}