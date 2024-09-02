/*B008. Maior entre três números
Faça um programa que leia três números inteiros A, B e C e i imprima o maior deles
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b,c,maior;
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    printf("Valor C: ");
    scanf("%d", &c);

    if(a>b && a>c){
        maior=a;
    }else if(b>c){
        maior=b;

    }else{
        maior=c;
    }
    
    printf("Maior: %d\n",maior);
    return 0;
}