/*Faça um programa que leia o nome de um(a) aluno(a). Após isso, o programa deve ler duas notas de provas. O programa deve calcular da média simples delas e escrever a saída conforme modelo abaixo. A média deve ser escrita com duas casas decimais.*/
#include <stdio.h>
int main(){
    char nome[20];
    printf("Nome: ");
    scanf("%s",nome);

    float nota1,nota2;
    printf("Digite duas notas:");
    scanf("%f%f",&nota1,&nota2);
    float media = (nota1+nota2)/2;
    printf("%s Obteve %.2f de média \n",nome,media);
    return 0;
}
