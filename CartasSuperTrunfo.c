#include <stdio.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != "\n" && c != EOF);
}
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main (){
        char estado [50]; 
        char codigo_da_carta [50];
        char nome_cidade [50];
        int populacao;
        float area;
        int ponto_turistico;
        float pib;
    
    // Cadastro das Cartas:
    // Solicita ao usuário as informações de cada cidade, o código, nome, população, área, etc.
    // A função "limparbuffer" foi necessária devido a um erro que juntava as quebras de linha "\n", -- 
    //assim melhorando a visualização e permitindo que o usurário preencha cada campo adequadamente.

    printf("Carta 01 \n");
        printf("Digite o estado: \n");
            scanf("%s", &estado);
            limparBuffer();
        printf("Digite o código da carta: \n");
            scanf("%s", &codigo_da_carta);
            limparBuffer();
        printf("Digite o nome da cidade: \n");
            scanf("%s", &nome_cidade);
            limparBuffer();
        printf("Digite a população: \n");
            scanf("%d", &populacao);
            limparBuffer();
        printf("Digite a área: \n");
            scanf("%f", &area);
            limparBuffer();
        printf("Digite a quantidade de pontos turísticos: \n");
            scanf("%d", &ponto_turistico);
            limparBuffer();
        printf("Digite o PIB: \n");
            scanf("%f", &pib);
            limparBuffer();

    printf("\n Carta 02 \n");
        printf("Digite o estado: \n");
        scanf("%s", &estado);
        limparBuffer();
        printf("Digite o código da carta: \n");
        scanf("%s", &codigo_da_carta);
        limparBuffer();
        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome_cidade);
        limparBuffer();
        printf("Digite a população: \n");
        scanf("%d", &populacao);
        limparBuffer();
        printf("Digite a área: \n");
        scanf("%f", &area);
        limparBuffer();
        printf("Digite a quantidade de pontos turísticos: \n");
        scanf("%d", &ponto_turistico);
        limparBuffer();
        printf("Digite o PIB: \n");
        scanf("%f", &pib);
        limparBuffer();

    // Exibição dos Dados das Cartas:
    // Exibe os valores inseridos para cada atributo da cidade, um por linha.

        printf("\n Carta 01 \n");
            printf("Estado: %s \n", estado);
            printf("Código da carta: %s \n", codigo_da_carta);
            printf("Nome da Cidade: %s \n", nome_cidade);
            printf("População: %d \n", populacao);
            printf("Área: %f km² \n", area);
            printf("Número pontos turísticos: %d \n", ponto_turistico);
            printf("PIB: %f bilhões de reais \n\n ", pib);
        
    printf("\nCarta 02 \n");
            printf("Estado: %s \n", estado);
            printf("Código da carta: %s \n", codigo_da_carta);
            printf("Nome da Cidade: %s \n", nome_cidade);
            printf("População: %d \n", populacao);
            printf("Área: %f km² \n", area);
            printf("Número pontos turísticos: %d \n", ponto_turistico);
            printf("PIB: %f bilhões de reais \n ", pib);
        return 0;
}
