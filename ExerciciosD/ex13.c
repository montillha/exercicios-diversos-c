/*D013. Intercalação de listas
Faça um programa que leia um valor inteiro N. Após isso, leia dois vetores A e B de tamanho N. Em seguida,
o programa deve criar um vetor C com os elementos de A e B intercalados.*/
#include <stdio.h>
#include <stdlib.h>
void preencher_vetorA(int n,int A[]){
    for(int i=0;i<n;i++){
        int num;
        printf("digite um numero do vetor A:" );
        scanf("%d", &num);
        A[i]=num;

    }
}
void preencher_vetorB(int n,int B[]){
    for(int i=0;i<n;i++){
        int num;
        printf("digite um numero do vetor B:" );
        scanf("%d", &num);
        B[i]=num;

    }
}
void preencher_vetorC(int n,int A[],int B[],int C[]){
    int indiceC=0;
    for(int i=0;i<n;i++){
        C[indiceC]=A[i];
        C[indiceC+1]=B[i];
        indiceC+=2;
    }
}

void imprimir_vetorC(int n,int C[]){
    for(int i=0;i<n;i++){
        printf("%d ",C[i]);
       
    }

}

int main() {
    int n;
    printf("digite tamanho da lista:" );
    scanf("%d",&n);
    int A[n];
    int B[n];
    int C[n*2];
    preencher_vetorA(n,A);
    preencher_vetorB(n,B);
    preencher_vetorC(n,A,B,C);
    imprimir_vetorC(n*2,C);
}