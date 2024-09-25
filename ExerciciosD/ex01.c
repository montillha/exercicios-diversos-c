/*D001. Temperaturas acima da média
Faça um programa que leia dados de temperatura durante uma semana (7 leituras), armazenando em uma
lista. Após isso, seu programa deve imprimir quantos dias dessa semana a temperatura esteve acima da
média.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int temperaturas[7];
    int media;
    int quant_acima_media=0;
    for(int i=0;i<7;i++){
        int temperatura;
        printf("digite uma temperatura:" );
        scanf("%d", &temperatura);
        temperaturas[i]=temperatura;
        media+=temperatura;

    }
    media=media/7;
    for(int i=0;i<7;i++){
        if(temperaturas[i]>media){
            quant_acima_media++;
        }

    }
    printf("%d",quant_acima_media);
    return 0;
}