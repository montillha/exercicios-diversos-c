/*Faça um programa que leia um número inteiro S que representa uma quantidade de segundos. Seu programa deve imprimir quatro valores inteiros, que representam a quantidade de segundos S em dias, horas, minutos e segundos. Por exemplo, 188365 segundos representam 2 dias, 4 horas, 19 minutos e 25 segundos. Dica: lembre-se dos operadores resto e divisão inteira.
*/
#include <stdio.h>
int main(){
    int segundos,dias,horas,minutos,novo_segundos;

    printf("Segundos:");
    scanf("%d",&segundos);

    dias= segundos/86400;
    horas=(segundos%86400)/3600;
    minutos=((segundos%86400)%3600)/60;
    novo_segundos=((segundos%86400)%3600)%60;

    printf("%d %d %d %d",dias,horas,minutos,novo_segundos);
    return 0;
}