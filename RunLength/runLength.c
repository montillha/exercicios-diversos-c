#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clean_buffer(FILE *fd) {
    int c;
    while((c=fgetc(fd))!='\n' && c!=EOF){}
}

void ler_matriz_P2(FILE* fd,int** matriz,int linha,int coluna){
    for (int i=0;i<linha; i++) {
        for (int j=0; j<coluna; j++) {
            fscanf(fd, "%d",&matriz[i][j]);
        }
          
    }

}

void compactar_arq(FILE *fd,FILE *fd_compactado,int linha,int coluna,int max_cinza,int** matriz){
    if(fd_compactado==NULL){
        printf("Erro ao abrir arquivo de saida");
    }else{
        ler_matriz_P2(fd,matriz,linha,coluna);
        fprintf(fd_compactado,"P8\n");
        fprintf(fd_compactado,"%d %d\n",coluna,linha);
        fprintf(fd_compactado,"%d\n",max_cinza);
 
        int num_referencia,num_atual;
        int quant=1;

        for (int i = 0; i<linha; i++) {
            num_referencia=matriz[i][0];
            for (int j= 1;j<coluna;j++) {
                num_atual=matriz[i][j];
                if(num_referencia==num_atual){
                    quant++;
                }else{
                    if(quant>3){
                        fprintf(fd_compactado,"@ %d %d ",num_referencia,quant);

                    }else{
                        for(int k=0; k<quant; k++){
                            fprintf(fd_compactado,"%d ",num_referencia);

                        }
                    }
                    quant=1;
                    num_referencia=matriz[i][j];
                }
            }
            if(quant>3) {
                fprintf(fd_compactado,"@ %d %d ",num_referencia, quant);
            }else{
                for(int k=0;k<quant;k++) {
                    fprintf(fd_compactado, "%d ",num_referencia);
                }
            }
            quant = 1;
            fprintf(fd_compactado, "\n"); 
        }

    }
}


void descompactar_arq(FILE *fd,FILE *fd_descompactado,int linha,int coluna,int max_cinza){
    if(fd_descompactado==NULL){
        printf("Erro ao abrir arquivo de saida");
    }else{
        fprintf(fd_descompactado,"P2\n");
        fprintf(fd_descompactado,"%d %d\n",coluna,linha);
        fprintf(fd_descompactado,"%d\n",max_cinza);
        clean_buffer(fd);

        char c;
        int num,quant;
        while ((c=fgetc(fd))!=EOF) {
            if (c=='@'){
                fscanf(fd,"%d %d",&num,&quant);
                for (int i = 0; i < quant; i++) {
                    fprintf(fd_descompactado, "%d", num); 
                    if(i!=quant-1){
                        fprintf(fd_descompactado," ");
                    }
                }
            } else if (c==' '|| c =='\n') {
                fprintf(fd_descompactado,"%c",c);  
            } else {  
                fprintf(fd_descompactado, "%c",c); 
            }
        }
    }
}


int main(int argc, char const *argv[]){


    char tipo[3];
    int coluna,linha,max_cinza;

    FILE *fd=fopen(argv[1],"r");
    FILE *fd_2= fopen(argv[2], "w");

    if (fd_2 == NULL) {
        printf("Erro ao abrir arquivo de saída\n");
        fclose(fd);
        return 1;
    }
    if(fd==NULL){
        printf("Erro ao abrir arquivo");
        return 1;
    }

    
    fgets(tipo, 3, fd);
    clean_buffer(fd);
    fscanf(fd,"%d %d",&coluna,&linha);
    fscanf(fd,"%d",&max_cinza);


    //matriz para gerenciar arq. P2
    int** matriz=(int**)malloc(sizeof(int*)*linha);
    for(int i=0;i<linha;i++){
        matriz[i]=(int*)(malloc(sizeof(int)*coluna));

    }

    if(strcmp(tipo,"P2")==0){
        compactar_arq(fd,fd_2,linha,coluna,max_cinza,matriz);

    }else{
        descompactar_arq(fd,fd_2,linha,coluna,max_cinza);
    }

    fclose(fd);
    fclose(fd_2);
    free(matriz);

    return 0;
}
   