#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //Variáveis carta 01:
  char Estado1;
  char CodigoCarta1[3];
  char Cidade1[20];
  int poupulacao1;
  float Km1;
  float PIB1;
  int PontoTuristico1;

  // Área para entrada de dados

  //Carta 01
  printf("Carta 01: \n");

  printf("Digite uma letra de 'A' a 'H'(representando um dos oito estados): \n");
  scanf("%c", &Estado1);

  printf("Digite o código da carta, a letra do estado seguido de 01 a 04(ex: A01, B03): \n");
  scanf("%s", CodigoCarta1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", Cidade1);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &poupulacao1);

  printf("igite a área da cidade em quilômetros quadrados: \n");
  scanf("%f", Km1);

  printf("Digite o O Produto Interno Bruto da cidade: \n");
  scanf("%f", PIB1);

  printf("Digite a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", PontoTuristico1);
  


  // Área para exibição dos dados da cidade

return 0;
} 
