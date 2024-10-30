/*Faça um programa que leia a quantidade de pinos derrubados por um praticante de boliche em cada jogada e imprima:

1. a sequência de pinos derrubados (de acordo com os exemplos de entrada e saída e as anotações de contagem de pontos - https://boliche.com.br/esporte-boliche/contagem-dos-pontos-no-boliche/);

2. a pontuação final do jogador.
*/
 
#include <stdio.h>
#include <stdlib.h>
 void ler_pontos(int* pontos,int *size){
    int num;
    for (int i = 0; i < 20; i++) {
        scanf("%d", &num);
        if(num%2==0){
            pontos[i]=num;
            if(num==10){ //strike
                pontos[i+1]=-1;
                i++;
            }
            
        }else{
            pontos[i]=num;
        }
    }
    //bolas extras do Strike no 10° frame
    if(pontos[18]==10){
        printf("Bolas extras:");
        for (int i = 0; i <2; i++) {
            scanf("%d",&pontos[(*size)++]);
        }
    }
    //bolas extras do Spare no 10° frame
    if(pontos[18]+pontos[19]==10){
        printf("Bola extra:");
        scanf("%d",&pontos[(*size)++]);

    }
 }
void exibirPlacar(int* pontos,int size){
    for(int i=0;i<size;i++){
        if(i<20){
            if(i%2==0 && pontos[i]==10){

                if(i!=18){
                    printf(" | X_ ");

                }else{
                    printf(" | X "); //strike no 10° frame

                }

            }else{
                if(pontos[i]+pontos[i+1]==10){
                    printf(" | %d /",pontos[i]);

                }else{
                    printf("| %d %d",pontos[i],pontos[i+1]);

                }
  
            }
            i++;

        }else{ //bolas extras
            if(pontos[i]==10){
                printf(" X ");
            }else if(pontos[i]!=-1){
                printf(" %d ",pontos[i]);
            }

        }
    }
    printf("\n");

}
int contabilizarPontos(int *pontos,int size){
    int total=0;
    
    for(int i=0;i<size;i++){
        if(i<18){//não contabilizar o bônus no 10° frame
            if(i%2==0){
                if(pontos[i]==10){
                    int bonus_bola_2=pontos[i+3];
                    if(pontos[3]==-1){
                        bonus_bola_2=pontos[i+4];

                    }
                    total+=10+pontos[i+2]+bonus_bola_2;
        
                }else if(pontos[i]+pontos[i+1]==10){
                    total+=10+pontos[i+2];
            
                }else{
                    total+=pontos[i]+pontos[i+1];
                }
                i++;
            }

        }else{
            if(pontos[i]!=-1){
                total+=pontos[i];
            }

        }
    }
   
    return total;


}


 int main(){

    int* pontos=(int*)malloc(sizeof(int)*22);
    int size=20;

    ler_pontos(pontos,&size);
    exibirPlacar(pontos,size);
    printf("%d",contabilizarPontos(pontos,size));
    free(pontos);

    return 0;
 }