/*G012. Molécula de DNA
Uma molécula de DNA é uma dupla hélice formada por duas fitas compostas por uma sequência de quatro
nucleotídeos: citosina (C), timina (T), adenina (A) e guanina (G). Quando se tem a informação de quais
nucleotídeos formam uma fita é possível saber qual é a fita complementar, pois o nucleotídeo A se liga com
T e o nucleotídeo C se liga com G. Por exemplo, se uma das fitas for a sequencia TCGACCA, a fita
complementar é AGCTGGT.
Faça um programa que leia uma fita de DNA e o imprima com as duas fitas. Considere que a sequência lida
terá apenas letras maiúsculas
*/
#include <stdio.h>
#include <stdlib.h>
void identificar_complmentar(char* molecula,char* complementar){
    char nucleotideos[4]={'C','A','G','T'};
    int i=0;
    while(molecula[i]!='\0'){
       for(int j=0;j<4;j++){
            if(molecula[i]==nucleotideos[j]){
                if(j<2){
                    complementar[i]=nucleotideos[j+2];
                }else{
                    complementar[i]=nucleotideos[j-2];
                }
            }
        }
        i++;
    }
    complementar[i]='\0';
}

int main(){
    char molecula[32];
    char complementar[32];
    printf("Digite uma string:");
    scanf("%s",molecula);
    identificar_complmentar(molecula,complementar);
    printf("%s\n",molecula);
    printf("%s\n",complementar);
}
