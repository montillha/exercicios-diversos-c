/*C007. Potência
Faça um programa que leia dois números inteiros não negativos A e B, onde A é a base e B é o expoente de
uma potência. Após isso, calcule e imprima o valor de A elevado a B. Não utilize bibliotecas matemáticas.
No caso de python, não é permitido usar o operador **. Faça sua solução utilizando laço de repetição.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    int resultado=1;
    printf("Digite a base da potencia:");
    scanf("%d",&a);
    printf("Digite o expoente da potencia:");
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        resultado*=a;
        
    }
    printf("%d\n",resultado);

 
}