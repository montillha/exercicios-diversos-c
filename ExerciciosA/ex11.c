/*A011. Salário com bônus
Faça um programa que leia o salário fixo de um vendedor e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 18% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.
*/
#include <stdio.h>
int main(){
    float salario,vendas,total;
    printf("Salário:");
    scanf("%f",&salario);
    printf("Total Vendas:");
    scanf("%f",&vendas);
    total=salario+(vendas*0.18);
    printf("Salário do Mês: %.2f",total);

    return 0;
}