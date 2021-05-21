//Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal. 

#include <stdio.h>
#define a 3

int main(){

    int m1[a][a], i, j, soma=0;
    printf("Preencha a Matriz\n\n");

    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            printf("Insira o valor [%d] [%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
        printf("\n");
    }

//faz a soma
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            if(j>i){
              soma+=m1[i][j];
            }  
        }
    }

    printf("Soma elementos acima da diagonal = %d", soma);

    return 0;
}