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

    int opcao;
    float densidade1 = calcularDensidade(populacao1, area1);
    float densidade2 = calcularDensidade(populacao2, area2);

    do {
        printf("\n📊 Escolha o atributo para comparar:\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        printf("\n🔍 Comparando entre %s e %s...\n", cidade1, cidade2);

        switch (opcao) {
            case 1:
                if (populacao1 > populacao2)
                    printf("🏆 Vencedora: %s (maior população)\n", cidade1);
                else if (populacao2 > populacao1)
                    printf("🏆 Vencedora: %s (maior população)\n", cidade2);
                else
                    printf("🤝 Empate em população.\n");
                break;

            case 2:
                if (area1 > area2)
                    printf("🏆 Vencedora: %s (maior área)\n", cidade1);
                else if (area2 > area1)
                    printf("🏆 Vencedora: %s (maior área)\n", cidade2);
                else
                    printf("🤝 Empate em área.\n");
                break;

            case 3:
                if (pib1 > pib2)
                    printf("🏆 Vencedora: %s (maior PIB)\n", cidade1);
                else if (pib2 > pib1)
                    printf("🏆 Vencedora: %s (maior PIB)\n", cidade2);
                else
                    printf("🤝 Empate em PIB.\n");
                break;

            case 4:
                if (pontosTuristicos1 > pontosTuristicos2)
                    printf("🏆 Vencedora: %s (mais pontos turísticos)\n", cidade1);
                else if (pontosTuristicos2 > pontosTuristicos1)
                    printf("🏆 Vencedora: %s (mais pontos turísticos)\n", cidade2);
                else
                    printf("🤝 Empate em pontos turísticos.\n");
                break;

            case 5:
                if (densidade1 < densidade2)
                    printf("🏆 Vencedora: %s (menor densidade populacional)\n", cidade1);
                else if (densidade2 < densidade1)
                    printf("🏆 Vencedora: %s (menor densidade populacional)\n", cidade2);
                else
                    printf("🤝 Empate em densidade.\n");
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("❌ Opção inválida.\n");
        }

    } while (opcao != 0);

    return 0;
}
