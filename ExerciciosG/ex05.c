/*G005. Matriz transposta
Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e
colunas respectivamente. Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. Por
fim, seu programa deve imprimir a matri A e a matriz transposta de A.
*/
#include <stdio.h>
#include <stdlib.h>
void criar_matriz(int** matriz,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Digite um inteiro:");
            scanf("%d",&matriz[i][j]);
        
        }
    }

}
void imprimir_matriz(int** matriz,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",matriz[i][j]);
        
        }
        printf("\n");
    }
    printf("\n");

}
void imprimir_matriz_transposta(int** matriz,int n,int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matriz[j][i]); 
        
        }
        printf("\n");
    }
    printf("\n");

}

int main(){
    int n,m;
    printf("Digite a quantidade de linhas:");
    scanf("%d",&n);
    printf("Digite a quantidade de colunas:");
    scanf("%d",&m);
    int** matriz=(int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++){
        matriz[i]=(int*)malloc(sizeof(int)*m);
    }
    criar_matriz(matriz,n,m);
    printf("Matriz A:\n");
    imprimir_matriz(matriz,n,m);
    printf("Matriz transposta de A:\n");
    imprimir_matriz_transposta(matriz,n,m);

}