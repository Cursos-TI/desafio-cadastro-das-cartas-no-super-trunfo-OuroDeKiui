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

    //MENU DE INTERAÇÃO
    int escolhaMenu;

    printf("### MENU DE INTERAÇÃO ### \n");
    printf("1. Comparação individual de atributos \n");
    printf("2. Comparação geral de atributos \n");
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
                    if(densidadePopulacional > densidadePopulacional2){
                        printf("Carta 1 venceu \n");
                    } else{
                        printf("Carta 2 venceu \n");
                    }
                break;
                    
                
            }
        
            

            
    }
    
   return 1;
}