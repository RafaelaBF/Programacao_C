#include <stdio.h>

/* 
Nome:Rafaela Bezerra     Turma:3BINFO

Programa que checa se um numero é par ou não.
*/

int main(){
  int num; 
  
    printf("Digite um numero par: ");
    scanf("%d", &num); // Recebe o numero
    
    switch (num%2) // Pega o resto da divisão por 2
    {
    case 0: // se for divisivel o resto vai dar 0
        printf("Esse numero é um par");
    break;
    default:// se não, não é divisivel por 2
        printf("Esse numero não é par");
        break;
    }

  return 0;
}