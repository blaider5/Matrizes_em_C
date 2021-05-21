//Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

#include <stdio.h>
#define a 4

int main(){
   int matriz[a][a], i, j, cont=0;

   printf("Insira os valores para a matriz\n\n");

    //recebe os valores da matriz
   for(i=0; i<a; i++){
       for(j=0; j<a; j++){
           printf("Insira o valor, posicao na matriz [%d] [%d] ", i,j);
           scanf("%d", &matriz[i][j]);
       }
       printf("\n");
   }
   //faz a contagem dos valores

    for(i=0; i<a; i++){
       for(j=0; j<a; j++){
           if(matriz[i][j]>10){
               cont++;
           }
           
       }
   }
   if(cont==0){
       printf("Nao existe nenhum valor");
   }
   else{
       printf("Existem %d valores maiores que 10", cont);
   }

    return 0;
}