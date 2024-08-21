/*A001. Soma de dois números inteiros
Faça um programa que leia dois números inteiros e imprima a soma deles.
*/
#include <stdio.h>
int main(){
    int n1,n2;
    printf("Digite dois números:");
    scanf("%d%d",&n1,&n2);
    int soma=n1+n2;
    printf("Soma: %d \n",soma);

    return 0;
}