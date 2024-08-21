/*Em épocas de crise, comerciantes estão oferecendo descontos para aumentarem suas vendas. Faça um programa que leia o valor total da compra e um valor de desconto (de 0 a 100, representando a porcentagem de desconto). O programa de escrever o valor da compra com o desconto aplicado. Escreva a saída com duas casas decimais.*/
#include <stdio.h>
int main(){
    float valorCompra;
    int desconto;

    printf("Valor da compra:");
    scanf("%f",&valorCompra);

    printf("Valor desconto:");
    scanf("%d",&desconto);

    float total = valorCompra*(100-desconto)/100;
    printf("Valor Total: %.2f \n",total);

    return 0;
}