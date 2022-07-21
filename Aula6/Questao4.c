/* 
 Questão 4
 Aluno: Rafaela Bezerra de Figueiredo. 3BINFO
 Soma as linhas e a colunas da matriz de tamanho 2 por 2;
*/

#include <stdio.h>

int main(){
	
	// Cria as matrizes, o 1 o 2 e o que vai somar.
	int matriz1[2][2];			
	int matriz2[2][2];
	int matriz3[2][2];
	
	// Populando Matriz 1
	for(int i = 0; i < 2; i++){ // Pecorre a matriz		
		for(int j = 0; j < 2; j++){  // Pecorre a matriz
			printf("Entre com a linha %d da coluna %d da matriz 1: \n", i, j);
			scanf("%d", &matriz1[i][j]); // Add na matriz em suas respectivas linhas e colunas
		}
	}
	
	// Populando Matriz 2
	for(int i = 0; i < 2; i++){			
		for(int j = 0; j < 2; j++){
			printf("Entre com a linha %d da coluna %d da matriz 2: \n", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	// Soma a matriz 1 com a matriz 2
	for(int i = 0; i < 2; i++){	// Pecorre a matriz			
		for(int j = 0; j < 2; j++){ // Pecorre a matriz	
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j]; 
		}
	}
	
	// Printa a soma das linhas e colunas
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%d ", matriz3[i][j]);		
		}
	}
	
	return 0;
}


