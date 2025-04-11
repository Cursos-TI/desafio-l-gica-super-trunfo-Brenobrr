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

//Nível Aventureiro

#include <iostream>
#include <string>
using namespace std;

struct Carta {
    string nome;
    int ataque;
    int defesa;
    int magia;
};

void compararCartas(Carta c1, Carta c2, int escolha) {
    switch (escolha) {
        case 1:
            cout << "Comparando ataque..." << endl;
            if (c1.ataque > c2.ataque)
                cout << c1.nome << " venceu no ataque!" << endl;
            else if (c1.ataque < c2.ataque)
                cout << c2.nome << " venceu no ataque!" << endl;
            else
                cout << "Empate no ataque!" << endl;
            break;
        case 2:
            cout << "Comparando defesa..." << endl;
            if (c1.defesa > c2.defesa)
                cout << c1.nome << " venceu na defesa!" << endl;
            else if (c1.defesa < c2.defesa)
                cout << c2.nome << " venceu na defesa!" << endl;
            else
                cout << "Empate na defesa!" << endl;
            break;
        case 3:
            cout << "Comparando magia..." << endl;
            if (c1.magia > c2.magia)
                cout << c1.nome << " venceu na magia!" << endl;
            else if (c1.magia < c2.magia)
                cout << c2.nome << " venceu na magia!" << endl;
            else
                cout << "Empate na magia!" << endl;
            break;
        case 4:
            cout << "Comparação total (ataque + defesa + magia):" << endl;
            int total1 = c1.ataque + c1.defesa + c1.magia;
            int total2 = c2.ataque + c2.defesa + c2.magia;
            if (total1 > total2)
                cout << c1.nome << " venceu na soma total!" << endl;
            else if (total1 < total2)
                cout << c2.nome << " venceu na soma total!" << endl;
            else
                cout << "Empate na soma total!" << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }
}

int main() {
    Carta carta1, carta2;

    // Cadastro das cartas
    cout << "Digite os dados da Carta 1:\n";
    cout << "Nome: ";
    cin >> carta1.nome;
    cout << "Ataque: ";
    cin >> carta1.ataque;
    cout << "Defesa: ";
    cin >> carta1.defesa;
    cout << "Magia: ";
    cin >> carta1.magia;

    cout << "\nDigite os dados da Carta 2:\n";
    cout << "Nome: ";
    cin >> carta2.nome;
    cout << "Ataque: ";
    cin >> carta2.ataque;
    cout << "Defesa: ";
    cin >> carta2.defesa;
    cout << "Magia: ";
    cin >> carta2.magia;

    int opcao;
    do {
        cout << "\nEscolha o atributo para comparar:\n";
        cout << "1 - Ataque\n2 - Defesa\n3 - Magia\n4 - Soma Total\n0 - Sair\n";
        cout << "Opção: ";
        cin >> opcao;

        if (opcao != 0)
            compararCartas(carta1, carta2, opcao);

    } while (opcao != 0);

    return 0;
}
