/*D012. Menor na primeira posição e maior na última
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor.
Seu programa deve identificar o menor valor do vetor e trocá-lo de posição com o elemento do índice zero.
Em seguida deve identificar o maior elemento e trocá-lo de posição com o elemento do último índice do
vetor. Se acontecer mais de uma ocorrência do maior ou menor, considere a de menor índice. Por fim, seu
programa deve imprimir o vetor resultante.
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
int trocar_menor(int n,int numeros[]){
    int menor=numeros[0];
    int indice_menor=0;
    for(int i=0;i<n;i++){
        if(numeros[i]<menor){
            indice_menor=i;
            menor=numeros[i];
        }
    }
    int auxNum=numeros[0];
    numeros[0]=menor;
    numeros[indice_menor]=auxNum;

}
int trocar_maior(int n,int numeros[]){
    int maior=numeros[n-1];
    int indice_maior=n-1;
    for(int i=0;i<n;i++){
        if(numeros[i]>maior){
            indice_maior=i;
            maior=numeros[i];
        }
    }
    int auxNum=numeros[n-1];
    numeros[n-1]=maior;
    numeros[indice_maior]=auxNum;


}
void imprimir_vetor(int n,int numeros[]){
    for(int i=0;i<n;i++){
        printf("%d ",numeros[i]);
    }


}

int main() {
    int n,x;
    printf("digite tamanho da lista:" );
    scanf("%d",&n);
    int numeros[n];
    preencher_vetor(n,numeros);
    trocar_menor(n,numeros);
    trocar_maior(n,numeros);
    imprimir_vetor(n,numeros);

}