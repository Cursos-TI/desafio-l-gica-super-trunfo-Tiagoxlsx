#include <stdio.h>
#include <string.h>

int main() {
    // --- Carta 1: Brasil ---
    char paisA_nome[50];
    long long paisA_populacao;
    double paisA_area;
    double paisA_pib;
    
    // --- Carta 2: México ---
    char paisB_nome[50];
    long long paisB_populacao;
    double paisB_area;
    double paisB_pib;

    // --- Escolha do Usuário ---
    int atributo_comparacao;

    // --- Dados pré-definidos para o Brasil ---
    strcpy(paisA_nome, "Brasil");
    paisA_populacao = 217; // Aproximadamente 217 milhões
    paisA_area = 8515767.0; // Em km^2
    paisA_pib = 2.0; // Aproximadamente 2.0 trilhões USD
    
    // --- Dados pré-definidos para o México ---
    strcpy(paisB_nome, "Mexico");
    paisB_populacao = 129; // Aproximadamente 129 milhões
    paisB_area = 1964375.0; // Em km^2
    paisB_pib = 1.66; // Aproximadamente 1.66 trilhões USD

    // --- Exibição das Cartas ---
    printf("--- Super Trunfo: Brasil vs. Mexico ---\n\n");
    
    printf("Carta 1:\n");
    printf("Nome: %s\n", paisA_nome);
    printf("Populacao: %lld milhoes\n", paisA_populacao);
    printf("Area: %.0f km^2\n", paisA_area);
    printf("PIB: %.2f trilhoes USD\n\n", paisA_pib);

    printf("Carta 2:\n");
    printf("Nome: %s\n", paisB_nome);
    printf("Populacao: %lld milhoes\n", paisB_populacao);
    printf("Area: %.0f km^2\n", paisB_area);
    printf("PIB: %.2f trilhoes USD\n\n", paisB_pib);
    
    // --- Escolha do atributo para comparar ---
    printf("Escolha um atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("Digite sua escolha (1, 2 ou 3): ");
    scanf("%d", &atributo_comparacao);
    
    // --- Lógica de Comparação ---
    char nome_vencedor[50];

    switch (atributo_comparacao) {
        case 1:
            // Compara a População
            printf("\n--- Comparando Populacao ---\n");
            if (paisA_populacao > paisB_populacao) {
                strcpy(nome_vencedor, paisA_nome);
                printf("%s vence com uma populacao de %lld milhoes!\n", nome_vencedor, paisA_populacao);
            } else if (paisB_populacao > paisA_populacao) {
                strcpy(nome_vencedor, paisB_nome);
                printf("%s vence com uma populacao de %lld milhoes!\n", nome_vencedor, paisB_populacao);
            } else {
                printf("Empate! Ambos os paises tem a mesma populacao.\n");
            }
            break;
        
        case 2:
            // Compara a Área
            printf("\n--- Comparando Area ---\n");
            if (paisA_area > paisB_area) {
                strcpy(nome_vencedor, paisA_nome);
                printf("%s vence com uma area de %.0f km^2!\n", nome_vencedor, paisA_area);
            } else if (paisB_area > paisA_area) {
                strcpy(nome_vencedor, paisB_nome);
                printf("%s vence com uma area de %.0f km^2!\n", nome_vencedor, paisB_area);
            } else {
                printf("Empate! Ambos os paises tem a mesma area.\n");
            }
            break;

        case 3:
            // Compara o PIB
            printf("\n--- Comparando PIB ---\n");
            if (paisA_pib > paisB_pib) {
                strcpy(nome_vencedor, paisA_nome);
                printf("%s vence com um PIB de %.2f trilhoes USD!\n", nome_vencedor, paisA_pib);
            } else if (paisB_pib > paisA_pib) {
                strcpy(nome_vencedor, paisB_nome);
                printf("%s vence com um PIB de %.2f trilhoes USD!\n", nome_vencedor, paisB_pib);
            } else {
                printf("Empate! Ambos os paises tem o mesmo PIB.\n");
            }
            break;
        
        default:
            printf("\nEscolha invalida. Por favor, digite 1, 2 ou 3.\n");
            break;
    }

    return 0;
}

