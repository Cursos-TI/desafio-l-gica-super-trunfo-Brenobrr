#include <stdio.h>
#include <string.h>

float calcularDensidade(int populacao, float area) {
    return populacao / area;
}

int main() {
    // Carta 1
    char estado1[30], codigo1[10], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Carta 2
    char estado2[30], codigo2[10], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Cadastro Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Código: ");
    scanf(" %[^\n]", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Código: ");
    scanf(" %[^\n]", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // Escolha do atributo
    char atributo[20];
    printf("\n📊 Atributos disponíveis para comparação:\n");
    printf("populacao | area | pib | pontos | densidade\n");
    printf("Escolha um atributo: ");
    scanf(" %[^\n]", atributo);

    // Cálculo da densidade
    float densidade1 = calcularDensidade(populacao1, area1);
    float densidade2 = calcularDensidade(populacao2, area2);

    // Comparação
    printf("\n🔍 Comparando %s entre %s e %s...\n", atributo, cidade1, cidade2);

    if (strcmp(atributo, "populacao") == 0) {
        if (populacao1 > populacao2)
            printf("🏆 Cidade vencedora: %s (maior população)\n", cidade1);
        else if (populacao2 > populacao1)
            printf("🏆 Cidade vencedora: %s (maior população)\n", cidade2);
        else
            printf("🤝 Empate em população.\n");
    } else if (strcmp(atributo, "area") == 0) {
        if (area1 > area2)
            printf("🏆 Cidade vencedora: %s (maior área)\n", cidade1);
        else if (area2 > area1)
            printf("🏆 Cidade vencedora: %s (maior área)\n", cidade2);
        else
            printf("🤝 Empate em área.\n");
    } else if (strcmp(atributo, "pib") == 0) {
        if (pib1 > pib2)
            printf("🏆 Cidade vencedora: %s (maior PIB)\n", cidade1);
        else if (pib2 > pib1)
            printf("🏆 Cidade vencedora: %s (maior PIB)\n", cidade2);
        else
            printf("🤝 Empate em PIB.\n");
    } else if (strcmp(atributo, "pontos") == 0) {
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("🏆 Cidade vencedora: %s (mais pontos turísticos)\n", cidade1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("🏆 Cidade vencedora: %s (mais pontos turísticos)\n", cidade2);
        else
            printf("🤝 Empate em pontos turísticos.\n");
    } else if (strcmp(atributo, "densidade") == 0) {
        if (densidade1 < densidade2)
            printf("🏆 Cidade vencedora: %s (menor densidade populacional)\n", cidade1);
        else if (densidade2 < densidade1)
            printf("🏆 Cidade vencedora: %s (menor densidade populacional)\n", cidade2);
        else
            printf("🤝 Empate em densidade populacional.\n");
    } else {
        printf("❌ Atributo inválido.\n");
    }

    return 0;
}
