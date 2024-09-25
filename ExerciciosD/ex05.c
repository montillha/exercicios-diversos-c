/*D005. Contando ocorrências de um número II
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida leia um
número inteiro X. Ao fim escreva o número de vezes que o número X foi lido do usuário.*/
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
int contar_x(int n,int x,int numeros[]){
    int quant_x=0;
    for(int i=0;i<n;i++){
        if(numeros[i]==x){
            quant_x++;

        }
       
    }
    return quant_x;

}
int main() {
    int n,x;
    printf("digite tamanho da lista:" );
    scanf("%d",&n);
    int numeros[n];
    preencher_vetor(n,numeros);
    printf("digite o inteiro que deseja achar:" );
    scanf("%d",&x);
    int quant_x= contar_x(n,x,numeros);
    printf("%d\n",quant_x);
}
