/*
  Nome: Rafaela Bezerra
  Turma: 3BINFO
*/



#include <stdio.h>

int main(){
    int nD = 0; // Numero em decimal
    int bin[100]; // numero binario
    printf("Num Dec: \n"); // Popula numero decimal
    scanf("%d", &nD);

    int i = 0; // Tamanho do vetor bin
    if(nD/2!=0){ // Se a divição ter zero quer dizer q a 
        while(nD/2!=0){ // Continua até o numero for menor que 2
            bin[i]=nD%2; // Pega o resto da divisão de 2 e coloca no vetor.
            if(nD/2==1){ // Se for igual a 1.. 
                bin[i+1]=nD/2; // A proximo casa do vertor é a divião em si e para
                i++;
                break;
            }else{
                nD = nD/2; // Continua dividindo
            }
            i++;
        }
    }else{
        bin[0]=nD%2; // Pega só o resto
    }

    for(int j = i; j >= 0; j--) { // Printa o binario
        printf("%d", bin[j]);
    }
}
