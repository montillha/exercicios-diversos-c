/*C022. Cangurus
Você está na Austrália treinando cangurus para se locomoverem em linha reta. Você quer saber se dois
cangurus estarão na mesma posição em um determinado tempo, dado a posição inicial de cada canguru e
qual a distância que eles saltam. Como você sabe programar muito bem, você decidiu fazer um programa
para isso. Seu programa deve ler:
● A posição inicial x1 e a distância do pulo V1 do primeiro canguru.
● A posição inicial X2 e a distância do pulo v2 do segundo canguru.
Após isso, seu programa deve imprimir SIM se os dois cangurus se encontrarão no mesmo ponto e NAO
caso eles nunca se encontrem.
Por exemplo, o primeiro canguru começa em x1 = 2 e tem uma distância do pulo de V1 = 1. O segundo
canguru começa em X2 = 1 e tem uma distância de pulo de v2 = 2. Após um pulo ambos estarão no ponto
3, portanto a resposta é SIM.

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, v1, x2, v2;

    printf("posicao inicial do primeiro: ");
    scanf("%d", &x1);
    printf("distancia do pulo do primeiro: ");
    scanf("%d", &v1);
    printf("posicao inicial do segundo: ");
    scanf("%d", &x2);
    printf("distancia do pulo do segundo: ");
    scanf("%d", &v2);

    if (v1 == v2) {
      
        if (x1 == x2) {
            printf("SIM\n"); 
        } else {
            printf("NAO\n"); 
        }
    } else {
        if (((x1-x2) % (v2-v1) == 0) && ((x1-x2) / (v2-v1) >= 0)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }

    return 0;
}
