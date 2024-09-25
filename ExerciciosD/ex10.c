/*D010. Listas de pares e ímpares
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. A cada valor lido, o
programa deve inserir em uma lista A se o valor for par e em uma lista B se o valor for ímpar. Ao fim,
escreva as duas listas resultantes, na primeira linha a lista A e na segunda a lista B
*/
#include <stdio.h>
#include <stdlib.h>
void preencher_listas(int n,int A[],int* indiceA,int B[],int *indiceB){
    for(int i=0;i<n;i++){
        int num;
        printf("digite um numero:" );
        scanf("%d", &num);
        if(num%2==0){
            A[*indiceA]=num;
            (*indiceA)++;
        }else{
            B[*indiceB]=num;
            (*indiceB)++;
        }

    }
}
void imprimirA(int *indiceA,int A[]){
    for(int i=0;i<*indiceA;i++){
        printf("%d ",A[i]);
    }


}
void imprimirB(int *indiceB,int B[]){
    for(int i=0;i<*indiceB;i++){
        printf("%d ",B[i]);
    }


}


int main() {
    int n;
    printf("digite tamanho da lista:" );
    scanf("%d",&n);
    int A[n];
    int indiceA=0;
    int B[n];
    int indiceB=0;
    preencher_listas(n,A,&indiceA,B,&indiceB);
    imprimirA(&indiceA,A);
    printf("\n");
    imprimirB(&indiceB,B);

}