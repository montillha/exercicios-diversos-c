/*D007. Troca valores adjacentes
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista.
Em seguida, seu programa deve trocar os elementos dos índices adjacentes, par a par. Por exemplo, deve
ser trocado o elemento do índice 0 com o do índice 1, em seguida o elemento do índice 2 com o do índice 3
e assim sucessivamente. Por fim, seu programa deve imprimir a lista resultante.
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
int trocar_adjacentes(int n,int numeros[]){
    for(int i=0;i<n-1;i+=2){
        int aux=numeros[i];
        numeros[i]=numeros[i+1];
        numeros[i+1]=aux;
       
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
    trocar_adjacentes(n,numeros);
    imprimir_vetor(n,numeros);
}