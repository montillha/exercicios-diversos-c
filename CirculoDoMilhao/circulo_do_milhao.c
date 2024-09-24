#include <stdio.h>
#include <stdlib.h>

void criar_vetor(int n, int vetorPessoas[]) {
    for (int i = 0; i < n; i++) {
        vetorPessoas[i] = i + 1; 
    }
}
int definir_ganhador_eliminado(int n,int x,int vetorPessoas[]){
    int pessoasRestantes = n;
    int totalEliminados = 0;
    int i = 1;  

    int xEliminado;  

    while (pessoasRestantes > 1) {

        i = i % pessoasRestantes; 
        totalEliminados++;

        if (totalEliminados == x) {
            xEliminado = vetorPessoas[i];
        }
        for (int j = i; j < pessoasRestantes - 1; j++) {
            vetorPessoas[j] = vetorPessoas[j + 1];  
        }
        pessoasRestantes--;  
        i++; 
    
    }
    return xEliminado;

}

int main() {
    int n, x;
    printf("Quantidade de pessoas: ");
    scanf("%d", &n);
    printf("x-ésima pessoa a ser eliminada: ");
    scanf("%d", &x);
    int vetorPessoas[n];
    criar_vetor(n, vetorPessoas); 
    int eliminado= definir_ganhador_eliminado(n,x,vetorPessoas);   
    printf("X-eliminado: %d\n", eliminado);
    printf("Ganhadora: %d\n", vetorPessoas[0]);
    return 0;
}

