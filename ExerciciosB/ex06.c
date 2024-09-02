/*B006. Soma das raízes de uma equação do segundo grau
Faça um programa que leia os coeficientes a, b e c de uma equação do segundo grau ax² + bx + c. Após isso,
calcule e imprima a soma das raízes da equação. Se as raízes não forem reais, imprima nan (use
print(math.nan))
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a, b, c;
    printf("Coeficiente A: ");
    scanf("%f", &a);

    printf("Coeficiente B: ");
    scanf("%f", &b);

    printf("Coeficiente C: ");
    scanf("%f", &c);

    float delta = b * b - (4 * a * c);
    if (a != 0){
        if (delta < 0){
            printf("nan\n");
        }
        else{
            float somaRaizez = -b / a;
            printf("%.2f\n", somaRaizez);
        }
    }
    else{
        printf(" 'A' deve ser diferente de 0!!!!\n");
    }

    return 0;
}