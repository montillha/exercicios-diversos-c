/*F001. Imprime matrizes
Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e
colunas respectivamente. Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. Por
fim, imprima a matriz em formato matricial.
*/
#include <stdio.h>
#include <stdlib.h>
void free_matriz(int **matriz,int n){
    for(int i=0;i<n;i++){
        free(matriz[i]);

    }
    free(matriz);
}
void preencher_matriz(int** matriz,int n,int m){
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int num;
            printf("Digite um inteiro:");
            scanf("%d",&num);
            matriz[i][j]=num;
        }
    }
    

}
void printar_matriz(int** matriz,int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

}
int main() {
    int m,n;
    printf("Digite a quantidade de linhas: ");
    scanf("%d",&n);
    printf("Digite a quantidade de colunas: ");
    scanf("%d",&m);
    int** matriz;
    matriz=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++){
        matriz[i]=(int*)malloc(sizeof(int)*m);
    }
    preencher_matriz(matriz,n,m);
    printar_matriz(matriz,n,m);
    free_matriz(matriz,n);
    return 0;
}

