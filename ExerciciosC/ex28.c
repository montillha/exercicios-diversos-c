/*C028. Segmento crescente máximo
Faça um programa que leia um número inteiro N que indica a quantidade de números em um conjunto. Em
seguida, leia os N números inteiros que compõem esse conjunto. O programa deve imprimir o
comprimento de um segmento crescente de tamanho máximo. Por exemplo, na sequência [3, 7, 4, 3, 6, 8,
9, 2, 5], o segmento crescente máximo é [3, 6, 8, 9], portanto seu comprimento é 4. Considere que um
segmento de tamanho N é crescente quando X1 <= X2 <= … <= XN.
*/
#include <stdio.h>
#include <stdlib.h>
int conferir_tamanho_segmento(int numeros[],int n){
    int tamanho_atual=1;
    int tamanho_maior=1;
    for(int i=0;i<n-1;i++){
        if(numeros[i]<=numeros[i+1]){
            tamanho_atual++;
        }else{
            if(tamanho_atual>tamanho_maior){
                tamanho_maior=tamanho_atual;

            }
            tamanho_atual=1;
        }

    }
    return tamanho_maior;
}

int main() {
    int n;
    printf("inteiro:");
    scanf("%d", &n);
    int numeros[n];
    for(int i=0;i<n;i++){
        int num;
        printf("digite um inteiro:" );
        scanf("%d", &num);
        numeros[i]=num;

    }   
    int resultado=conferir_tamanho_segmento(numeros,n);
    printf("%d\n",resultado);
    return 0;
}