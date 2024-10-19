/*G016. Retângulo
Faça um programa que leia dois pontos P1 e P2, composto pelas coordenadas x e y, em que P1 e P2 representam pontos adjascentes na diagonal de um retângulo. O programa deve calcular e imprimir a área do retângulo utilizando quatro casas decimais. Utilize structs para definir um ponto e para definir um retângulo.*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    float x;
    float y;

}T_PONTO;

typedef struct{
    float largura;
    float altura;


}T_RETANGULO;

void calcular_area(T_PONTO p1,T_PONTO p2,T_RETANGULO *retangulo){
    float largura =retangulo->largura=p2.x-p1.x;
    float altura= retangulo->altura=p2.y-p1.y;

    if(largura<0){
        retangulo->altura*=-1;
    }

    if(altura<0){
        retangulo->largura*=-1;
    }  
   
}

int main(){
    T_PONTO p1,p2;
    T_RETANGULO retangulo;

    printf("Digite as cordenadas x e y de p1:");
    scanf("%f%f",&p1.x,&p1.y);

    printf("Digite as cordenadas x e y de p2:");
    scanf("%f%f",&p2.x,&p2.y);

    calcular_area(p1,p2,&retangulo);
    printf("%.4f",retangulo.altura*retangulo.largura);

    return 0;
}