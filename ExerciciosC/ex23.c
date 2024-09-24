/*C023. Velas de aniversário
Você está responsável pelo bolo de aniversário da sua priminha e decidiu que o bolo terá uma vela para
cada ano da idade total dela. Quando ela assopra as velas, ela só é capaz de apagar apenas as velas mais
altas. Sua tarefa é fazer um programa que leia a idade A da sua sobrinha e a altura das velas. Após isso, seu
programa deve imprimir a quantidade de velas que ela vai conseguir apagar.
Por exemplo, se sua priminha está fazendo 4 anos e o bolo possui 4 velas de tamanhos 4, 4, 1, 3, então ela
só vai conseguir apagar as duas mais altas, de tamanho 4. Portanto, a resposta deve ser 2.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("idade:");
    scanf("%d", &a);
    int velas[a];
    for(int i=0;i<a;i++){
        int altura;
        printf("altura da vela: ");
        scanf("%d", &altura);
        velas[i]=altura;

    }
    int maior=velas[0];
    int quantidade=1;
    for(int i=1;i<a;i++){
        if(velas[i]>maior){
            maior=velas[i];
            quantidade=1;
        }else if(velas[i]==maior){
            quantidade++;
        }

    }
   
    printf("%d",quantidade);


    return 0;
}