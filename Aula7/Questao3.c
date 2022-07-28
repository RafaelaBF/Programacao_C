#include <stdio.h> 

/*
  Nome: Rafaela Bezerra
  Turma: 3BINFO
*/
  
// função para trocar os inteiros
int trocaInt(int *int1, int *int2){
  int aux;
  aux = *int1; // armazena na variavel aux o int1
  *int1 = *int2; // passa o int2 para o int1
  *int2 = aux; // passa o aux para int2
  return 0;
  
} 

int main()
{
  int int1, int2; // Declara os valores
  
  // Pega os valores
  printf("Entre com os valores\n");
  scanf("%d", &int1);
  printf("Entre com os valores\n");
  scanf("%d", &int2);
  
  // Chama a função
  trocaInt(&int1, &int2);
  
  // Printa trocado
  printf("%d, %d", int1, int2);
  return 0;
}
