#include <stdio.h>
#include <math.h>

int main(){
	int num; // Declara o numero
	printf("Digite um numero: "); // Popula o numero
	scanf("%d", &num);
	int primo = true; // a principio tudo e primo, quem irar definir q nao e o for abaixo
	
	for (int i = 2; i < num/2; i++){ // checa se o numero e divisivel por algum numero ate a sua medate, Se nao ele e primo.
		if(num%i==0){
			primo=false;
			break;
		}
	}
	
	if(primo){ // for verdadeiro ainda e primo
		printf("O numero e primo");
	}else{
		printf("O numero nao e primo");
	}
}
