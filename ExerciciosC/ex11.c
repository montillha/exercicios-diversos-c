/*C011. Contando ocorrências de um número
Faça um programa que leia um número inteiro e positivo X. Após isso, leia sucessivos números inteiros positivos, até que um número negativo seja lido. Ao fim, escreva o número de vezes que o número X foi lido do usuário.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int numEscolhido,num;
    int contadorEscolhido=0;
    printf("Digite um numero:");
    scanf("%d",&num);
    numEscolhido=num;
    while(num>=0){
        printf("Digite um numero:");
        scanf("%d",&num);
        if(num==numEscolhido){
            contadorEscolhido+=1;
        }


    }
    printf("%d",contadorEscolhido);
    
}