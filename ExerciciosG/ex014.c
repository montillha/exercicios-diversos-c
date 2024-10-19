/*Faça um programa que leia um número inteiro N. Após isso leia N datas no formato "dd/mm/aaaa". Seu
programa deve escrever todas as datas no formato textual "dd de MMM de aaaa". Caso a data seja inválida,
seu programa deve escrever "DATA INVALIDA". Utilize struct para definir a data.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int dia;
    int mes;
    int ano;
}T_DATA;

int is_bissexsto(int ano){
    int bissexto=((ano % 4 == 0)&&(ano % 100 != 0))||(ano%400==0);
    return bissexto;

}

int validar_data(T_DATA data){

 int dias[12] = {31,28,31,30,31,30, 31, 31,30,31,30,31};
 char mes_string[32];
 if(data.mes>=1 && data.mes<=12){
    if(is_bissexsto(data.ano)&& data.mes-1==2){
        dias[3]+=1;
    }
    if(data.dia>0 && data.dia<=dias[(data.mes)-1]){
  
        return 1;
    }
 }
 return 0;
 
}
int criar_datas(T_DATA datas[],int size){
    for(int i=0;i<size;i++){
        T_DATA data;
        printf("Digite a data:");
        scanf("%d/%d/%d",&data.dia,&data.mes,&data.ano);
        datas[i]=data;
    }

}
int imprimir_datas(T_DATA datas[],int size){
    char* meses[12] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    for(int i=0;i<size;i++){
        int resultado=validar_data(datas[i]);
        if(resultado==0){
            printf("DATA INVALIDA\n");
        }else{
            printf("%d de %s de %d\n",datas[i].dia,meses[datas[i].mes-1],datas[i].ano);
        }

    }
}

int main(){
    int quant_datas;
    printf("Digite a quantidade de datas para registrar:");
    scanf("%d",&quant_datas);
    T_DATA datas[quant_datas];
    criar_datas(datas,quant_datas);
    imprimir_datas(datas,quant_datas);
}
