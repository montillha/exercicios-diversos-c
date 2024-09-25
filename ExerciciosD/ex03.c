/*D003. Maior valor e posição
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros, inserindo-os em uma lista
de tamanho N. Em seguida, seu programa deve imprimir o maior valor informado e a posição dele na lista.
Se o maior valor foi informado mais de uma vez, imprimir a posição do primeiro*/
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
 void achar_maior_valor(int n,int numeros[],int maior[]){
    maior[0] = numeros[0]; 
    maior[1] = 0; 
    for(int i=0;i<n;i++){
        if(numeros[i]>maior[0]){
            maior[0]=numeros[i];
            maior[1]=i;

        }
       
    }

}
int main() {
    int n;
    printf("digite um intero:" );
    scanf("%d",&n);
    int numeros[n];
    int maior[2];
    preencher_vetor(n,numeros);
    achar_maior_valor(n,numeros,maior);
    printf("Maior: %d\n",maior[0]);
    printf("Indice: %d\n",maior[1]);
}