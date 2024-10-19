#include <stdio.h>
#include "funcoes.h"
int my_strlen(char str[]) {
    int tamanho=0;
    int i=0;
    while(str[i]!='\0'){
        tamanho++;
        i++;
    }
    return tamanho;
}
