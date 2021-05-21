//Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas. 

#include <stdio.h>
#define a 4

int main(){
    int m1[a][a], m2[a][a], m3[a][a], i, j;

//recebe os dados, primeira
    printf(":::: PRIMEIRA MATRIZ ::::\n\n");
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            printf("Insira o valor [%d] [%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
        printf("\n");
    }

//recebe os dados, segunda
    printf(":::: SEGUNDA MATRIZ ::::\n\n");
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            printf("Insira o valor [%d] [%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
        printf("\n");
    }

//maiores valores, terceira
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            if(m1[i][j]>m2[i][j]){
                m3[i][j]=m1[i][j];

            }else{
                m3[i][j]=m2[i][j];
            }
        }
        printf("\n");
    }

//mostra a terceira matriz
    printf(":::: TERCEIRA MATRIZ ::::\n\n");                        
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            printf("      %d   ", m3[i][j]);
    
        }
        printf("\n");
    }

    return 0;
}
