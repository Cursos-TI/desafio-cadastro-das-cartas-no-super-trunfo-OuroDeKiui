#include <stdio.h>

int main() {
    //CARTA 1 
    unsigned long int populacao = 6000;
    float area = 10000;
    float pib = 5000;
    int pontosTuristicos = 10;
    float densidadePopulacional = 15;
    

    //CARTA 2 
    unsigned long int populacao2 = 5000;
    float area2 = 5000;
    float pib2 = 100000; 
    int pontosTuristicos2 = 15;
    float densidadePopulacional2 = 10;

    //Variavel de escolha do menu de interação
    int escolhaMenu;

    //Variavel de escolha da comparação de dois atributos
    int primeiroAtributo, segundoAtributo, resultado1, resultado2;

    printf("### MENU DE INTERAÇÃO ### \n");
    printf("1. Comparação individual de atributos \n");
    printf("2. Comparação geral de atributos \n");
    printf("3. Comparação de dois atributos \n \n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolhaMenu);
    printf("------------------------- \n \n");

    switch(escolhaMenu){
        case 1:
            printf("comparação individual! \n \n");
        break;

        case 2:
            printf("Comparação geral \n \n");
        break;

        case 3:
            
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
                printf("Fazendo comparação de dois atributos...\n \n");
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
                printf("Fazendo comparação de dois atributos...\n\n");
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
                printf("Fazendo comparação de dois atributos...\n\n");
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
            } else if(primeiroAtributo == 4){
                printf("Fazendo comparação de dois atributos... \n \n ");
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
                printf("Fazendo comparação de dois atributos...\n\n");
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
                printf("Fazendo comparação de dois atributos...\n \n");
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
                printf("Fazendo comparação de dois atributos...\n\n");
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
                printf("Fazendo comparação de dois atributos...\n\n");
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
                printf("Fazendo comparação de dois atributos... \n \n ");
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
                printf("Fazendo comparação de dois atributos...\n\n");
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
    }
}