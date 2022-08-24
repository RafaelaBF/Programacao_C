/*
  Nome: Rafaela Bezerra
  Turma: 3BINFO
*/

/*
Considerando a entrada via teclado de um número na base decimal converta para a base binária.
(Não vale utilizar a máscara no printf).
*/

#include <stdio.h>

int main(){
    int nD = 0; // Numero em decimal
    int bin[100]; // numero binario
    printf("Num Dec: \n"); // Popula numero decimal
    scanf("%d", &nD);

    int i = 0; // Tamanho do vetor bin
    if(nD/2!=0){ // Se a divição ter zero quer dizer q a 
        while(nD/2!=0){ 
            bin[i]=nD%2;
            if(nD/2==1){
                bin[i+1]=nD/2;
                i++;
                break;
            }else{
                nD = nD/2;
            }
            i++;
        }
    }else{
        bin[0]=nD%2;
    }

    for(int j = i; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}
