/*G017. Cadastro de alunos
Faça um programa que leia uma série de informações de alunos de uma universidade. São eles: nome
completo, sexo, registro acadêmico, data de ingresso e nome do curso. Quando não há mais alunos, o
nome informado deve ser "FIM", indicando o fim da leitura. Considere como formato de entrada e saída o
exemplo a seguir.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct{
    char nome[32];
    char sexo;
    char ra[32];
    char data_ingresso[11];
    char curso[32];

} T_ALUNO;

int cadastrar_aluno(char *nome,T_ALUNO* alunos,int* size){
        T_ALUNO aluno;

        strcpy(aluno.nome,nome);

        char sexo;
        printf("Sexo(M/F): ");
        scanf(" %c", &sexo);
        aluno.sexo=toupper(sexo);
        

        printf("RA:");
        scanf("%s",aluno.ra); 

        printf("Data de ingresso(DD/MM/AAAA):");
        scanf("%s",aluno.data_ingresso);
        getchar();

        printf("Curso: ");
        fgets(aluno.curso,32,stdin);
        

    alunos[(*size)++]=aluno;
    return 1;
}
void printar_alunos(T_ALUNO* alunos,int size){
    for (int i=0;i<size;i++) {
        char sexo[10];
        if(alunos[i].sexo=='F'){
            strcpy(sexo,"Feminino");
        }else{
            strcpy(sexo,"Masculino");
        }
        printf("Registro %d:\n",i+1);
        printf("Nome: %s - Sexo: %s - RA: %s\n", alunos[i].nome,sexo, alunos[i].ra);

        printf("Ingresso: %s - Curso: %s\n", alunos[i].data_ingresso, alunos[i].curso);
        printf("==========\n");
    }

}
int main(){

    T_ALUNO* alunos=(T_ALUNO*)malloc(sizeof(T_ALUNO)*100);
    int size=0;

    char nome[32];
    printf("Nome: ");
    fgets(nome,32,stdin); 
    nome[strcspn(nome, "\n")] = '\0'; 

    while (strcmp(nome,"FIM")!=0 && size!=100){
        cadastrar_aluno(nome,alunos,&size);
        printf("Nome: ");
        fgets(nome,32,stdin);
        nome[strcspn(nome, "\n")] = '\0';   
    }
    
    printar_alunos(alunos,size);
    free(alunos);

}