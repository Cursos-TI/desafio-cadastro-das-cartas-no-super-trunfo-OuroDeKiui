#include <stdio.h>

//Teste de commit pelo Vs code desktop!!!

//Para que não seja necessário o usuario digitar o PIB com todas as suas casas decimais e ser mais fácil de visualizar o PIB, o programa leva em consideração somente os dois ou três primeiros digitados pelo usuario. (EX.: "25" bilhoes ou "350" Bilhoes). 

//Para ser possível calcular o PIB per capita, o programa multiplica o  valor digitado pelo usuário por 10^9, e depois é feita a divisão pela população. 

int main() {
  //Declaração de variavel (PRIMEIRA CARTA!!)
  char estado;
  int numeroDaCidade;
  char nomeDaCidade[50];
  unsigned long int populacao; 
  float area; 
  float pib; 
  int pontosTuristicos; 
 
  //declaração variaveis de densidade e PIB per capita (PRIMEIRA CARTA!!)
  float densidadePopulacional;
  float pibPerCapita;
  
  //Declaração variavel super poder carta 1 
  float superPoder; 
  
  
  
  //cadastro dos itens (PRIMEIRA CARTA!!)
  printf(">>> CADASTRO PRIMEIRA CARTA <<< \n \n");
  
  printf("Escolha de A até H uma letra para o Estado: ");
  scanf("%c", &estado);
  
  printf("Digite um numero de \"1\" a \"4\" : ");
  scanf("%d", &numeroDaCidade); 
  
  printf("Escolha um nome para a cidade: ");
  scanf("%s", &nomeDaCidade);
  
  printf("Digite a quantidade de população: ");
  scanf("%lu", &populacao);
  
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
  pibPerCapita = pib*1000000000/populacao;
  
  //Calculo Super Poder carta 1
  superPoder = populacao + area + pib + pontosTuristicos + pibPerCapita + (1/densidadePopulacional);

  //mostrando o resultado para o usuario (PRIMEIRA CARTA!!)
  printf(">>> RESULTADO PRIMEIRA CARTA <<<\n \n");
 
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código da carta: %c0%d\n", estado, numeroDaCidade);
  printf("Nome da cidade: %s\n", nomeDaCidade);
  printf("População: %lu\n", populacao);
  printf("Area: %.2f Km² \n", area);
  printf("pib: %.2f bilhões de reais \n", pib);
  printf("Número de pontos turisticos: %d\n", pontosTuristicos); 
 
  //Resultado do calculo de densidade populacional e PIB per capita (PRIMEIRA CARTA!!)
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
  printf("PIB per capita: %.2f reais\n", pibPerCapita);
  
  //Resultado super poder carta 1  
  printf("Super poder: %.2f\n \n", superPoder); 


//....SEGUNDA CARTA!!!....

  //Definiçao de variavel (SEGUNDA CARTA!!)
  char estado2;
  int numeroDaCidade2;
  char nomeDaCidade2[50];
  unsigned long int populacao2; 
  float area2; 
  float pib2; 
  int pontosTuristicos2; 
 
 //definiçao das variaveis de densidade populacional e PIB per capita (SEGUNDA CARTA!!)
 float pibPerCapita2; 
 float densidadePopulacional2;
 
 //Declarando variavel super poder Segunda carta 
 float superPoder2;
 
  //cadastro dos itens da (SEGUNDA CARTA!!)
  printf(">>> CADASTRO SEGUNDA CARTA<<<\n \n");
 
  printf("Ignorando a letra escolhida anteriormente, escolha uma letra de A até H: ");
  scanf(" %c", &estado2);
  
  printf("Assim como na escolha da letra, escolha um número de \"1\" a \"4\" que nào tenha sido anteriormente usado: ");
  scanf(" %d", &numeroDaCidade2); 
  
  printf("Escolha um nome para a cidade: ");
  scanf(" %s", &nomeDaCidade2);
  
  printf("Digite a quantidade de população: ");
  scanf(" %lu", &populacao2);
  
  printf("Digite a Area da cidade: "); 
  scanf(" %f", &area2);
  
  printf("Digite o valor do PIB da cidade(Bilhoes): ");
  scanf(" %f", &pib2);
  
  printf("Digite a quantidade de pontos turisticos da cidade: \n");
  scanf("%d", &pontosTuristicos2);

   //Calculo da densidade populacional (SEGUNDA CARTA!!)
  densidadePopulacional2 = populacao2/area2;

  //Calculo do PIB per capita (SEGUNDA CARTA!!)
  pibPerCapita2 = pib2*1000000000/populacao2;
  
  //Calculo super poder carta 2 
  superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2);
  
  //resultado do cadastro (SEGUNDA CARTA!!)
  printf(">>> RESULTADO SEGUNDA CARTA <<< \n \n");
 "\n";
  printf("Carta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código da carta: %c0%d\n", estado2, numeroDaCidade2);
  printf("Nome da cidade: %s\n", nomeDaCidade2);
  printf("População: %lu\n", populacao2);
  printf("Area: %.2f Km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Número de pontos turisticos: %d\n", pontosTuristicos2);
 
  //Resultado do calculo de densidade populacional e PIB per capita (SEGUNDA CARTA!!)
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per capita: %.2f reais\n", pibPerCapita2);
  
  //resultado super poder segunda carta
  printf("Super poder: %.2f\n \n", superPoder2);
 
  //Aviso da finalização do cadastro das cartas
  printf(">>>> CADASTROS FINALIZADOS <<<<\n \n");
  
  //Aviso sobre o inicio da comparação entre as cartas 
  printf(">>>> COMPARAÇÃO PRIMEIRA E SEGUNDA CARTA <<<<\n \n");
  printf("AVISO! CONSIDERE '1' = 'CARTA 1 VENCEU' E '0' PARA 'CARTA 2 VENCEU'\n \n");
  
  
  
  //Comparação entre as duas cartas 
  printf("População: %d\n", populacao > populacao2); //população
  printf("Area: %d\n", area > area2); //area
  printf("PIB: %d\n", pib > pib2); //pib
  printf("Pontos turisticos: %d\n", pontosTuristicos > pontosTuristicos2); //pontos turisticos
  printf("PIB per capita: %d\n", pibPerCapita > pibPerCapita2); //pib per capita 
  printf("Densidade Populacional: %d\n", 1/densidadePopulacional > 1/densidadePopulacional2); //densidade populacional
  printf("Super Poder: %d\n \n \n", superPoder > superPoder2); //super poder
  
  printf("...PROGRAMA FINALIZADO...");
  
 return 0;
}