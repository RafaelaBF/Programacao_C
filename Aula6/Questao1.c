#include <stdio.h>
/* 
 Questão 1
 Aluno: Rafaela Bezerra de Figueiredo. 3BINFO
 Concatena 2 palavras em um terceiro vetor.
*/
int main(){
	// Cria os vetores de char , o 1 o 2 e o que vai conter concatenacao.
	char str1[50];	
	char str2[50];
	char str3[100];
	
	// Tamanho da str1.
	int tamStr1 = 0; 
	
	// Recebe a palavra e coloca no vetor de char.
	printf("Escreva uma palavra1: \n");
	gets(str1);		
	
	printf("Escreva uma palavra2: \n");
	gets(str2);	
	
	// Coloca a primeira palavra no vetor 3 e conta ao mesmo tempo seu tamanho.	
	for(int i = 0; str1[i] != '\0'; i++){
		str3[i] = str1[i];		
		tamStr1++;
	}
	
	// Deixa um espaço entre as palavras.
	str3[tamStr1] = ' ';
	tamStr1++;
	
	// Coloca no resto do vetor 3 a 2 palavra.
	for(int i = 0; str2[i] != '\0'; i++){
		str3[tamStr1 + i] = str2[i];
	}
	
	printf("%s", str3); // Printa a String 3
	
	return 0;
}
