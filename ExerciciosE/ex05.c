/*E004. Palíndromo
Faça um programa que leia duas strings A e B, e imprima 1 se A e B são anagramas e 0, caso contrário.
Anagrama é a transposição de letras de palavra ou frase para formar outra palavra ou frase diferente. Por
exemplo: "algoritmo" e “logaritmo” são anagramas. Seu programa deve desconsiderar caracteres de
espaço.
*/
#include <stdio.h>
#include <stdlib.h>

int len_string(char palavra[]) {
    int tamanho = 0;
    while (palavra[tamanho] != '\0') {
        tamanho++;

    }
    return tamanho-1;//tira o '\n' do fgets
}
void contar_caracteres(char a[],char b[], int tamanhoA,int tamanhoB,int ocorrenciasA[],int ocorrenciasB[]){
    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm','n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    //contando carateres da string a
    for(int i=0;i<tamanhoA;i++){
        if(a[i]!=' '){
            for(int j=0;j<26;j++){
                if(a[i]==alfabeto[j]){
                    ocorrenciasA[j]=ocorrenciasA[j]+1;
                }
            }
        }
    }
    //contando carateres da string b
    for(int i=0;i<tamanhoB;i++){
        if(b[i]!=' '){
            for(int j=0;j<26;j++){
                if(b[i]==alfabeto[j]){
                    ocorrenciasB[j]=ocorrenciasB[j]+1;
                }
            }
        }
    }

}

int verificar_anagrama(int ocorrenciasA[],int ocorrenciasB[]) {

    for(int i=0;i<26;i++){
        if(ocorrenciasA[i]!=ocorrenciasB[i]){
            return 0;
        }
            
        
    }
    return 1;
}

int main() {
    
    char a[256];
    char b[256];
    int ocorrencias_letrasA[26]={0};
    int ocorrencias_letrasB[26]={0};
    int tamanhoA,tamanhoB, anagrama;

    printf("Digite uma a: ");
    fgets(a, 256, stdin);
    printf("Digite uma b: ");
    fgets(b, 256, stdin);
    
    tamanhoA = len_string(a);
    tamanhoB= len_string(a);
    contar_caracteres(a,b,tamanhoA,tamanhoB,ocorrencias_letrasA,ocorrencias_letrasB);
    anagrama = verificar_anagrama(ocorrencias_letrasA,ocorrencias_letrasB);

    printf("%d\n",anagrama);
    return 0;
}

