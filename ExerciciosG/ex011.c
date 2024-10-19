/*G011. Intercalação de vetores ordenados
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor
A de tamanho N. Em seguida, leia um valor inteiro M. Então, leia M valores inteiros colocando-os em um
vetor B de tamanho M. Assuma que A e B sempre estarão ordenados de forma crescente.
O programa deve juntar os valores de A e B em um vetor C, de forma que C também esteja ordenado. Ao
final, escreva o vetor C resultante. Não é permitido utilizar algoritmo de ordenação.
*/
#include <stdio.h>
#include <stdlib.h>
int preencher(int vetor[], int n){
    for (int i = 0; i < n; i++){
        printf("Digite um inteiro:");
        scanf("%d", &vetor[i]);
    }
}
void criarC(int A[],int B[],int C[],int sizeA,int sizeB){
    int a=0;
    int b=0;
    int sizeC=0;
    while (sizeC < sizeA + sizeB) {
        if (a<sizeA && b<sizeB) {
            if(A[a]<B[b]) {
                C[sizeC++]=A[a++];
            }else{
                C[sizeC++]=B[b++]; 
            }
        }else if(a<sizeA){
            C[sizeC++]=A[a++];
        }else if(b<sizeB) {
            C[sizeC++]=B[b++];
        }
    }
}

int imprimirC(int C[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", C[i]);
    }
    printf("\n");
}

int main(){
    int n, m;

    printf("Digite um inteiro N:");
    scanf("%d", &n);
    int *vetorA = (int *)malloc(sizeof(int) * n);
    printf("Preenchendo lista A\n");
    preencher(vetorA, n);

    printf("Digite um inteiro M:");
    scanf("%d", &m);
    int *vetorB = (int *)malloc(sizeof(int) * m);
    printf("Preenchendo lista B\n");
    preencher(vetorB, m);

    int *vetorC = (int *)malloc(sizeof(int) * (m + n));
    criarC(vetorA, vetorB, vetorC, n, m);
    imprimirC(vetorC, n + m);
    free(vetorA);
    free(vetorB);
    free(vetorC);
}