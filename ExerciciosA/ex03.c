/*A003. Média de duas notas
Faça um programa que leia duas notas de provas e calcule e escreva a média simples delas. Escreva a saída com duas casas decimais.
*/
#include <stdio.h>
int main(){
    float nota1,nota2;
    printf("Digite duas notas:");
    scanf("%f%f",&nota1,&nota2);
    float media = (nota1+nota2)/2;
    printf("Média: %.2f \n",media);
    return 0;
}