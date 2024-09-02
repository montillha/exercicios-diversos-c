/*B005. Ano bissexto
Escrever um programa que, dado um ano qualquer, verifica se ele é bissexto ou não. Seu programa deve
escrever como saída o número 1 se o ano for bissexto, e 0 caso contrário. Se o ano for inválido escreva -1.
● São bissextos todos os anos múltiplos de 400, p.ex: 1600, 2000, 2400, 2800…
● São bissextos todos os múltiplos de 4 e não múltiplos de 100, p.ex: 1996, 2004, 2008, 2012, 2016…
● Não são bissextos todos os demais anos.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano <= 0){
        printf("-1\n");

    }else if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        printf("1\n");

    }else{
        printf("0\n");
    }

    return 0;
}