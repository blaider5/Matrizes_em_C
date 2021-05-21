//Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.

#include <stdio.h>
#define a 5

int main(){
   int matriz[a][a], i, j;

   //preenchendo a matriz
    for(i=0; i<a; i++){
       for(j=0; j<a; j++){
           if(i==j){
               matriz[i][j]=1;
           }
           else{
               matriz[i][j]=0;
           }
       }
    }

    //mostra a matriz
    for(i=0; i<a; i++){
       for(j=0; j<a; j++){
           printf("%d", matriz[i][j]);
       }
       printf("\n");
   }
    return 0;
}