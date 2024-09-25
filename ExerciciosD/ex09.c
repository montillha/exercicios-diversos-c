/*D009. Soma de segmento
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista.
Em seguida, leia dois valores I e J que correspondem a duas posições na lista. Ao final, o programa deve
escrever a soma dos elementos entre I e J, incluindo os elementos de I e J. Se I ou J forem posições inválidas
na lista, imprimir a mensagem INVALIDO.
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
int validar_indice(int n, int i, int j){
    if(j>=n ||j<0 || i>=n || i<0){
        return 0;
    }
    return 1;

}
int somar_numeros(int n,int i,int j,int numeros[]){
    int soma=0;
    int maior=i;
    int menor=j;
    if(i<j){
        menor=i;
        maior=j;
    }
    for(int i=menor;i<=maior;i++){
        soma+=numeros[i];


    }
    return soma;


}


int main() {
    int n,i,j;
    printf("digite tamanho da lista:" );
    scanf("%d",&n);
    int numeros[n];
    preencher_vetor(n,numeros);
    printf("digite um indice da lista:" );
    scanf("%d",&i);
    printf("digite outro indice da lista:" );
    scanf("%d",&j);
    if(!validar_indice(n,i,j)){
        printf("INVALIDO");
    }else{
        int soma=somar_numeros(n,i,j,numeros);
        printf("%d",soma);

    }
}