/*G015. Distância euclidiana
Faça um programa que leia dois pontos P1 e P2, composto pelas coordenadas x e y. Após isso, calcule a
distância euclidiana entre eles e imprima utilizando 4 casas decimais. Utilize struct para definir um ponto.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
    float x;
    float y;

}T_PONTO;

float calcular_distancia(T_PONTO p1,T_PONTO p2){
    float distancia= sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    return distancia;

}

int main(){
    T_PONTO p1,p2;

    printf("Digite as cordenadas x e y de p1:");
    scanf("%f%f",&p1.x,&p1.y);

    printf("Digite as cordenadas x e y de p2:");
    scanf("%f%f",&p2.x,&p2.y);

    float distancia=calcular_distancia(p1,p2);
    printf("%.4f",distancia);

    return 0;
}