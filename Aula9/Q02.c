/*
  Nome: Rafaela Bezerra
  Turma: 3BINFO
*/

/*
2 - Considerando a entrada via teclado de um número na base hexadecimal converta para a base decimal. 
(Não vale utilizar a máscara no printf).
*/

#include <stdio.h>
#include <math.h>

int main(){
	char nH[2];
	printf("Num Hex: ");
	gets(nH);
	int nD;
	
	for(int i = 0; nH == '\0'; i){
	    switch(nH[i]){
	        case '0':
                nD = nD + (0*pow(16, i));
                break;
            case '1':
                nD = nD + (1*pow(16, i));
                break;
            case '2':
                nD = nD + (2*pow(16, i));
                break;
            case '3':
                nD = nD + (3*pow(16, i));
                break;
            case '4':
                nD = nD + (4*pow(16, i));
                break;
            case '5':
                nD = nD + (5*pow(16, i));
                break;
            case '6':
                nD = nD + (6*pow(16, i));
                break;
            case '7':
                nD = nD + (7*pow(16, i));
                break;
            case '8':
                nD = nD + (8*pow(16, i));
                break;
            case '9':
                nD = nD + (9*pow(16, i));
                break;
            case 'A':
                nD = nD + (10*pow(16, i));
                break;
            case 'B':
                nD = nD + (11*pow(10, i));
                break;
            case 'C':
                nD = nD + (12*pow(16, i));
                break;
            case 'D':
                nD = nD + (13*pow(16, i));
                break;
            case 'E':
                nD = nD + (14*pow(16, i));
                break;
            case 'F':
                nD = nD + (15*pow(16, i));
                break;
	    }
	}
	
	printf("Num Dec: %d", nD);
	
}
