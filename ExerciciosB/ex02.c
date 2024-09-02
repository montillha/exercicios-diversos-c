/*B002. Radar
A avenida principal da cidade de Algoritmopolis possui limite de velocidade de L km/h. Se o motorista
ultrapassar essa velocidade, é aplicado uma multa de R$ M, mais R$ A por cada km acima do limite. Faça
um programa que leia o limite L, o valor da multa M, o valor adicional A e a velocidade V captada pelo radar
e informe o valor total da multa. Considere L e V sempre como números inteiros. Apresente a resposta com
duas casas decimais*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int L,V;
    float M,A;
    printf("Limite de velocidade maxima permitida:");
    scanf("%d",&L);
    printf("Valor da Multa:");
    scanf("%f",&M);
    printf("Valor Adicional:");
    scanf("%f",&A);
    printf("Valor da velocidade captada:");
    scanf("%d",&V);
    float valorMulta=0;
    if(V>L){
        valorMulta=M+((V-L)*A);
    }
    printf("Valor total: %.2f",valorMulta);
  
}