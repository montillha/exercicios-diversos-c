/*A012. Pintando a parede
Sabe-se que uma lata de tinta tem um custo C e é capaz de pintar uma área de M metros quadrados. Faça um programa que leia a largura L, a altura A de uma parede, o valor C de uma lata de tinta e o rendimento M desta lata. Após isso, imprima quantas latas de tintas são necessárias e o custo total (com duas casas decimais). Assuma que não é possível comprar lata de tinta fracionada*/
#include <stdio.h>
#include <math.h>
int main(){
    float largura,altura,valor,rendimento,area,total_custo;
    int total_latas;

    printf("Digite a largura da parede:");
    scanf("%f",&largura);

    printf("Digite a altura da parede:");
    scanf("%f",&altura);
    printf("Digite o valor da tinta:");
    scanf("%f",&valor);
    printf("Digite o rendimento da tinta:");
    scanf("%f",&rendimento);

    area=largura*altura;
    total_latas=ceil(area/rendimento);
    total_custo=valor*total_latas;
    
    printf("Total latas: %d \n",total_latas);
    printf("Total custo: %.2f",total_custo);
    return 0;
}
