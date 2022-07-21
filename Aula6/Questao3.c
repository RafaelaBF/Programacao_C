/* 
 Questão 3
 Aluno: Rafaela Bezerra de Figueiredo. 3BINFO
 Conta o tamanho de uma String.
*/
#include <stdio.h>

int main(){
	// Cria os vetores de char.
    char str1[50];  
    
    // Recebe a palavra e coloca no vetor de char.
	printf("Escreva uma palavra: \n");
	gets(str1);		
	
	// Conta os caracteres para saber o tamanho da String.
	int TamStr = 0;	
	
	// Pecorre a String até o final somando mais 1 ao TamStr a casa caracter.
	for(int i = 0; str1[i] != '\0'; i++){
		TamStr++;
	}
	
	printf("Tamanho da string: %d", TamStr);
	return 0;
}
