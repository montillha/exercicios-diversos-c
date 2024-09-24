/*C021. Soma dígitos
Faça um programa que leia um número inteiro positivo N e imprima a soma dos dígitos desse número. Por
exemplo, se a entrada for 358, a saída será 16 (3 + 5 + 8). Obs: Não é permitido transformar os números em
strings, ou seja, resolva o problema apenas utilizando operações matemáticas válidas.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int soma=0; 
    printf("Inteiro:");
    scanf("%d",&n);
    int atual=n;  
    while(atual!=0){
        soma+=atual%10;
        atual=atual/10;
    }
    printf("%d\n",soma);

}