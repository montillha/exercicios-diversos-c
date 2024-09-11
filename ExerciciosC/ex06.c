/*C006. Número harmônico
Faça um programa que leia um número natural N e imprima o número harmônico de ordem N. Um número
harmônico H é definido por:
H = 1 + 1/2 + 1/3 + 1/4 + … + 1/N
Imprima o resultado com 4 casas decimais.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    float h=1;
    printf("Digite um numero:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        h+=1.0/i;
    }
    printf("Numero harmonico: %.4f\n",h);

 
}