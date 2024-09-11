/*C019. Potência usando somas
Considere que seu computador só consegue realizar operações de soma ou subtração, ou seja, está com as operações de divisão e multiplicação inoperantes. Faça um programa que leia dois números inteiros positivos A e B, onde A é a base e B é o expoente de uma potência. Após isso, calcule o valor da potência sem utilizar as operações inoperantes. Imprima o valor de A elevado a B.
Obs: Não utilize bibliotecas matemáticas. No caso de python, não é permitido usar o operador **. Faça sua solução utilizando laço de repetição.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    int potencia;
    printf("Digite a base primeiro numero:");
    scanf("%d",&a);
    printf("Digite o expoente:");
    scanf("%d",&b);
    if(b!=0){
        potencia=a;
        for (int i = 1; i < b; i++) {
            int soma = 0; 
            for (int j = 1; j <= a; j++) {
                soma+= potencia; // Soma repetidamente para simular a multiplicação
            }
            potencia = soma;
        }
    }else{
        potencia=1;
    }

    
    printf("%d",potencia);


}