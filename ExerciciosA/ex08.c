/*A008. Hipotenusa
Faça um programa que leia o valor dos catetos de um triângulo retângulo e calcule a hipotenusa, de acordo com o Teorema de Pitágoras. Pesquise como extrar a raiz quadrada de um número.
*/
#include <stdio.h>
#include <math.h>
int main(){
    float catetoO,catetoA;
    printf("Cateto Oposto: ");
    scanf("%f",&catetoO);

    printf("Cateto Adjacente: ");
    scanf("%f",&catetoA);

    float hipotenusa =sqrt((catetoO*catetoO)+(catetoA*catetoA));
    printf("Hipotenusa: %.2f \n",hipotenusa);
    return 0;
}