#include <stdio.h>

int main(){
    // Definindo a variável pib em bilhões
    // Essa variável é necessária para o cálculo do pib per capita
    // Ela será usada para transformar o pib que é, por exemplo 100.5 bilhões, em 100.500.000.000
    float pib_em_bilhoes;

    // Definindo as variáveis da primeira carta
    char codigo_de_carta1[5];
    char nome_da_cidade1[50];
    char estado1;
    int populacao1, numero_pontos_turisticos1;
    float pib1, area_em_km2_1, densidade_populacional1, pib_per_capita1;
    double super_poder1;
    // Definindo as variáveis da segunda carta
    char codigo_de_carta2[5];
    char nome_da_cidade2[50];
    char estado2;
    int populacao2, numero_pontos_turisticos2;
    float pib2, area_em_km2_2, densidade_populacional2, pib_per_capita2;
    double super_poder2;


    // Iniciando as variáveis da primeira carta.
    
    printf("\nEscreva as informações da PRIMEIRA carta. \n");

    printf("Escreva o estado em uma letra de A a H: \n");
    scanf(" %c", &estado1);

    printf("Escreva o código da carta: \n");
    scanf(" %s", &codigo_de_carta1);

    printf("Escreva o nome da cidade (OBS: ESCREVA TUDO JUNTO SEM ACENTO): \n");
    scanf(" %s", &nome_da_cidade1);

    printf("Escreva o número de habitantes da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Escreva a área da cidade em km2: \n");
    scanf(" %f", &area_em_km2_1);

    printf("Escreva o PIB da cidade em bilhões ( ex: 59.5 ): \n");
    scanf(" %f", &pib1);

    printf("Escreva o número de pontos turísticos da cidade: \n");
    scanf(" %d", &numero_pontos_turisticos1);
    

    // Iniciando as variáveis da segunda carta.

    printf("\nEscreva as informações da SEGUNDA carta. \n");

    printf("Escreva o estado em uma letra de A a H: \n");
    scanf(" %c", &estado2);

    printf("Escreva o código da carta: \n");
    scanf(" %s", &codigo_de_carta2);

    printf("Escreva o nome da cidade (OBS: ESCREVA TUDO JUNTO): \n");
    scanf(" %s", &nome_da_cidade2);

    printf("Escreva o número de habitantes da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Escreva a área da cidade em km2: \n");
    scanf(" %f", &area_em_km2_2);

    printf("Escreva o PIB da cidade em bilhões ( ex: 59.5 ): \n");
    scanf(" %f", &pib2);

    printf("Escreva o número de pontos turísticos da cidade: \n");
    scanf(" %d", &numero_pontos_turisticos2);

    // Calculando a densidade populacional da primeira carta
    densidade_populacional1 = populacao1 / area_em_km2_1;

    // Calculando o pib da primeira carta
    pib_em_bilhoes = pib1 * 1e9;
    pib_per_capita1 = pib_em_bilhoes / populacao1;
    
    // Calculando o super poder da primeira carta.

    super_poder1 = (populacao1 + area_em_km2_1 + pib1 + numero_pontos_turisticos1 + (area_em_km2_1 / (double)populacao1));
    
    // Mostrando a primeira carta na tela.
    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo_de_carta1);
    printf("Nome da Cidade: %s \n", nome_da_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area_em_km2_1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", numero_pontos_turisticos1);
    printf("Densidade populacional %.2f hab/km² \n", densidade_populacional1);
    printf("PIB per capita: %.2fR$ \n", pib_per_capita1);
    printf("Super poder: %.2f \n", super_poder1);

    // Calculando a densidade populacional da segunda carta.

    densidade_populacional2 = populacao2 / area_em_km2_2;

    // Calculando o pib per capita da segunda carta.

    pib_em_bilhoes = pib2 * 1e9;
    pib_per_capita2 = pib_em_bilhoes / populacao2;

    // Calculando o super poder da segunda carta.

    super_poder2 = (populacao2 + area_em_km2_2 + pib2 + numero_pontos_turisticos2 + (area_em_km2_2 / (double)populacao2));

    // Mostrando a segunda carta na tela.

    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_de_carta2);
    printf("Nome da Cidade: %s \n", nome_da_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area_em_km2_2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", numero_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade_populacional2);
    printf("PIB per capita: %.2fR$ \n", pib_per_capita2);
    printf("Super poder: %.2f \n", super_poder2);

    // Definindo o vencedor
    // O "? 1:2" faz retornar 2 se o resultado for 1 e se o resultado for 0 irá retornar 1
    int resultado = (super_poder1 > super_poder2) ? 1:2;
    
    // Comparando as cartas
    printf("\nResultado final \n");
    printf("1 = Verdadeiro | 0 = Falso \n");
    printf("Carta 1 tem população maior que carta 2 ? (%d) \n" , populacao1 > populacao2);
    printf("Carta 1 tem área maior que carta 2 ? (%d) \n", area_em_km2_1 > area_em_km2_2);
    printf("Carta 1 tem pib maior que carta 2 ? (%d) \n", pib1 > pib2);
    printf("Carta 1 tem mais pontos turísticos que carta 2 ? (%d) \n", numero_pontos_turisticos1 > numero_pontos_turisticos2);
    printf("Carta 1 tem menos densidade populacional que carta 2 ? (%d) \n", densidade_populacional1 < densidade_populacional2);
    printf("Carta 1 tem pib per capita maior que Carta 2 ? (%d) \n", pib_per_capita1 > pib_per_capita2);
    printf("O super poder da carta 1 é maior do que a da carta 2 ? (%d) \n", super_poder1 > super_poder2);
    printf("O vencedor é a carta %d", resultado);
    return 0;
}
