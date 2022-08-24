/*
  Nome: Rafaela Bezerra
  Turma: 3BINFO
*/

#include <stdio.h>

int main(){
    int repeticao = 5; // Quantidade de número que teram o array de número.
	int inteiros[repeticao]; // Array de inteiros.
	for (int i = 0; i < repeticao; i++){ // For que popula o array de inteiros.
		scanf("%d", &inteiros[i]);
	}
	
    // Fors que percorrem o array ordenandos
	for (int i = 0; i < repeticao; i++){ 
		for (int j = i+1; j < repeticao; j++){
			if(inteiros[i] < inteiros[j]){ // Checa se o numero atual(i) é menor e que os que são pecorridos no array, se sim ele troca.
                int aux = inteiros[i]; 
                inteiros[i] = inteiros[j]; 
                inteiros[j] = aux; 
			}
		}	
	}
	
	for (int i = 0; i < repeticao; i++){ // Printa os numeros ordenados em ordem decrescente
		printf("inteiros[%d]: %d \n", i, inteiros[i]);
	}
}