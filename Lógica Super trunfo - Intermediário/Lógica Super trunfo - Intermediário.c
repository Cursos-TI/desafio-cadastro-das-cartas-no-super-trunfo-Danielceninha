#include <stdio.h>
#include <string.h>

int main() {
    // Dados das duas cartas
    char nome1[50], nome2[50];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;

    // Entrada dos dados - Carta 1
    printf("Digite o nome do país (Carta 1): ");
    scanf(" %[^\n]", nome1);
    printf("População (milhões): ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em trilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada dos dados - Carta 2
    printf("\nDigite o nome do país (Carta 2): ");
    scanf(" %[^\n]", nome2);
    printf("População (milhões): ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em trilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo das densidades demográficas
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Exibir menu
    int opcao;
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparar (1 a 5): ");
    scanf("%d", &opcao);

    // Comparação com switch + if-else aninhado
    printf("\nComparando %s e %s...\n", nome1, nome2);

    switch(opcao) {
        case 1:
            printf("População: %d x %d\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Área: %.2f x %.2f\n", area1, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turísticos: %d x %d\n", pontos1, pontos2);
            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Demográfica: %.4f x %.4f\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu! (menor densidade é melhor)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu! (menor densidade é melhor)\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha entre 1 e 5.\n");
    }

    return 0;
}