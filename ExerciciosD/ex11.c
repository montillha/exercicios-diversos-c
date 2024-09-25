/*D011. Lista de elementos maiores que determinado valor
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor
A. Em seguida seu programa deve ler um valor inteiro X e criar um vetor B que só deve ter elementos de A
maiores que X, na mesma ordem em que estão em A. Por fim, o programa deve imprimir o vetor resultante
A.

*/
#include <stdio.h>
#include <stdlib.h>
void preencher_vetor(int n,int A[]){
    for(int i=0;i<n;i++){
        int num;
        printf("digite um numero:" );
        scanf("%d", &num);
        A[i]=num;

    }
}
int preencherB(int n,int x,int A[],int B[]){
    int lenB=0;
    for(int i=0;i<n;i++){
        if(A[i]>x){
            B[lenB]=A[i];
            lenB++;
        }
    }
    return lenB;


}
void imprimirB(int lenB,int B[]){
    for(int i=0;i<lenB;i++){
        printf("%d ",B[i]);
    }


}

int main() {
    int n,x;
    printf("digite tamanho da lista:" );
    scanf("%d",&n);
    int A[n];
    int B[n];
    preencher_vetor(n,A);
    printf("digite um inteiro x:" );
    scanf("%d",&x);
    int lenB=preencherB(n,x,A,B);
    if(lenB!=0){
        imprimirB(lenB,B);

    }

}