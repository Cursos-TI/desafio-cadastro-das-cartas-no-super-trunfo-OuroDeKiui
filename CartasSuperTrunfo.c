#include <stdio.h>

int main() {
  //Declaração de variavel (PRIMEIRA CARTA!!)
  char estado;
  int numeroDaCidade;
  char nomeDaCidade[50];
  int populacao; 
  float area; 
  float pib; 
  int pontosTuristicos; 
 
  //declaração variaveis de densidade e PIB per capita (PRIMEIRA CARTA!!)
  float densidadePopulacional;
  float pibPerCapita;
  
  
  
  //cadastro dos itens (PRIMEIRA CARTA!!)
  printf("Cadastro da primeira carta! \n \n");
  
  printf("Escolha de A até H uma letra para o Estado: ");
  scanf("%c", &estado);
  
  printf("Digite um numero de \"1\" a \"4\" : ");
  scanf("%d", &numeroDaCidade); 
  
  printf("Escolha um nome para a cidade: ");
  scanf("%s", &nomeDaCidade);
  
  printf("Digite a quantidade de população: ");
  scanf("%d", &populacao);
  
  printf("Digite a Area da cidade(km²): "); 
  scanf("%f", &area);
  
  printf("Digite o valor do PIB da cidade(Bilhoes): ");
  scanf("%f", &pib);
  
  printf("Digite a quantidade de pontos turisticos da cidade:\n");
  scanf("%d", &pontosTuristicos);
 
  printf("Cadastro da primeira carta finalizado! \n \n");
  
  //Calculo da densidade populacional (PRIMEIRA CARTA!!)
  densidadePopulacional = populacao/area;

  //Calculo do PIB per capita (PRIMEIRA CARTA!!)
  pibPerCapita = populacao/pib;

  //mostrando o resultado para o usuario (PRIMEIRA CARTA!!)
  printf("Resultado do cadastro da primeira carta! \n \n");
 
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código da carta: %c0%d\n", estado, numeroDaCidade);
  printf("Nome da cidade: %s\n", nomeDaCidade);
  printf("População: %d\n", populacao);
  printf("Area: %.2f Km² \n", area);
  printf("pib: %.2f bilhões de reais \n", pib);
  printf("Número de pontos turisticos: %d\n \n", pontosTuristicos); 
 
  //Resultado do calculo de densidade populacional e PIB per capita (PRIMEIRA CARTA!!)
  printf("Densidade Populacional: %f hab/km²\n");
  printf("PIB per capita: %f reais");



//....SEGUNDA CARTA!!!....

  //Definiçao de variavel (SEGUNDA CARTA!!)
  char estado2;
  int numeroDaCidade2;
  char nomeDaCidade2[50];
  int populacao2; 
  float area2; 
  float pib2; 
  int pontosTuristicos2; 
 
  //cadastro dos itens da (SEGUNDA CARTA!!)
  printf("Agora iremos cadastrar a segunda carta \n \n");
 
  printf("Escolha de A até H uma letra para o Estado: ");
  scanf(" %c", &estado2);
  
  printf("Digite um numero de \"1\" a \"4\" : ");
  scanf(" %d", &numeroDaCidade2); 
  
  printf("Escolha um nome para a cidade: ");
  scanf(" %s", &nomeDaCidade2);
  
  printf("Digite a quantidade de população: ");
  scanf(" %d", &populacao2);
  
  printf("Digite a Area da cidade: "); 
  scanf(" %f", &area2);
  
  printf("Digite o valor do PIB da cidade: ");
  scanf(" %f", &pib2);
  
  printf("Digite a quantidade de pontos turisticos da cidade: \n \n");
  scanf(" %d", &pontosTuristicos2);
  "\n";
  
 
  //resultado do cadastro (SEGUNDA CARTA!!)
  printf("Resultado do cadastro da segunda carta! \n \n");
 "\n";
  printf("Carta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código da carta: %c0%d\n", estado2, numeroDaCidade2);
  printf("Nome da cidade: %s\n", nomeDaCidade2);
  printf("População: %d\n", populacao2);
  printf("Area: %.2f Km² \n", area2);
  printf("pib: %.2f bilhões de reais \n", pib2);
  printf("Número de pontos turisticos: %d\n", pontosTuristicos2);
 
 
 return 0;
}