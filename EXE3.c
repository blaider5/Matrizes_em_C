//Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz. 

#include <stdio.h>
#define a 4

int main(){
   int matriz[a][a], i, j;

    //preeche e mostra a matriz
    for(i=0; i<a; i++){
       for(j=0; j<a; j++){

           matriz[i][j]=i*j; //cálculo do produto
           
           printf("%d ", matriz[i][j]);
       }
       printf("\n");
   }
    return 0;
}