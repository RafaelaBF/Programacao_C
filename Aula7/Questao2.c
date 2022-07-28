#include <stdio.h> 

/*
Nome; Rafaela Bezerra
Turma: 3BINFO
  */ 

int main()
{
  // Declara os inteiros.
  char l1 = 'R', *pont1, l2 = 'E', *pont2;
  
  // Declara o emdereço de cada ponteiro;
  pont1 = &l1;
  pont2 = &l2;
  
  // Compara o tamnho dos ponteiros
  if(&l1 > &l2){
    printf("O endereco maior e o %p ", pont1);
  }else{
    printf("O endereço maior e o %p ", pont2);
  }
  
  return 0;
}
