/*
  Nome: Rafaela Bezerra
  Turma: 3BINFO
*/
#include <stdio.h>
#include <math.h>

int main(){
	char nH[16]; // Vetor para alocar o hexadecimal.
	printf("Num Hex: "); 
	gets(nH); // Popula o hexadecimal.
	int nD; // Decimal
	int c = 0; // Tamanho do hexa.
	
	for(int i = 0; nH[i]!='\0'; i++){ // Calcula o tamanho do hexa.
		c++;
	}
	
	for(int i = 0; i < c; i++){ // Percorre o vetor.
	    switch(nH[i]){ // Define qual é o caracter na posição i
	        case '0':
                nD = nD + (0*pow(16, c-1)); // Soma a nD a conversão do numero em Hexa 
                c--; // Diminui o tamanho em 1, pois já percorrido
                break; // Para se já achou
            case '1':
                nD = nD + (1*pow(16, c-1));
                c--;
                break;
            case '2':
                nD = nD + (2*pow(16, c-1));
                c--;
                break;
            case '3':
                nD = nD + (3*pow(16, c-1));
                c--;
                break;
            case '4':
                nD = nD + (4*pow(16, c-1));
                c--;
                break;
            case '5':
                nD = nD + (5*pow(16, c-1));
                c--;
                break;
            case '6':
                nD = nD + (6*pow(16, c-1));
                c--;
                break;
            case '7':
                nD = nD + (7*pow(16, c-1));
                c--;
                break;
            case '8':
                nD = nD + (8*pow(16, c-1));
                c--;
                break;
            case '9':
                nD = nD + (9*pow(16, c-1));
                c--;
                break;
            case 'A':
                nD = nD + (10*pow(16, c-1));
                c--;
                break;
            case 'B':
                nD = nD + (11*pow(16, c-1));
                c--;
                break;
            case 'C':
                nD = nD + (12*pow(16, c-1));
                c--;
                break;
            case 'D':
                nD = nD + (13*pow(16, c-1));
                c--;
                break;
            case 'E':
                nD = nD + (14*pow(16, c-1));
                c--;
                break;
            case 'F':
                nD = nD + (15*pow(16, c-1));
                c--;
                break;
	    }
	}
	
	printf("Num Dec: %d", nD); // Printa o decimal.
	
}
