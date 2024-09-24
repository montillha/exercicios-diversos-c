/*C024. Dois maiores valores
Faça um programa que leia um número inteiro N que indica a quantidade de números em um conjunto. Em
seguida, leia os N números inteiros que compõem esse conjunto. Por fim, o programa deve imprimir dois
números, que representam os dois maiores valores encontrados no conjunto, ordenados de forma
decrescente.
*/
#include <stdio.h>
#include <stdlib.h>

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
    int primero_maior=numeros[0];
    int segundo_maior=numeros[1];
    for(int i=2;i<n;i++){
        if(numeros[i]>primero_maior){
            primero_maior=numeros[i];
        }else if(numeros[i]>segundo_maior){
            segundo_maior=numeros[i];
        }

    }
    int maior=primero_maior;
    int menor=segundo_maior;
    if(primero_maior<segundo_maior){
        menor=primero_maior;
        maior=segundo_maior;

    }
    printf("%d\n",maior);
    printf("%d\n",menor);



    return 0;
}