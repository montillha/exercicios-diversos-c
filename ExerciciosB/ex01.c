/*Faça um programa que leia dois números inteiros e imprima o maior deles.
*/
#include <stdio.h>
int main(){
    int num1,num2,maior;
    printf("Escerva dois números");
    scanf("%d%d",&num1,&num2);
    if(num1<num2){
        maior=num2;   
    }else{
        maior=num1;
    }
    printf("Maior: %d\n",maior);
    return 0;
  
}