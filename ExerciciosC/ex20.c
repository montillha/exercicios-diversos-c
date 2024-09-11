/*C020. Idades
Faça um programa que leia um conjunto de valores que correspondem as idades de pessoas de uma comunidade. Quando o valor fornecido for um número negativo, significa que não existem mais idades para serem lidas. Após a leitura, seu programa deve informar:
A média das idades das pessoas (com duas casas decimais)
A quantidade de pessoas maiores de idade
A porcentagem de pessoas idosas (considere que uma pessoa idosa tem mais de 75 anos) (com duas casas decimais)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int idade;
    int adultos=0;
    float media=0;
    float porcentagemIdosos;
    int pessoas=0;
    printf("Idade:");
    scanf("%d",&idade);
    while(idade>=0){
        if(idade>=18){
            adultos++;
        }
        if(idade>75){
            porcentagemIdosos++;
        }
        media+=idade;
        pessoas++;
        printf("Idade:");
        scanf("%d",&idade);

    }
    media=(float)media/pessoas;
    porcentagemIdosos=(float)porcentagemIdosos*100/pessoas;
    printf("Media das idades: %.2f\n",media);
    printf("Maiores de idade:%d\n",adultos);
    printf("Porcentagem de idosos:%.2f%%\n",porcentagemIdosos);

}