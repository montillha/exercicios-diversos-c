#include <stdio.h>
#include "funcoes.h"
int somar_fatoriais(int n){
    int somaFatorial=0;
    for(int i=0;i<=n;i++){
        int fatorial=1;
        if(i!=0){
            for(int j=1;j<=i;j++){
               fatorial=fatorial*j;
            }
        }
        somaFatorial+=fatorial;
              
    }
    return somaFatorial;
}
