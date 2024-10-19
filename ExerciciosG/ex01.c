/*G001. Inserir elemento em um índice do vetor
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Após isso, leia dois números inteiros I e X, que indicam respectivamente o índice do vetor e um elemento do vetor. Seu programa deve inserir o elemento X no índice I e imprimir o vetor resultante.
Ao inserir um elemento em determinado índice, seu programa deve deslocar os elementos do vetor para a direita, de forma a não perder elementos e manter a ordenação original do vetor A. Por exemplo, considerando o vetor A = [2, 5, 3, 9], ao inserir o elemento X = 0 na posição I = 2, o vetor resultante deve ser [2, 5, 0, 3, 9]. Se o índice I informado for negativo, seu programa deve imprimir a mensagem INVALIDO. Se I for maior que o tamanho do vetor, o elemento deve ser inserido na última posição.*/
#include <stdio.h>
#include <stdlib.h>
int adicionar_elemento(int vetor[],int n, int x,int i){
    if(i<0){
        return 0;
    }else if(i>=n){
        i=n;
        vetor[n]=x;
    }else{

        for (int j=n;j> i;j--) {
            vetor[j] = vetor[j - 1];
        }   
        vetor[i] = x; 
    }
    return 1;

}
int imprimir_vetor(int vetor[],int n){
    for(int j=0;j<n+1;j++){
        printf("%d ",vetor[j]);


    } 
    printf("\n");

}

int main(){
    int n,i,x;
    printf("Tamanho do vetor:");
    scanf("%d",&n);
    int vetor[n+1];

    for(int i=0;i<n;i++){
        int num;
        printf("Digite um valor:");
        scanf("%d",&num);
        vetor[i]=num;
    }

    printf("Indice para adicionar:");
    scanf("%d",&i);

    printf("Valor para adicionar:");
    scanf("%d",&x);
    int validar =adicionar_elemento(vetor,n,x,i);
    if(validar){
        imprimir_vetor(vetor,n);
    }else{
        printf("INVALIDO\n");
    }
 

    return 0;

}