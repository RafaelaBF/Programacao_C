#include  <stdio.h> 

/*
  Nome: Rafaela Bezerra
  Turma: 3BINFO
  */ 

int trocaInt(int *int1, int *int2){
  int aux;
  aux = *int1; // armazena na variavel aux o int1
  *int1 = *int2; // passa o int2 para o int1
  *int2 = aux; // passa o aux para int2
  return 0;
} 

int main()
{
  // Declara a matriz e seu valores
    int matriz1[3][3] = {21,22,23,34,35,36,37,38,39};
    int matriz2[3][3] = {11,12,13,44,45,46,47,48,49}; 

    for(int i = 0; i < 3; i++){ // Pecorre a matriz
        for(int j = 0; j < 3; j++){
          // Chama a função de troca e troca os valores
            trocaInt(&matriz1[i][j], &matriz2[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){ // Pecorre a matriz
        for(int j = 0; j < 3; j++){
           // Printa a matriz
            printf("[%d],[%d]\n", matriz1 [i][j], matriz2 [i][j]);
        }
    }
    
    
  return 0;
}
