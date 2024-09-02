/*B004. Valor da viagem
Um motorista de Uber estipula o preço de uma determinada viagem dada a quantidade de quilômetros
percorrida. Para viagens de até X km, é cobrado um valor R$ V1 por km. Acima de Y km, é cobrado o valor
R$ V2. Faça um programa que leia X, V1, V2 e a quantidade de quilômetros A da viagem e imprima o valor
total com duas casas decimais.*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    float X,V1,V2,A;

    printf("Digite a quilometragem de referencia: ");
    scanf("%f", &X);

    printf("Digite valor cobrado em ate %.2f km: ",V1);
    scanf("%f", &V1);

    printf("Digite valor cobrado acima de %.2f km: ",V1);
    scanf("%f", &V2);

    printf("Digite a quilometragem da viagem: ",&A);
    scanf("%f", &A);

    float valorViagem;
    if(A<=X){
        valorViagem=A*V1;
    }else{
        valorViagem=A*V2;
    }
    printf("Valor total da viagem: %.2f \n",valorViagem);

    return 0;
}