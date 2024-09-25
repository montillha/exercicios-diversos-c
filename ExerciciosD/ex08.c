/*D008. Soma duas listas
Faça um programa que leia um valor inteiro N. Após isso, leia duas listas A e B de tamanho N e coloque a
soma das duas listas em uma terceira lista C. Por exemplo C[0] = A[0] + B[0], C[1] = A[1] + B[1]. Por fim,
imprima a lista resultante C.
*/
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
    for(int i=0;i<n;i++){
        C[i]=A[i]+B[i];

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
    int C[n];
    preencher_vetorA(n,A);
    preencher_vetorB(n,B);
    preencher_vetorC(n,A,B,C);
    imprimir_vetorC(n,C);
}