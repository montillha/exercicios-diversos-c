/*E004. Palíndromo
Faça um programa que leia uma string S e imprima imprima 1 se ela é palíndromo e 0 caso contrário. Uma string é palíndromo se quando lido da esquerda para a direita é igual ao ser lido da direita para a esquerda. Exemplos: "arara", "amor e roma". Observações importantes: 1) Seu programa deve desconsiderar caracteres de espaço; 2) Seu programa NÃO deve criar uma string auxiliar, ou seja, ele deve dizer se a string é palíndromo apenas acessando/consultando seus caracteres.*/
#include <stdio.h>
#include <stdlib.h>

int len_string(char palavra[]) {
    int tamanho = 0;
    while (palavra[tamanho] != '\0') {
        tamanho++;

    }
    return tamanho-1; //tira o '\n' do fgets
}

int verificar_palindromo(char palavra[], int tamanho) {
    int indiceInicio = 0;
    int indiceFinal = tamanho - 1;
    int palindromo=1;

    while (indiceInicio < indiceFinal && palindromo!=0) {
        while(palavra[indiceInicio]==' '){
            indiceInicio++;
        }
        while(palavra[indiceFinal]==' '){
            indiceFinal--;
        }
        if (palavra[indiceInicio] != palavra[indiceFinal]) {
            palindromo=0;
        }

        indiceInicio++;
        indiceFinal--;
    }

    return palindromo; 
}

int main() {
    char s[256];
    int tamanho, palindromo;

    printf("Digite uma string: ");
    fgets(s, 256, stdin);
    
    tamanho = len_string(s);
    palindromo = verificar_palindromo(s, tamanho);

    printf("%d\n", palindromo);
    return 0;
}

