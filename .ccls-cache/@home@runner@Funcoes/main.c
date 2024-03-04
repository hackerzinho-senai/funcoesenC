#include <stdio.h>

void dizerBoatarde(char nome[20]){
  printf("Boa Tarde, %s gostoso", nome);
}

int main(void) {
  char nome1[20];
  printf("Qual seu nome?\nNome: ");
  scanf("%s", nome1);
  dizerBoatarde(nome1);
  return 0;
}