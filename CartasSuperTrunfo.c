#include <stdio.h>

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
printf("_____________________________________ \n");
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

printf("_____________________________________ \n");
printf("Cadastro da primeira carta finalizado! \n \n");

//Calculo da densidade populacional (PRIMEIRA CARTA!!)
densidadePopulacional = populacao/area;

//Calculo do PIB per capita (PRIMEIRA CARTA!!)
pibPerCapita = pib*1000000000/populacao;

//Calculo Super Poder carta 1
superPoder = populacao + area + pib + pontosTuristicos + pibPerCapita + (1/densidadePopulacional);

//mostrando o resultado para o usuario (PRIMEIRA CARTA!!)
printf("_____________________________________ \n");
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
printf("_____________________________________ \n");
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
printf("_____________________________________ \n");
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
printf("_____________________________________ \n");
printf(">>>> CADASTROS FINALIZADOS <<<<\n \n");

//Variavel de escolha do menu de interação
int escolhaMenu;

printf("### MENU DE INTERAÇÃO ### \n");
printf("1. Comparação individual de atributos \n");
printf("2. Comparação geral de atributos \n");
printf("3. Comparação de dois atributos \n \n");
printf("Escolha uma opção: ");
scanf("%d", &escolhaMenu);
printf("------------------------- \n \n");

//LOGICA DO MENU DE INTERAÇÃO
switch(escolhaMenu){

    //COMPARAÇÃO INDIVIDUAL DE ATRIBUTOS
    case 1: 
        printf("### COMPARAÇÃO INDIVIDUAL DE ATRIBUTOS ### \n");
        
        //ESCOLHA DE QUAL ATRIBUTO À SER COMPARADO
        int escolhaAtributoIndividual;

        printf("1. População \n");
        printf("2. Area \n");
        printf("3. PIB \n");
        printf("4. Pontos Turisticos \n"); 
        printf("5. Densidade Populacional \n");
        printf("Escolha o atributo à ser comparado: ");
        scanf("%d", &escolhaAtributoIndividual);
        printf("------------------------- \n \n");

        //LOGICA DA ESCOLHA DE ATRIBUTO
        switch(escolhaAtributoIndividual){

            //COMPARAÇÃO INDIVIDUAL>>> POPULAÇÃO
            case 1:
            printf("### COMPARAÇÃO INDIVIDUAL ATRIBUTO: POPULACAO ### \n");
            printf("Carta 1 - População: %lu \n", populacao);
            printf("Carta 2 - População: %lu \n", populacao2);
                
                //LÓGICA DA COMPARAÇÃO INDIVIDUAL >>> POPULACAO
                if(populacao > populacao2){
                    printf("Carta 1 venceu \n");
                } else{
                    printf("Carta 2 venceu \n");
                }
            break;
            
            //COMPARAÇÃO INDIVIDUAL>>> AREA
            case 2: 
            printf("### COMPARAÇÃO INDIVIDUAL ATRIBUTO: AREA ### \n");
            printf("Carta 1 - Area: %.2f \n", area);
            printf("Carta 2 - Area: %.2f \n", area2);
                
                //LÓGICA DA COMPARAÇÃO INDIVIDUAL >>> AREA
                if(area > area2){
                    printf("Carta 1 venceu \n");
                } else{
                    printf("Carta 2 venceu \n");
                }
            break;

            //COMPARAÇÃO INDIVIDUAL>>> PIB
            case 3: 
            printf("### COMPARAÇÃO INDIVIDUAL ATRIBUTO: PIB ### \n");
            printf("Carta 1 - PIB: %.2f \n", pib);
            printf("Carta 2 - PIB: %.2f \n", pib2);
                
                //LÓGICA DA COMPARAÇÃO INDIVIDUAL >>> PIB
                if(pib > pib2){
                    printf("Carta 1 venceu \n");
                } else{
                    printf("Carta 2 venceu \n");
                }
            break;

            //COMPARAÇÃO INDIVIDUAL>>> PONTOS TURISTICOS
            case 4: 
            printf("### COMPARAÇÃO INDIVIDUAL ATRIBUTO: PONTOS TURISTICOS ### \n");
            printf("Carta 1 - Pontos turisticos: %d \n", pontosTuristicos);
            printf("Carta 2 - Pontos turisticos: %d \n", pontosTuristicos2);
                
                //LÓGICA DA COMPARAÇÃO INDIVIDUAL >>> PONTOS TURISTICOS
                if(pontosTuristicos > pontosTuristicos2){
                    printf("Carta 1 venceu \n");
                } else{
                    printf("Carta 2 venceu \n");
                }
            break;

            //COMPARAÇÃO INDIVIDUAL>>> DENSIDADE POPULACIONAL
            case 5: 
            printf("### COMPARAÇÃO INDIVIDUAL ATRIBUTO: DENSIDADE POPULACIONAL ###\n");
            printf("Carta 1 - Densidade Populacional: %.2f \n", densidadePopulacional);
            printf("Carta 2 - Densidade Populacional: %.2f \n", densidadePopulacional2);
                
                //LÓGICA DA COMPARAÇÃO INDIVIDUAL >>> DENSIDADE POPULACIONAL
                if(1/densidadePopulacional > 1/densidadePopulacional2){
                    printf("Carta 1 venceu \n");
                } else{
                    printf("Carta 2 venceu \n");
                }
            break;
            default:
              printf("Escolha uma opção valida \n");
            
                
            
        }
    break;
    //COMPARAÇÃO GERAL DE ATRIBUTOS
    case 2:
    printf("### COMPARAÇÃO GERAL DE ATRIBUTOS ### \n");

      //GERAL POPULAÇÃO 
      if(populacao > populacao2) {
        printf("População: Carta 1 venceu \n");
      } else{
        printf("População: Carta 2 venceu \n"); 
      }
      
      //GERAL AREA
      if(area > area2) {
        printf("Area: Carta 1 venceu \n");
      } else{
        printf("Area: Carta 2 venceu \n"); 
      }
      
      //GERAL PIB
      if(pib > pib2) {
      printf("PIB: Carta 1 venceu \n");
      } else{
      printf("PIB: Carta 2 venceu \n"); 
      }
      
      //GERAL PIB PER CAPITA
      if(pibPerCapita > pibPerCapita2) {
      printf("PIB per capita: Carta 1 venceu \n");
      } else{
      printf("PIB per capita: Carta 2 venceu \n"); 
      }

      //GERAL PONTOS TURISTICOS
      if(pontosTuristicos > pontosTuristicos2) {
        printf("Pontos turisticos: Carta 1 venceu \n");
      } else{
        printf("Pontos turisticos: Carta 2 venceu \n"); 
      }
      
      //GERAL DENSIDADE POPULACIONAL
      if(1/densidadePopulacional > 1/densidadePopulacional2) {
        printf("Densidade Populacional: Carta 1 venceu \n");
      } else{
        printf("Densidade Populacional: Carta 2 venceu \n"); 
      }
      
      //GERAL SUPER PODER
      if(superPoder > superPoder2) {
        printf("Super Poder: Carta 1 venceu \n");
      } else{
        printf("Super Poder: Carta 2 venceu \n"); 
      }
    break;

    case 3:
    
    //Variavel de escolha da comparação de dois atributos
    int primeiroAtributo, segundoAtributo, resultado1, resultado2;

    printf("### Comparação de dois atributos ### \n \n");            
    printf("1. População \n");
    printf("2. Area \n");
    printf("3. PIB \n");
    printf("4. Pontos Turisticos \n"); 
    printf("5. Densidade Populacional \n \n"); 
    printf("...Escolha o 1º atributo (1/2)... \n");
    scanf("%d", &primeiroAtributo);
    printf("...Escolha o 2º atributo (2/2)... \n");
    scanf("%d", &segundoAtributo);
    printf("_____________________________________ \n \n");

    //proteção contra escolha do mesmo atributo
    if(primeiroAtributo == segundoAtributo){
        printf("Falha na escolha dos atributos! \n");
        printf("Os atributos comparados não podem ser iguais \n \n");
    }
    
    //COMPARAÇÃO DOIS ATRIBUTOS: POPULACAO
    if(primeiroAtributo == 1){
        printf("Comparação (1/2)...\n \n");
        printf("Atributo: população\n");
        printf("Carta 1: %d\n", populacao);
        printf("Carta 2: %d\n\n", populacao2);
                                      
        if(populacao > populacao2){
            printf("População: Carta 1 venceu \n");
            printf("------------------------- \n \n");
        } else{
            printf("População: Carta 2 venceu \n");
            printf("------------------------- \n \n");
        }
    //COMPARAÇÃO DOIS ATRIBUTOS: AREA
    } else if(primeiroAtributo == 2){
        printf("Comparação (1/2)...\n\n");
        printf("Atributo: Area\n");
        printf("Carta 1: %.2f\n", area);
        printf("Carta 2: %.2f\n", area2);
        
        
        if(area > area2){
            printf("Area: Carta 1 venceu \n");
            printf("------------------------- \n \n");
        } else{
            printf("Area: Carta 2 venceu \n");
            printf("------------------------- \n \n");
        }
    
    //COMPARAÇÃO DOIS ATRIBUTOS: PIB
    } else if(primeiroAtributo == 3){
        printf("Comparação (1/2)...\n\n");
        printf("Atributo: PIB\n");
        printf("Carta 1: %.2f\n", pib);
        printf("Carta 2: %.2f\n", pib2);
        
        
        if(pib > pib2){
            printf("PIB: Carta 1 venceu \n");
            printf("------------------------- \n \n");
        } else{
            printf("PIB: Carta 2 venceu \n");
            printf("------------------------- \n \n");
        }
    
    //COMPARAÇÃO DOIS ATRIBUTOS: PONTOS TURISTICOS
    } else if(primeiroAtributo == 4){
        printf("Comparação (1/2)... \n \n ");
        printf("Atributo: Pontos Turísticos \n ");
        printf("Carta 1: %d \n ", pontosTuristicos);
        printf("Carta 2: %d \n ", pontosTuristicos2);
                    
        if(pontosTuristicos > pontosTuristicos2){
            printf("Pontos turísticos: Carta 1 venceu \n");
            printf("------------------------- \n \n");
        } else{
            printf("Pontos Turísticos: Carta 2 venceu \n");
            printf("------------------------- \n \n");
        }

    //COMPARAÇÃO DOIS ATRIBUTOS: DENISADE POPULACIONAL
    } else if(primeiroAtributo == 5){
        printf("Comparação (1/2)...\n\n");
        printf("Atributo: Densidade Populacional \n");
        printf("Carta 1: %.2f\n", densidadePopulacional);
        printf("Carta 2: %.2f\n\n", densidadePopulacional2);
        
        
        if(1/densidadePopulacional > 1/densidadePopulacional2){
            printf(" Densidade Populacional: Carta 1 venceu \n");
            printf("------------------------- \n \n");
        } else{
            printf("Densidade Populacional: Carta 2 venceu \n");
            printf("------------------------- \n \n");
        }
    }

    //COMPARAÇÃO SEGUNDO ATRIBUTO

      //COMPARAÇÃO DOIS ATRIBUTOS: POPULACAO
      if(segundoAtributo  == 1){
        printf("Comparação (2/2)...\n \n");
        printf("Atributo: população\n");
        printf("Carta 1: %d\n", populacao);
        printf("Carta 2: %d\n\n", populacao2);
                                      
        if(populacao > populacao2){
            printf("População: Carta 1 venceu \n");
            printf("------------------------- \n \n");
        } else{
            printf("População: Carta 2 venceu \n");
            printf("------------------------- \n \n");
        }
    //COMPARAÇÃO DOIS ATRIBUTOS: AREA
    } else if(segundoAtributo == 2){
        printf("Comparação (2/2)...\n\n");
        printf("Atributo: Area\n");
        printf("Carta 1: %.2f\n", area);
        printf("Carta 2: %.2f\n", area2);
        
        
        if(area > area2){
            printf("Area: Carta 1 venceu \n");
            printf("------------------------- \n \n");
        } else{
            printf("Area: Carta 2 venceu \n");
            printf("------------------------- \n \n");
        }
    
    //COMPARAÇÃO DOIS ATRIBUTOS: PIB
    } else if(segundoAtributo == 3){
        printf("Comparação (2/2)...\n\n");
        printf("Atributo: PIB\n");
        printf("Carta 1: %.2f\n", pib);
        printf("Carta 2: %.2f\n", pib);
        
        
        if(pib > pib2){
            printf("PIB: Carta 1 venceu \n");
            printf("------------------------- \n \n");
        } else{
            printf("PIB: Carta 2 venceu \n");
            printf("------------------------- \n \n");
        }
    
    //COMPARAÇÃO DOIS ATRIBUTOS: PONTOS TURISTICOS
    } else if(segundoAtributo == 4){
        printf("Comparação (2/2)... \n \n ");
        printf("Atributo: Pontos Turísticos \n ");
        printf("Carta 1: %d \n ", pontosTuristicos);
        printf("Carta 2: %d \n ", pontosTuristicos2);
                    
        if(pontosTuristicos > pontosTuristicos2){
            printf("Pontos turísticos: Carta 1 venceu \n");
            printf("------------------------- \n \n");
        } else{
            printf("Pontos Turísticos: Carta 2 venceu \n");
            printf("------------------------- \n \n");
        }

    //COMPARAÇÃO DOIS ATRIBUTOS: DENISADE POPULACIONAL
    } else if(segundoAtributo == 5){
        printf("Comparação (2/2)...\n\n");
        printf("Atributo: Densidade Populacional \n");
        printf("Carta 1: %.2f\n", densidadePopulacional);
        printf("Carta 2: %.2f\n\n", densidadePopulacional2);
        
        
        if(1/densidadePopulacional > 1/densidadePopulacional2){
            printf(" Densidade Populacional: Carta 1 venceu \n");
            printf("------------------------- \n \n");
        } else{
            printf("Densidade PopulacionalCarta 2 venceu \n");
            printf("------------------------- \n \n");
        } 
    }
    break;
    default:
      printf("Escolha uma opção válida \n");
              
}
//FINALIZAÇÃO DO PROGRAMA
printf("_____________________________________ \n");
printf("...PROGRAMA FINALIZADO...");

return 0;
}