/*A014. Inverte número de quatro dígitos
Faça um programa que leia um número inteiro (assuma que esse número terá 4 dígitos obrigatoriamente) e inverta esse número. Por fim escreva o número invertido. O seu programa deve apenas manipular números inteiros. Não é permitido usar strings, lista, etc.
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Número inteiro:");
    scanf("%d",&numero);
    while(numero/10!=0){
        int resto=numero%10;
        if(resto!=0){
            printf("%d",resto);
        }
             numero=numero/10;
    }
    printf("%d",numero);
    return 0;
 
}