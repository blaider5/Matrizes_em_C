//Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
//A[i][j] = 2i + 7j − 2 se i < j;
//A[i][j] = 3i^2 − 1 se i = j;
//A[i][j] = 4i^3 − 5j^2 + 1 se i > j.

#include <stdio.h>
#include <math.h>

#define a 10

int main(){
    int m1[a][a], i, j;

    printf("            ::::::::::::::  MATRIZ  ::::::::::::::\n\n"); // TEM QUE ARRUMAR a Lógica do codigo

//preenche a matriz
    for(i=0; i<a; i++){
        for(j=0; j<a; j++){

            if(i<j){
            m1[i][j] = (2*i+7*j)-2;

            }
            else if (i==j){
            m1[i][j] = (3*pow(i, 2)-1);
            }
            else if(i>j){
            m1[i][j] = (4*pow(i, 3) - (5*pow(j, 2)+1));
            }

        }
    }

//mostra a matriz
     
     for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            printf("   %d ", m1[i][j]);

        }
        printf("\n");
    }
    return 0;
}