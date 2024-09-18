#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char id[10];
    char name[128];
    float* grades;
 
}T_STUDENT;

typedef struct{
    int max;
    int  size;
    T_STUDENT** students;
 
}T_STUDENTS_LIST;

int is_empty(T_STUDENTS_LIST* list){
    if(list->size==0){
        return 1;
    }
    return 0;
}
int is_full(T_STUDENTS_LIST* list){
    if(list->size==list->max){
        return 1;
    }
    return 0;

}

int search_student(T_STUDENTS_LIST* list, char* id) {
    for (int i = 0; i < list->size; i++) {
        if (strcmp(list->students[i]->id, id) == 0) {
            return i; 
        }
    }
    return -1;  

}

T_STUDENT* create_student(char* id, char* name,float* grades){
    T_STUDENT* student= (T_STUDENT*)malloc(sizeof(T_STUDENT));
    strcpy(student->id,id);
    strcpy(student->name,name);
    student->grades=malloc(sizeof(float)*4);
    for (int i=0;i<4;i++){
        student->grades[i]=grades[i];
        
    }
    return student;
}

int len(T_STUDENTS_LIST* students){
    return students->size;
}

T_STUDENTS_LIST* create_student_list(int max){
    T_STUDENTS_LIST* list;
    list= (T_STUDENTS_LIST*) malloc(sizeof(T_STUDENTS_LIST));
    list->max=max;
    list->size=0;
    list->students=malloc(sizeof(T_STUDENT*)*max);
    return list;
}
int add_student(T_STUDENTS_LIST* list,T_STUDENT* student){
    int size=len(list);
    if(search_student(list,student->id)==-1){
        if(is_full(list)){
            return 0;
        }else{
            list->students[size++]=student;
            list->size++;
            return 1;
        }

    }
    return -1;


}

int remove_student(T_STUDENTS_LIST* list,char* id){
    int search=search_student(list,id);
    if(search_student(list,id)!=0){
        for (int i=search;i<list->size-1;i++){
            list->students[i]=list->students[i+1];
        }
        list->size--;
        return 1;

    } 
    return 0;
}

int free_student(T_STUDENT *student){
    free(student->grades);
    free(student);

};
int free_student_list(T_STUDENTS_LIST* list){
    for (int i=0;i<list->size-1;i++){
            free_student(list->students[i]);
    }
    free(list->students); 
    free(list);

}
void menu(){
    printf("==============================\n");
    printf("1.Adicionar\n");
    printf("2.Procurar\n");
    printf("3.Remover\n");
    printf("4.Sair\n");
    printf("==============================\n");
}
int main(){

    int max = 0;
    printf("Quantos alunos serao cadastrados:");
    scanf("%d", &max);

    T_STUDENTS_LIST* list = create_student_list(max);
    int opcao;
    menu();
    printf("Digite uma opcao:");
    scanf("%d",&opcao);
    
    while (opcao!=4){
        if(opcao==1){
            char id[10];
            char name[128];
            float grades[4];
            printf("id:");
            scanf("%s",id);
            printf("Nome:");
            scanf("%s",name);
            for(int i=0;i<4;i++){
                float nota;
                printf("Nota %d:",i+1);
                scanf("%f",&nota);
                grades[i]=nota;
            }
             T_STUDENT* student =create_student(id,name,grades);
             int result =add_student(list,student);
             if(result==1){
                printf("Cadastrado com sucesso!!!\n" );

             }else if(result==0){
                printf("Maximo de alunos cadastrados\n");
             }else{
                printf("Aluno ja cadastrado\n");
             }

        }else if(opcao==2){
            char id[10];
            printf("id:");
            scanf("%s",id);
            int result =search_student(list,id);
            if(result==-1){
                printf("Aluno não encontrado\n");
            }else{
                char nome[128];
                strcpy(nome, list->students[result]->name); 
                float* notas=list->students[result]->grades;
                printf("------------------------------------\n");
                printf("Nome: %s\n",nome);
                printf("Notas: ");
                for(int i=0;i<4;i++){
                    printf("%.2f ",notas[i]);
                }
                printf("\n");
                printf("------------------------------------\n");
            }

        }else if(opcao==3){
            char id[10];
            printf("id:");
            int result =remove_student(list,id);
            if (result==1){
                printf("Aluno removido com sucesso");

            }else{
                printf("Aluno nao encontrado\n");
            }

        }
        menu();
        printf("Digite uma opcao:");
        scanf("%d",&opcao);
    }


}