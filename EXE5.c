//Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse
//valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “nao encontrado”.
#include <stdio.h>
#define a 5

int main(){
   int matriz[a][a], i, j, busca, loca_i=0, loca_j=0, ver=0;

   printf("Preencha a Matriz\n\n");
  

   //preeche a matriz
    for(i=0; i<a; i++){
       for(j=0; j<a; j++){
           printf("Insira o valor, posicao na matriz [%d] [%d] ", i,j);
           scanf("%d", &matriz[i][j]);
       }
       printf("\n");
   }
   
   printf("Insira o valor a ser buscado: ");
   scanf("%d", &busca);
    
    //fazendo a busca
    for(i=0; i<a; i++){
       for(j=0; j<a; j++){
           if(matriz[i][j]==busca){
           loca_i=i;
           loca_j=j;
           ver=1;
           }
       }
       printf("\n");
   }
   if(ver==1){
       printf("Coordenadas do valor [%d], [%d] ", loca_i+1,loca_j+1);
   }
   else{
       printf("Valor nao encontrado");
   }
   

   return 0;
}

