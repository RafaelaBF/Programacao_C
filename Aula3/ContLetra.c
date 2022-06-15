#include <stdio.h>

// O programa conta quantas vezes uma letra aparece na frase que o usuário digitar.

int main()
{
    char frase[200];
    char letra[2]; 
    int cont = 0;
    
    printf("\nDigite uma frase: ");
    gets(frase); // Recebe a frase.
    
    printf("\nDigite um letra: ");
    gets(letra); // Recebe a letra.

    
    for (int i = 0; i < sizeof(frase); i++){ // Faz um loop do tamanho da frase.
        if (letra[0] == frase[i]){ // Verifica se o caracter da frase é igual a letra.
            cont += 1; // Se sim ele conta + 1.
        }
    }
    
    printf("\nO número de vezes que %s aparece na frase: \n %s \né: %d",letra, frase, cont);

    return 0;
}

