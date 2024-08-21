/*A005. Divisão real, divisão inteira e resto da divisão
Faça um programa que leia dois números inteiros. Após isso, seu programa deve imprimir o resultado das seguintes operações: 1) o valor da divisão real do primeiro número lido pelo segundo (imprimir com duas casas decimais); 2) o valor da divisão inteira do primeiro pelo segundo (imprimir como número inteiro); 3) o valor do resto da divisão do primeiro pelo segundo (imprimir como número inteiro).*/
#include <stdio.h>
int main(){
    int n1,n2;
    printf("Digite dois números:");
    scanf("%d%d",&n1,&n2);
    int divisaoInt = n1/n2;
    float divisaoFloat = (float)n1/n2;
    int resto = n1%n2;

    printf("Divisão Interira: %d \n",divisaoInt);
    printf("Divisão Float: %.2f \n",divisaoFloat);
    printf("Resto: %d \n",resto);

    return 0;
}