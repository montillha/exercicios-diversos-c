/*G003. Remover elemento em um vetor
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor
A de tamanho N. Após isso leia um número inteiro X. Seu programa deve remover todas as ocorrências do
elemento X e imprimir o vetor resultante*/
#include <stdio.h>
#include <stdlib.h>
int remover_elemento(int vetor[],int* n, int x){
    for(int i=0;i<*n;i++){
        if(vetor[i]==x){
            for(int j=i;j<(*n)-1;j++){
                vetor[j]=vetor[j+1];

            }
            (*n)--;

        }
    }
  
}


int imprimir_vetor(int vetor[],int n){
    for(int j=0;j<n;j++){
        printf("%d ",vetor[j]);


    }
    printf("\n");

}
int main(){

    int n,x;
    printf("Tamanho do vetor:");
    scanf("%d",&n);
    int vetor[n];

    for(int i=0;i<n;i++){
        int num;
        printf("Digite um valor:");
        scanf("%d",&num);
        vetor[i]=num;
    }

    printf("Valor para remover:");
    scanf("%d",&x);
    remover_elemento(vetor,&n,x);
    imprimir_vetor(vetor,n);

    return 0;

}