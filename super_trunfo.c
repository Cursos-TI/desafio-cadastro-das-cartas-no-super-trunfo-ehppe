#include <stdio.h>

    int main(){
        char estado[6], codigo[5], cidade[100];
        char a;
        int populacao, turistico;
        float area, pib;

       //CARTA 1    
        printf("Carta 1: \n");

        printf("Qual o Estado: \n");                                                        
        fgets(estado, 6, stdin);

        printf("Qual o Codigo: \n");
        fgets(codigo, 5, stdin);

        printf("Qual a cidade: \n");
        fgets(cidade, 100, stdin);

        printf("Qual o numero de habitantes: \n");
        scanf("%d", &populacao);

        printf("Qual a área: \n");
        scanf("%f", &area);

        printf("Qual o PIB: \n");
        scanf("%f", &pib);

        printf("Quantos pontos Turisticos: \n");
        scanf("%d", &turistico);
    
        //carta 2
        printf("\nCarta 2: \n");

        printf("Qual o Estado: \n");
        scanf("%s", estado);

        printf("Qual o Código: \n");
        scanf("%s", codigo);

        printf("Qual a Cidade: \n");
        scanf("%s", cidade);

        printf("Qual o numero da população: \n");
        scanf("%d", &populacao);

        printf("Qual a area: \n");
        scanf("%f", &area);

        printf("Qual o PIB: \n");
        scanf("%f", &pib);

        printf("Qual o numero de ponto turístico: \n")/
        scanf("%d", &turistico);
      
            
        //CARTA 1 
        printf("\nCarta 1: \n");
        printf("Estado: %s\n", estado);
        printf("Codigo: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d \n", populacao);
        printf("%.3f km² \n", area);
        printf("%.2f bilhões de reais \n", pib);
        printf("Número de Pontos Turísticos: %d\n\n", turistico);
        
        
        //CARTA 2

        printf("Carta 2: \n");
        printf("Estado: %s\n", estado);
        printf("Código: %s \n", codigo);
        printf("Nome da Cidade: %s \n", cidade);
        printf("População: %d \n", populacao);
        printf("%.3f km² \n", area);
        printf("%.2f bilhões de reais \n", pib);
        printf("Número de Pontos Turísticos: %d\n\n", turistico);

    }