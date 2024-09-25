/*D004. Busca número
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida leia um
número inteiro X. Ao fim escreva a primeira posição na lista em que o valor X foi encontrado. Se X não
estiver na lista, escrever -1.*/
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
int achar_x(int n,int x,int numeros[]){
    for(int i=0;i<n;i++){
        if(numeros[i]==x){
            return i;

        }
       
    }
    return -1;

}
int main() {
    int n,x;
    printf("digite tamanho da lista:" );
    scanf("%d",&n);
    int numeros[n];
    preencher_vetor(n,numeros);
    printf("digite o inteiro que deseja achar:" );
    scanf("%d",&x);
    int indice_x= achar_x(n,x,numeros);
    printf("%d\n",indice_x);
}
