/*C017. Soma dos Fatoriais
Faça um programa que leia um número inteiro N e imprima a soma de todos os fatoriais entre 0 e N (inclusive N). Não utilize bibliotecas matemáticas.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int somaFatorial=0;
    printf("Digite um inteiro:");
    scanf("%d",&n); 
    for(int i=0;i<=n;i++){
        int fatorial=1;
        if(i!=0){
            for(int j=1;j<=i;j++){
               fatorial=fatorial*j;
            }
        }
        somaFatorial+=fatorial;
            
        
    }
    printf("Soma dos fatorial ente 1 e %d: %d",n,somaFatorial);


}