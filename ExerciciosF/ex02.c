/*F003. Soma das colunas da matriz
Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e
colunas respectivamente. Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. Por
fim, o programa deve imprimir a soma de cada coluna da matriz.


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
void somar_linhas(int** matriz,int n, int m){
    int soma;
    for(int i=0;i<n;i++){
        soma=0;
        for(int j=0;j<m;j++){
            soma+=matriz[i][j];
           
        }
        printf("%d\n",soma);
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
    somar_linhas(matriz,n,m);
    free_matriz(matriz,n);
    return 0;
}

