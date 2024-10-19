/*G013. Ler e escrever uma data
Faça um programa que leia uma data no formato "dd/mm/aaaa" e escreva no formato textual "dd de
MMM de aaaa". Por exemplo, para a entrada "26/08/1914", o programa deve escrever "26 de agosto de
1914". Caso a data seja inválida, seu programa deve escrever "DATA INVALIDA". Utilize struct para definir a
data.
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

int escrever_data(T_DATA data){
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

int main(){
    char* meses[12] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    T_DATA data;
    printf("Digite a data:");
    scanf("%d/%d/%d",&data.dia,&data.mes,&data.ano);
    int resultado=escrever_data(data);
    if(resultado==0){
        printf("DATA INVALIDA");
    }else{
        printf("%d de %s de %d",data.dia,meses[data.mes-1],data.ano);
    }
}
