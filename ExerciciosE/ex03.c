/*E003. Contando ocorrências de um caractere em uma string
Faça um programa que leia uma string S e um caractere C. Ao fim escreva o número de vezes que o caractere C aparece na string S.*/
#include <stdio.h>
#include<stdlib.h>
int len_string(char palavra[]){
    int tamanho=0;
    while(palavra[tamanho]!='\0'){
        tamanho++;
    }
    return tamanho;

}

int contar_caracter(char palavra[],char caracter,int tamanho){
    int ocorrencias=0;
    for(int i=0;i<tamanho;i++){
        if(palavra[i]==caracter){
            ocorrencias++;

        }
    }
    return ocorrencias;

}
int main(){
    char s[256];
    char c;
    int tamanho,ocorrencias;
    printf("Digite uma string:");
    scanf("%s",s);
    printf("Digite uma caracter:");
    scanf(" %c",&c);
    tamanho=len_string(s);
    ocorrencias=contar_caracter(s,c,tamanho);
    printf("%d\n",ocorrencias);
    return 0;
   
}
