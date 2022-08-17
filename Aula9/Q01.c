/*
  Nome: Rafaela Bezerra
  Turma: 3BINFO
*/

/*
1 - Considerando uma lista de números inteiros desordenada (entrada via teclado).
Coloque em ordem decrescente (não vale utilizar função pronta - biblioteca).
*/

#include <stdio.h>

int main(){
    int repeticao = 3;
	int inteiros[repeticao];
	for (int i = 0; i < repeticao; i++){
		scanf("%d", &inteiros[i]);
	}
	
	for (int i = 0; i < repeticao; i++){
		for (int j = i+1; j < repeticao; j++){
			if(inteiros[i] < inteiros[j]){
                int aux = inteiros[i]; 
                inteiros[i] = inteiros[j]; 
                inteiros[j] = aux; 
			}
		}	
	}
	
	for (int i = 0; i < repeticao; i++){
		printf("inteiros[%d]: %d \n", i, inteiros[i]);
	}
}

