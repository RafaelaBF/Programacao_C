#include <stdio.h>

/* 
Nome:Rafaela Bezerra     Turma:3BINFO

Programa que pede um número de entrada e compara com o numero secreto, se o numero acertar a divisibilidade do numero
ele da uma dica.
*/

int main(){
  int numSecreto = 18;  // Numero secreto
  int num; 
  int ch; // Variavel para parar o loop
  
  do {
    printf("Acerte o numero: ");
    scanf("%d", &num); // Recebe o numero
    
    if (numSecreto == num){ // Se o numero for igual ao numero secreto
      printf("Parabens esse é o numero secreto");
      ch = 0;
    
    }else{
        if (numSecreto%2 == 0 && num%2 == 0){ // Se o numero secreto for par e numero tambem ele da a dica
          printf("Continue com os pares...kkkk! Mas tente de novo \n");
        }else{
            if (numSecreto%2 != 0 && num%2 != 0){ // Se o numero secreto for impar e numero tambem ele da a dica
             printf("Continue com os impar...kkkk! Mas tente de novo \n");
            }
        }
        ch = 1;
    }
    
  }while (ch == 1); // Checa se ele acertou e para o loop 
  
  return 0;
}