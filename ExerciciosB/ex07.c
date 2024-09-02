/*B007. Ordenar dois números
Faça um algoritmo que leia 2 valores inteiros A e B. Coloque-os em ordem crescente (ou seja, ao final A
deve armazenar o menor valor e B o maior valor). Utilize o modelo abaixo apresentado no final do
exercício, modificando apenas o processamento
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);
    if(a>b){
        int auxiliar=a;
        a=b;
        b=auxiliar;
    }
     printf("%d %d",a,b);
    return 0;
}