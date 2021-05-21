//Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.

#include <stdio.h>
#define a 2

int main(){
   int matriz[a][a], i, j, maior, loca_i=0, loca_j=0;

   printf("Preencha a Matriz\n\n");
   matriz[0][0]=maior;

   //preeche a matriz
    for(i=0; i<a; i++){
       for(j=0; j<a; j++){
           printf("Insira o valor, posicao na matriz [%d] [%d] ", i,j);
           scanf("%d", &matriz[i][j]);
           if(matriz[i][j]>maior){
               maior=matriz[i][j];
               loca_i=i;
               loca_j=j;
           }
       }
       printf("\n");
   }
   printf("Maior valor: %d", maior);
   printf("\n\nCoordenadas do maior valor [%d], [%d]", i, j);

   return 0;
}