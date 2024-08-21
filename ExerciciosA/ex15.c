/*A015. Porcentual de votos
Faça um programa que leia um número inteiro E de eleitores de um município, um número inteiro B que representa o número de votos brancos, um número N de votos nulos e um número V de votos válidos. O programa deve calcular e escrever o percentual que cada um representa em relação ao total de eleitores, além da porcentagem de ausentes. Formate sua saída conforme exemplos abaixo.
Exemplos de entrada e saída:
 */
#include <stdio.h>
int main(){
    int e,b,n,v,total_e;
    float percentual_b,percentual_n,percentual_v,percentual_ausentes;
    printf("Digite o valor dos eleitores, votos, brancos,nulos e válidos:");
    scanf("%d %d %d %d",&e,&b,&n,&v);
    percentual_b=(float)b*100/e;
    percentual_n=(float)n*100/e;
    percentual_v=(float)v*100/e;
    total_e=b+n+v;
    percentual_ausentes=100-((float)total_e*100/e);
    printf("Nulos: %.2f\n",percentual_n);
    printf("Brancos: %.2f\n",percentual_b);
    printf("Válidos: %.2f\n",percentual_v);
    printf("Ausentes: %.2f\n",percentual_ausentes);
    return 0;

}

