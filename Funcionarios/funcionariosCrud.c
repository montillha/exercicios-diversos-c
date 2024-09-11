#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char cpf[12];
    char nome[52];
    char cargo[52];
    int dependentes;
    float salario_base;

} T_FUNCIONARIO;

void menu(){
    printf("============================================\n");
    printf("Menu\n");
    printf("1. Inserir um novo funcionário\n");
    printf("2. Consultar dados de um funcionário\n");
    printf("3. Imprimir todos os funcionários\n");
    printf("4. Excluir um funcionário\n");
    printf("5. Alterar um funcionário\n");
    printf("6. Sair do programa\n");
    printf("============================================\n");
}
int existeFuncionario(char* cpf, T_FUNCIONARIO* funcionarios,int* tamanho_func){
        for(int i=0;i<*tamanho_func;i++){
           if(strcmp(funcionarios[i].cpf,cpf)==0){
               return 1;
            }
          
        }
        return 0;

}
int adicionar(char* cpf,char* nome,char* cargo,int dependentes,float salario,T_FUNCIONARIO* funcionarios, int* tamanho_func){
    int existe =existeFuncionario(cpf,funcionarios,tamanho_func);
    if(existe==1){
        return 0;
    }else{
        strcpy(funcionarios[*tamanho_func].cpf,cpf);
        strcpy(funcionarios[*tamanho_func].nome,nome);
        strcpy(funcionarios[*tamanho_func].cargo,cargo);
        funcionarios[*tamanho_func].dependentes=dependentes;
        funcionarios[*tamanho_func].salario_base=salario;

        *tamanho_func+=1;
        return 1;
    }
}
int imprimirFuncionario(char* cpf,T_FUNCIONARIO* funcionarios,int* tamanho_func){
    int existe=existeFuncionario(cpf,funcionarios,tamanho_func);
    if(existe==0){
        return 0;
    }else{
        for(int i=0;i<*tamanho_func;i++){
           if(strcmp(funcionarios[i].cpf,cpf)==0){
            printf("-----------------------------------\n");
            printf("CPF: %s\n",funcionarios[i].cpf);
            printf("Nome: %s\n",funcionarios[i].nome);
            printf("Cargo: %s\n",funcionarios[i].cargo);
            printf("Dependentes: %d\n",funcionarios[i].dependentes);
            printf("Salario Base: %.2f\n",funcionarios[i].salario_base);
            printf("-----------------------------------\n");
           }
        }  
        return 1; 
    }

}

int imprimirFuncionarios(T_FUNCIONARIO* funcionarios,int* tamanho_func){
        for(int i=0;i<*tamanho_func;i++){
            printf("-----------------------------------\n");
            printf("CPF: %s\n",funcionarios[i].cpf);
            printf("Nome: %s\n",funcionarios[i].nome);
            printf("Cargo: %s\n",funcionarios[i].cargo);
            printf("Dependentes: %d\n",funcionarios[i].dependentes);
            printf("Salario Base: %.2f\n",funcionarios[i].salario_base);
            printf("-----------------------------------\n");
        }
} 
int excluir(char* cpf,T_FUNCIONARIO* funcionarios,int* tamanho_func){
     int existe =existeFuncionario(cpf,funcionarios,tamanho_func);
    if(existe==0){
        return 0;
    }else{
        int i=0;
        int achou=0;
        while(i<*tamanho_func&&achou==0){
           if(strcmp(funcionarios[i].cpf,cpf)==0){
            int remover=i;
            achou=1;
            for(int j=i;j<(*tamanho_func)-1;j++){
                funcionarios[j]=funcionarios[j++];

            }
    
           }
              i++;
        }  
        *tamanho_func-=1;
        return 1; 
        
    }

} 
int alterar(char* cpf,char* nome, char* cargo,int dependentes, float salario,T_FUNCIONARIO* funcionarios,int* tamanho_func){
    int existe =existeFuncionario(cpf,funcionarios,tamanho_func);
    if(existe==0){
        return 0;
    }else{   
        for (int i = 0; i < *tamanho_func; i++) {
            if (strcmp(funcionarios[i].cpf, cpf) == 0) {
               strcpy(funcionarios[i].nome, nome);
               strcpy(funcionarios[i].cargo, cargo);
               funcionarios[i].dependentes = dependentes;
               funcionarios[i].salario_base = salario;
            return 1; 
        }
    }

    }
}
        

int main(){

    T_FUNCIONARIO* funcionarios;
    funcionarios=(T_FUNCIONARIO*)malloc(sizeof(T_FUNCIONARIO)*500);
    int tamanho_funcionarios=0;

    int opcao;
    menu();
    printf("Escolha uma opção:");
    scanf("%d", &opcao);
    while (opcao != 6){
        if (opcao == 1){
            char cpf[12];
            char nome[52];
            char cargo[52];
            int dependentes;
            float salario_base;

            printf("CPF:");
            scanf("%s",cpf);
            

            printf("Nome:");
            scanf("%s",nome);

            printf("Cargo:");
            scanf("%s",cargo);

            printf("Numero de Dependentes:");
            scanf("%d",&dependentes);

            printf("Salario Base:");
            scanf("%f",&salario_base);

            int resultado=adicionar(cpf,nome,cargo,dependentes,salario_base,funcionarios,&tamanho_funcionarios);
            if (resultado==0){
                printf("Funcionario ja cadastrado!!!\n");
            }else{
                printf("Funcionario cadastrado com sucesso!!!\n");
              
            }
        }
        else if (opcao == 2){
            char cpf[12];
            printf("CPF:");
            scanf("%s",cpf);
            int resultado=imprimirFuncionario(cpf,funcionarios,&tamanho_funcionarios);
            if (resultado==0){
                printf("Funcionario nao encontrado\n");
            }

        }else if (opcao == 3){

            imprimirFuncionarios(funcionarios,&tamanho_funcionarios);

        }else if (opcao == 4){
            char cpf[12];
            printf("CPF:");
            scanf("%s",cpf);
            int resultado=excluir(cpf,funcionarios,&tamanho_funcionarios);
            if (resultado==0){
                printf("Funcionario nao encontrado!!!\n");
            }else{
                printf("Funcionario excluido com sucesso!!!\n");

            }


        }else if(opcao==5){
            char cpf[12];
            char nome[52];
            char cargo[52];
            int dependentes;
            float salario_base;
            printf("CPF :");
            scanf("%s",cpf);

            printf("Nome novo:");
            scanf("%s",nome);

            printf("Cargo novo:");
            scanf("%s",cargo);

            printf("Numero de Dependentes novo:");
            scanf("%d",&dependentes);

            printf("Salario Base novo:");
            scanf("%f",&salario_base);
            int resultado =alterar(cpf,nome,cargo,dependentes,salario_base,funcionarios,&tamanho_funcionarios);
            if (resultado==0){
                printf("Funcionario nao encontrado!!!\n");
            }else{
                printf("Funcionario alterado com sucesso!!!\n");

            }

        }else if (opcao < 1 || opcao > 6){
            printf("escolha inválida!");
        }
        menu();
        printf("Escolha uma opção:\n");
        scanf("%d", &opcao);
    }
    free(funcionarios);

    return 0;
}