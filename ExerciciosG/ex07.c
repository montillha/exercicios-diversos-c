/*G007. Quantidade de vogais de uma string
Faça um programa que leia uma string S e imprima a quantidade de vogais de S. Considere que S contém
apenas caracteres do alfabeto (minúsculos e sem acentuação) e o caractere de espaço.
*/
#include <stdio.h>
#include <stdlib.h>
int my_strlen(char str[]) {
    int tamanho=0;
    int i=0;
    while(str[i]!='\0'){
        tamanho++;
        i++;
    }
    return tamanho-1;
}
int vogais(char* str){
    char vogais[5]={'a','e','i','o','u'};
    int quant_vogais=0;
    for(int i=0;i<my_strlen(str);i++){
        for(int j=0;j<5;j++){
            if(str[i]==vogais[j]){
                quant_vogais++;

            }
        }

    }
    return quant_vogais;
}
int main(){
    char string[32];
    printf("Digite uma string:");
    fgets(string,32,stdin);
    
    int quant_vogais=vogais(string);
    printf("Quantidade de vogais: %d ",quant_vogais);

}
