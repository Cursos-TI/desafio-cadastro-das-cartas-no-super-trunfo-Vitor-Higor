#include <stdio.h>
#include <stdio.h>

int main() {
    // Carta 1 - Variáveis
    char estado1;
    char codigo1[4]; // Ex: A01 (3 caracteres + 1 para o '\0')
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2 - Variáveis
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ===== Entrada de dados da Carta 1 =====
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1); // espaço antes do %c para ignorar enter anterior

    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    getchar(); // limpar o \n do teclado
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== Entrada de dados da Carta 2 =====
    printf("\nDigite o estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2 (ex: B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    getchar();
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Saída formatada =====
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
