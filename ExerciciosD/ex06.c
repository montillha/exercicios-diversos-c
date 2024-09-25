/*D006. Escreve lista em ordem inversa
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida, seu programa
deve imprimir os N valores na ordem inversa que foram lidos.
*/
#include <stdio.h>
#include <stdlib.h>
void preencher_vetor(int n,int numeros[]){
    for(int i=0;i<n;i++){
        int num;
        printf("digite um numero:" );
        scanf("%d", &num);
        numeros[i]=num;

    }
}

int main() {
    int n;
    printf("digite tamanho da lista:" );
    scanf("%d",&n);
    int numeros[n];
    preencher_vetor(n,numeros);
    for(int i=n-1;i>-1;i--){
        printf("%d ",numeros[i]);
 
       
    }
}