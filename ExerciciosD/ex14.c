/*D014. Lista inversa
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista
A de tamanho N. O programa deve inverter a lista A, dentro dela próprio, ou seja, sem criar outra lista
adicional. Ao fim, seu programa deve imprimir a lista resultante B.
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

int inverter_vetor(int n,int numeros[]){
    int aux = 0; 
    while (aux < n - aux - 1) { 
        int numAux = numeros[aux]; 
        numeros[aux] = numeros[n - aux - 1];  
        numeros[n - aux - 1] = numAux;  
        aux++;  
    }

}

void imprimir_vetor(int n,int numeros[]){
    for(int i=0;i<n;i++){
        printf("%d ",numeros[i]);
    }


}

int main() {
    int n;
    printf("digite tamanho da lista:" );
    scanf("%d",&n);
    int numeros[n];
    preencher_vetor(n,numeros);
    inverter_vetor(n,numeros);
    imprimir_vetor(n,numeros);

}