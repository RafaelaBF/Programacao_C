/*
 Questão 2
 Aluno: Rafaela Bezerra de Figueiredo. 3BINFO
 Compara duas palavras para ver se elas são iguais.
*/
#include <stdio.h>
#include <stdbool.h>

void comparaStr(char* s1, char* s2)
{
    bool iguais = true; // Varialvel que vai definir o estado da palavras, se é igual ou não. 
 
    // Pecorre a String, qual chegar no final primeiro.
    while (*s1 != '\0' || *s2 != '\0') {
        // Compara e se for igual ele continua a pecorrer, se não ele para e dar como concluido
		if (*s1 == *s2) {
            s1++;
            s2++;
        }
        else if ((*s1 != '\0' && *s2 == '\0')|| (*s1 == '\0' && *s2 != '\0')|| *s1 != *s2) {
        iguais = false;
        printf("Sao diferente\n");
        break;
        }
    }
    
    if (iguais == true) { // Caso depois de tudo continuar igual elas são iguais.
       printf("Sao iguais\n");
    }
}

int main()
{
	// Cria os vetores de char
    char str1[50]; 
    char str2[50]; 
    
    // Recebe a palavra e coloca no vetor de char.
	printf("Escreva uma palavra1: \n");
	gets(str1);		
	
	printf("Escreva uma palavra2: \n");
	gets(str2);	
	
    comparaStr(str1, str2);
    
    return 0;
}