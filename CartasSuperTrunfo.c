#include <stdio.h>

int main() {

 //Declaração de variavel primeira carta
  char estado;
  int numeroDaCidade;
  char nomeDaCidade[50];
  int populacao; 
  float area; 
  float pib; 
  int pontosTuristicos; 

  // Declaração da variavel de Calculo Densidade populacional
  float densidadePopulacional;
 
  //Declaração da variavel de Calculo PIB per capita
  float pibPerCapita;
  
  
  
  //cadastro dos itens da primeira carta
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
 
//Calculo da Densidade Populacional e Resultado 
  densidadePopulacional = populacao/area;
  printf("Densidade populacional: %f", densidadePopulacional);

  //Calculo e Resultado PIB per Capita
  pibPerCapita = pib/populacao;
  printf("PIB per capita: %.2f", pibPerCapita); 

  printf("Cadastro da primeira carta finalizado! \n \n");
 
//mostrando o resultado para o usuario
 printf("Resultado do cadastro da primeira carta! \n \n");
 
 printf("Carta 1:\n");
 printf("Estado: %c\n", estado);
 printf("Código da carta: %c0%d\n", estado, numeroDaCidade);
 printf("Nome da cidade: %s\n", nomeDaCidade);
 printf("População: %d\n", populacao);
 printf("Area: %.2f Km² \n", area);
 printf("pib: %.2f bilhões de reais \n", pib);
 printf("Número de pontos turisticos: %d\n \n", pontosTuristicos); 
 

 
 
 //Definiçao de variavel segunda carta 
  char estado2;
  int numeroDaCidade2;
  char nomeDaCidade2[50];
  int populacao2; 
  float area2; 
  float pib2; 
  int pontosTuristicos2; 
 
  //cadastro dos itens da primeira carta
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
  
 
//mostrar resultado
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