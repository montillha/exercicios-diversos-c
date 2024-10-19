/*G010. Binário para decimal
Faça um programa que leia um número não negativo N em base binária. Em seguida, converta e imprima o
número em base decimal.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int converter_para_decimal(int n) {
    int i=0;
    int resultado=0;
    while(n>0){ 
        int resto=n%10;
        n=n/10;
        resultado+=resto*(pow(2,i));
        i++;
           
    }
    return resultado;
}

int main(){
    int num;
    printf("Digite um inteiro:");
    scanf("%d",&num);
    
    int decimal=converter_para_decimal(num);
    printf("%d ",decimal);

}
