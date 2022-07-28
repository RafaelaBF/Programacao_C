#include <stdio.h>
#include <stdbool.h> 

/*
Nome: Rafaela Bezerra
Turma: 3BINFO
*/ 

int main()
{
  // Declara as variaveis e os valores.
  int it = 5, *pontInt; 
  float fl = 3.7, *pontFl;
  char ch = 'C', *pontChar;
  bool bo = true, *pontBo;
  
  // Define o endereço na memoria de cada ponteiro.
  pontInt = &it;
  pontFl = &fl;
  pontChar = &ch;
  pontBo = &bo;
  
  // Printa os falores atuais.
  printf("A variavel inteira é: %d\n", it);
  printf("A variavel do tipo float é: %f\n", fl);
  printf("A variavel do tipo char é: %c\n", ch);
  printf("A variavel boleana é: %d\n", bo);
  
  // Muda os valores dos ponteiros e simultameamente
  das variaveis.
  *pontInt = 40;
  (*pontFl++);
  *pontChar = 'R';
  *pontBo = false;
  
  // Printa os novos valores.
  printf("A variavel inteira é: %d\n", it);
  printf("A variavel do tipo float é: %f\n", fl);
  printf("A variavel do tipo char é: %c\n", ch);
  printf("A variavel boleana é: %d\n", bo);
  
  return 0;
}
