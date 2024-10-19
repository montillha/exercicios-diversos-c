/*G002. Remover elemento em um índice do vetor
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Após isso leia um número inteiro I, que indica um índice do vetor. Seu programa deve remover o elemento do índice I e imprimir o vetor resultante.
Ao remover um elemento, seu programa deve deslocar os elementos do vetor para a esquerda. Por exemplo, considerando o vetor A = [2, 5, 3, 9], ao remover o elemento na posição I = 1, o vetor resultante deve ser [2, 3, 9]. Se o índice I informado for inválido, seu programa deve imprimir a mensagem INVALIDO.*/

#include <stdio.h>
#include <stdlib.h>
int remover_elemento(int vetor[],int *n,int i){
    if(i<0 || i>=*n){
        return 0;
    
    }else{
        for(int j=i;j<(*n)-1;j++){
            vetor[j]=vetor[j+1];

        }
        (*n)--;
        return 1;
        
    }

}
int imprimir_vetor(int vetor[],int *n){
    for(int j=0;j<*n;j++){
        printf("%d ",vetor[j]);
    }
    printf("\n");

}
int main(){
    int n,i;
    printf("Tamanho do vetor:");
    scanf("%d",&n);
    int vetor[n];

    for(int i=0;i<n;i++){
        int num;
        printf("Digite um valor:");
        scanf("%d",&num);
        vetor[i]=num;
    }

    printf("Indice para remover:");
    scanf("%d",&i);

    int validar=remover_elemento(vetor,&n,i);
    if(validar){
        imprimir_vetor(vetor,&n);

    }else{
        printf("INVALIDO\n");
    }

    return 0;

}