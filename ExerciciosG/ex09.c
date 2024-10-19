/*G009. Decimal para binário
Faça um programa que leia um número inteiro não negativo N em base decimal. Em seguida, converta e
imprima o número em base binária.
*/

#include <stdio.h>
#include <stdlib.h>
int converter_para_binario(int n) {
    int i=1;
    int resultado=0;
    while(n>0){ 
        resultado+=(n%2)*i;
        n=n/2;   
        i *= 10;            
    }
    return resultado;
}

int main(){
    int num;
    printf("Digite um inteiro:");
    scanf("%d",&num);
    
    int binario=converter_para_binario(num);
    printf("%d ",binario);

}
