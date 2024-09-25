/*D002. Escreve lista
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida, seu programa
deve imprimir os N valores na ordem que foram lidos.

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
void imprimir_vetor(int n,int numeros[]){
    for(int i=0;i<n;i++){
        printf("%d ",numeros[i]);
       
    }

}
int main() {
    int n;
    printf("digite um intero:" );
    scanf("%d",&n);
    int numeros[n];
    preencher_vetor(n,numeros);
    imprimir_vetor(n,numeros);
}