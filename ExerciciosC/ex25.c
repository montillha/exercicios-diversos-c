/*C025. Valores ordenados
Faça um programa que leia um número inteiro e positivo N. Após isso leia N números inteiros. Ao fim,
imprima 1 se a sequência de números lidos estão ordenados em forma crescente e -1 se estão ordenados
de forma decrescente. Se não estão ordenados, imprima 0. Considere que uma sequência de tamanho N é
crescente quando X1 <= X2 <= … <= XN e decrescente quando X1 >= X2 >= … >= XN. No caso desse
exercício, se todos os valores lidos forem iguais, considere como um segmento crescente.

*/
#include <stdio.h>
#include <stdlib.h>
int conferir_ordenacao(int numeros[],int n){
    int decrescente=1;
    int crescente=1;
    for(int i=0;i<n-1;i++){
        if(numeros[i]<numeros[i+1]){
            decrescente=0;
        }
        if(numeros[i]>numeros[i+1]){
               crescente=0;
        }

    }
    if (crescente==1){
        return 1;

    }else if(decrescente==1){
        return -1;
    }else{
        return 0;
    }
}

int main() {
    int n;
    printf("quantidade de elementos:");
    scanf("%d", &n);
    int numeros[n];
    for(int i=0;i<n;i++){
        int num;
        printf("digite um inteiro:" );
        scanf("%d", &num);
        numeros[i]=num;

    }
    int resultado=conferir_ordenacao(numeros,n);
    printf("%d\n",resultado);

    return 0;
}