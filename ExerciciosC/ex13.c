/*C013. Maior, menor e soma
Faça um programa que leia um número inteiro positivo N. Após isso o programa deve ler N números inteiros e ao final da leitura imprimir o maior, menor e a soma dos números lidos.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int n,inteiro;
    printf("Digite um numero:");
    scanf("%d",&n);
    int numeros[n];
    int tamanhoNumeros=0;

    for(int i=0;i<n;i++){
        printf("Digite um numero:");
        scanf("%d",&inteiro);
        numeros[tamanhoNumeros]=inteiro;
        tamanhoNumeros++;
    }

    int maior=numeros[0];
    int menor=numeros[0];
    int soma=0;
    for(int i=0;i<n;i++){
        if(numeros[i]>maior){
            maior=numeros[i];
        }
        if(numeros[i]<menor){
            menor=numeros[i];
        }
        soma+=numeros[i];
    }

    printf("Maior: %d\n",maior);
    printf("Menoor: %d\n",menor);
    printf("Soma: %d\n",soma);
    
}