/*E002. Imprimindo caracteres de uma palavra em ordem inversa
Faça um programa que leia uma string S, composta apenas por uma palavra. Seu programa deve imprimir os caracteres de S na ordem inversa que aparecem em S, separados por espaço.*/
#include <stdio.h>
#include<stdlib.h>
int len_string(char palavra[]){
    int tamanho=0;
    while(palavra[tamanho]!='\0'){
        tamanho++;
    }
    return tamanho;

}
void inverter_string(char palavra[],int tamanho){
    
    for(int i=tamanho-1;i>-1;i--){
        printf("%c ",palavra[i]);
    }
    printf("\n");

}
int main(){
    char palavra[256];
    printf("Digite uma string:");
    scanf("%s",palavra);
    int tamanho=len_string(palavra);
    inverter_string(palavra,tamanho);
    return 0;
   
}
