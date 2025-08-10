#include <stdio.h>
#include <string.h>

int main() {
    // --- Carta 1: Brasil ---
    char paisA_nome[50];
    long long paisA_populacao;
    double paisA_area;
    double paisA_pib;
    int paisA_pontos_turisticos;
    double paisA_densidade_demografica;
    
    // --- Carta 2: México ---
    char paisB_nome[50];
    long long paisB_populacao;
    double paisB_area;
    double paisB_pib;
    int paisB_pontos_turisticos;
    double paisB_densidade_demografica;

    // --- Escolha do Usuário ---
    int atributo_comparacao;

    // --- Dados pré-definidos para o Brasil ---
    strcpy(paisA_nome, "Brasil");
    paisA_populacao = 217; // Aproximadamente 217 milhões
    paisA_area = 8515767.0; // Em km^2
    paisA_pib = 2.0; // Aproximadamente 2.0 trilhões USD
    paisA_pontos_turisticos = 35; // Exemplo de dado
    paisA_densidade_demografica = (double)(paisA_populacao * 1000000) / paisA_area;
    
    // --- Dados pré-definidos para o México ---
    strcpy(paisB_nome, "Mexico");
    paisB_populacao = 129; // Aproximadamente 129 milhões
    paisB_area = 1964375.0; // Em km^2
    paisB_pib = 1.66; // Aproximadamente 1.66 trilhões USD
    paisB_pontos_turisticos = 50; // Exemplo de dado
    paisB_densidade_demografica = (double)(paisB_populacao * 1000000) / paisB_area;

    // --- Exibição das Cartas ---
    printf("--- Super Trunfo: Brasil vs. Mexico ---\n\n");
    
    printf("Carta 1:\n");
    printf("Nome: %s\n", paisA_nome);
    printf("Populacao: %lld milhoes\n", paisA_populacao);
    printf("Area: %.0f km^2\n", paisA_area);
    printf("PIB: %.2f trilhoes USD\n", paisA_pib);
    printf("Pontos turisticos: %d\n", paisA_pontos_turisticos);
    printf("Densidade demografica: %.2f hab/km^2\n\n", paisA_densidade_demografica);

    printf("Carta 2:\n");
    printf("Nome: %s\n", paisB_nome);
    printf("Populacao: %lld milhoes\n", paisB_populacao);
    printf("Area: %.0f km^2\n", paisB_area);
    printf("PIB: %.2f trilhoes USD\n", paisB_pib);
    printf("Pontos turisticos: %d\n", paisB_pontos_turisticos);
    printf("Densidade demografica: %.2f hab/km^2\n\n", paisB_densidade_demografica);
    
    // --- Menu Interativo para escolha do atributo ---
    printf("Escolha um atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demografica (menor valor vence)\n");
    printf("Digite sua escolha (1, 2, 3, 4 ou 5): ");
    scanf("%d", &atributo_comparacao);
    
    // --- Lógica de Comparação com Switch e If-Else ---
    char nome_vencedor[50];

    switch (atributo_comparacao) {
        case 1:
            // Compara a População
            printf("\n--- Comparando Populacao ---\n");
            if (paisA_populacao > paisB_populacao) {
                strcpy(nome_vencedor, paisA_nome);
                printf("O atributo usado na comparacao foi: Populacao\n");
                printf("O valor do Brasil foi: %lld milhoes\n", paisA_populacao);
                printf("O valor do Mexico foi: %lld milhoes\n", paisB_populacao);
                printf("Vencedor: %s com uma populacao de %lld milhoes!\n", nome_vencedor, paisA_populacao);
            } else if (paisB_populacao > paisA_populacao) {
                strcpy(nome_vencedor, paisB_nome);
                printf("O atributo usado na comparacao foi: Populacao\n");
                printf("O valor do Brasil foi: %lld milhoes\n", paisA_populacao);
                printf("O valor do Mexico foi: %lld milhoes\n", paisB_populacao);
                printf("Vencedor: %s com uma populacao de %lld milhoes!\n", nome_vencedor, paisB_populacao);
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 2:
            // Compara a Área
            printf("\n--- Comparando Area ---\n");
            if (paisA_area > paisB_area) {
                strcpy(nome_vencedor, paisA_nome);
                printf("O atributo usado na comparacao foi: Area\n");
                printf("O valor do Brasil foi: %.0f km^2\n", paisA_area);
                printf("O valor do Mexico foi: %.0f km^2\n", paisB_area);
                printf("Vencedor: %s com uma area de %.0f km^2!\n", nome_vencedor, paisA_area);
            } else if (paisB_area > paisA_area) {
                strcpy(nome_vencedor, paisB_nome);
                printf("O atributo usado na comparacao foi: Area\n");
                printf("O valor do Brasil foi: %.0f km^2\n", paisA_area);
                printf("O valor do Mexico foi: %.0f km^2\n", paisB_area);
                printf("Vencedor: %s com uma area de %.0f km^2!\n", nome_vencedor, paisB_area);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            // Compara o PIB
            printf("\n--- Comparando PIB ---\n");
            if (paisA_pib > paisB_pib) {
                strcpy(nome_vencedor, paisA_nome);
                printf("O atributo usado na comparacao foi: PIB\n");
                printf("O valor do Brasil foi: %.2f trilhoes USD\n", paisA_pib);
                printf("O valor do Mexico foi: %.2f trilhoes USD\n", paisB_pib);
                printf("Vencedor: %s com um PIB de %.2f trilhoes USD!\n", nome_vencedor, paisA_pib);
            } else if (paisB_pib > paisA_pib) {
                strcpy(nome_vencedor, paisB_nome);
                printf("O atributo usado na comparacao foi: PIB\n");
                printf("O valor do Brasil foi: %.2f trilhoes USD\n", paisA_pib);
                printf("O valor do Mexico foi: %.2f trilhoes USD\n", paisB_pib);
                printf("Vencedor: %s com um PIB de %.2f trilhoes USD!\n", nome_vencedor, paisB_pib);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            // Compara Pontos Turísticos
            printf("\n--- Comparando Pontos Turisticos ---\n");
            if (paisA_pontos_turisticos > paisB_pontos_turisticos) {
                strcpy(nome_vencedor, paisA_nome);
                printf("O atributo usado na comparacao foi: Pontos Turisticos\n");
                printf("O valor do Brasil foi: %d\n", paisA_pontos_turisticos);
                printf("O valor do Mexico foi: %d\n", paisB_pontos_turisticos);
                printf("Vencedor: %s com %d pontos turisticos!\n", nome_vencedor, paisA_pontos_turisticos);
            } else if (paisB_pontos_turisticos > paisA_pontos_turisticos) {
                strcpy(nome_vencedor, paisB_nome);
                printf("O atributo usado na comparacao foi: Pontos Turisticos\n");
                printf("O valor do Brasil foi: %d\n", paisA_pontos_turisticos);
                printf("O valor do Mexico foi: %d\n", paisB_pontos_turisticos);
                printf("Vencedor: %s com %d pontos turisticos!\n", nome_vencedor, paisB_pontos_turisticos);
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 5:
            // Compara Densidade Demográfica (menor valor vence)
            printf("\n--- Comparando Densidade Demografica ---\n");
            if (paisA_densidade_demografica < paisB_densidade_demografica) { 
                strcpy(nome_vencedor, paisA_nome);
                printf("O atributo usado na comparacao foi: Densidade Demografica\n");
                printf("O valor do Brasil foi: %.2f hab/km^2\n", paisA_densidade_demografica);
                printf("O valor do Mexico foi: %.2f hab/km^2\n", paisB_densidade_demografica);
                printf("Vencedor: %s com a menor densidade demografica (%.2f hab/km^2)!\n", nome_vencedor, paisA_densidade_demografica);
            } else if (paisB_densidade_demografica < paisA_densidade_demografica) {
                strcpy(nome_vencedor, paisB_nome);
                printf("O atributo usado na comparacao foi: Densidade Demografica\n");
                printf("O valor do Brasil foi: %.2f hab/km^2\n", paisA_densidade_demografica);
                printf("O valor do Mexico foi: %.2f hab/km^2\n", paisB_densidade_demografica);
                printf("Vencedor: %s com a menor densidade demografica (%.2f hab/km^2)!\n", nome_vencedor, paisB_densidade_demografica);
            } else {
                printf("Empate!\n");
            }
            break;
        
        default:
            printf("\nEscolha invalida. Por favor, digite 1, 2, 3, 4 ou 5.\n");
            break;
    }

    return 0;
}

