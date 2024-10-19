/*G004. Intercalação de vetores de tamanhos diferentes
Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor
A de tamanho N. Em seguida, leia um valor inteiro M. Então, leia M valores inteiros colocando-os em um
vetor B de tamanho M.
O programa deve criar um vetor C com os elementos de A e B intercalados, sendo que o primeiro elemento
do vetor C deve vir do vetor de maior tamanho (se forem iguais, deve-se começar com o primeiro elemento
do vetor A). Ao final, escreve o vetor resultante.
*/

#include <stdio.h>
#include <stdlib.h>

void criar_vetor(int vetor[],int tamanho){
    for(int i=0;i<tamanho;i++){
        int num;
        printf("Digite um valor:");
        scanf("%d",&num);
        vetor[i]=num;
    }

}
int intercalar_vetores(int a[],int b[],int c[],int tamanho_a,int tamanho_b){
    int a_maior=1;
    int maior=tamanho_a;
    if(tamanho_a<tamanho_b){
        a_maior=0;
        maior=tamanho_b;
    }
    int size_c=0;
    for(int i=0;i<maior;i++){ 
        if(a_maior){
            c[size_c]=a[i];
            size_c++;
            if(i<tamanho_b){
                c[size_c]=b[i];
                size_c++;
            }
        }else{
            c[size_c]=b[i];
            size_c++;
            if(i<tamanho_a){
                c[size_c]=a[i];
                size_c++;
            }
        }
    }
  
}


int imprimir_vetor(int vetor[],int n){
    for(int j=0;j<n;j++){
        printf("%d ",vetor[j]);


    }
    printf("\n");

}
int main(){

    int n,m;

    printf("Tamanho do primeiro vetor:");
    scanf("%d",&n);
    int a[n];
    criar_vetor(a,n);

    printf("Tamanho do segundo vetor:");
    scanf("%d",&m);
    int b[m];
    criar_vetor(b,m);

    int c[n+m];

   intercalar_vetores(a,b,c,n,m);
   imprimir_vetor(c,(n+m));

    return 0;

}