/*B009. Ordenar três números
Faça um algoritmo que leia 3 valores inteiros A, B e C. Coloque-os em ordem crescente (ou seja, ao final A
deve armazenar o menor valor, C o maior e B o valor do meio). Utilize o modelo abaixo apresentado no final
do exercício, modificando apenas o processamento.
*/
#include <stdio.h>
#include <stdlib.h>


int main(){
    int a, b,c,auxiliar;
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    printf("Valor C: ");
    scanf("%d", &c);

    if(a>c && a>b){
        auxiliar=a;
        a=c;
        c=auxiliar;
        

    }else if(b>c){
        auxiliar=b;
        b=c;
        c=auxiliar;
    }
    if(a>b){
        auxiliar=a;
        a=b;
        b=auxiliar;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;

}