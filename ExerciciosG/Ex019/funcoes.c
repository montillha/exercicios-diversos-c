#include <stdio.h>
#include "Funcoes.h"
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