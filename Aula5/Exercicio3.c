#include <stdio.h>

/* 
Nome:Rafaela Bezerra     Turma:3BINFO

Programa que checa se um numero é par ou não.
*/

int main(){
  int num; 
  int ch = 0;
  
  while (ch == 0){
      printf("Digite um numero par: ");
      scanf("%d", &num); // Recebe o numero
      
      if(num%2 == 1){ // se não, não é divisivel por 2
          printf("Esse numero não é par \n");
          continue;
      }
      
      ch = 1;
      printf("Esse numero é um par \n");  // se for divisivel o resto vai dar 0
  }

  return 0;
}