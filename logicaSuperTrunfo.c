#include <stdio.h>
#include <string.h>

int main() {
    // --- Dados pré-definidos para o Brasil ---
    char paisA_nome[50] = "Brasil";
    long long paisA_populacao = 217; // Aproximadamente 217 milhões
    double paisA_area = 8515767.0; // Em km^2
    double paisA_pib = 2.0; // Aproximadamente 2.0 trilhões USD
    int paisA_pontos_turisticos = 35; // Exemplo de dado
    double paisA_densidade_demografica = (double)(paisA_populacao * 1000000) / paisA_area;
    double paisA_soma_atributos = 0.0;
    
    // --- Dados pré-definidos para o México ---
    char paisB_nome[50] = "Mexico";
    long long paisB_populacao = 129; // Aproximadamente 129 milhões
    double paisB_area = 1964375.0; // Em km^2
    double paisB_pib = 1.66; // Aproximadamente 1.66 trilhões USD
    int paisB_pontos_turisticos = 50; // Exemplo de dado
    double paisB_densidade_demografica = (double)(paisB_populacao * 1000000) / paisB_area;
    double paisB_soma_atributos = 0.0;

    // --- Escolhas do Usuário ---
    int atributo1_escolha, atributo2_escolha;

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

    // --- Menu Interativo para a primeira escolha ---
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demografica (menor valor vence)\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &atributo1_escolha);
    printf("\n");

    // --- Menu Dinâmico para a segunda escolha ---
    printf("Escolha o segundo atributo para comparar (o primeiro ja foi selecionado):\n");
    if (atributo1_escolha != 1) printf("1. Populacao\n");
    if (atributo1_escolha != 2) printf("2. Area\n");
    if (atributo1_escolha != 3) printf("3. PIB\n");
    if (atributo1_escolha != 4) printf("4. Pontos turisticos\n");
    if (atributo1_escolha != 5) printf("5. Densidade demografica (menor valor vence)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &atributo2_escolha);
    printf("\n");
    
    // --- Lógica de Comparação com Switch e If-Else ---
    char nome_vencedor[50];
    char atributo1_nome[50], atributo2_nome[50];
    double paisA_valor1 = 0, paisA_valor2 = 0;
    double paisB_valor1 = 0, paisB_valor2 = 0;

    // Processa o primeiro atributo
    switch (atributo1_escolha) {
        case 1: 
            strcpy(atributo1_nome, "Populacao"); 
            paisA_valor1 = paisA_populacao;
            paisB_valor1 = paisB_populacao;
            break;
        case 2: 
            strcpy(atributo1_nome, "Area"); 
            paisA_valor1 = paisA_area;
            paisB_valor1 = paisB_area;
            break;
        case 3: 
            strcpy(atributo1_nome, "PIB");
            paisA_valor1 = paisA_pib;
            paisB_valor1 = paisB_pib;
            break;
        case 4: 
            strcpy(atributo1_nome, "Pontos Turisticos"); 
            paisA_valor1 = paisA_pontos_turisticos;
            paisB_valor1 = paisB_pontos_turisticos;
            break;
        case 5:
            strcpy(atributo1_nome, "Densidade Demografica");
            paisA_valor1 = paisA_densidade_demografica;
            paisB_valor1 = paisB_densidade_demografica;
            break;
        default: 
            printf("Primeira escolha invalida.\n");
            return 1;
    }

    // Processa o segundo atributo
    switch (atributo2_escolha) {
        case 1: 
            strcpy(atributo2_nome, "Populacao");
            paisA_valor2 = paisA_populacao;
            paisB_valor2 = paisB_populacao;
            break;
        case 2: 
            strcpy(atributo2_nome, "Area");
            paisA_valor2 = paisA_area;
            paisB_valor2 = paisB_area;
            break;
        case 3: 
            strcpy(atributo2_nome, "PIB");
            paisA_valor2 = paisA_pib;
            paisB_valor2 = paisB_pib;
            break;
        case 4: 
            strcpy(atributo2_nome, "Pontos Turisticos");
            paisA_valor2 = paisA_pontos_turisticos;
            paisB_valor2 = paisB_pontos_turisticos;
            break;
        case 5:
            strcpy(atributo2_nome, "Densidade Demografica");
            paisA_valor2 = paisA_densidade_demografica;
            paisB_valor2 = paisB_densidade_demografica;
            break;
        default: 
            printf("Segunda escolha invalida.\n");
            return 1;
    }
    
    // --- Lógica de soma e comparação ---
    if (strcmp(atributo1_nome, "Densidade Demografica") == 0) {
        paisA_soma_atributos += (paisB_valor1 > 0) ? (paisB_valor1 / paisA_valor1) : 0;
        paisB_soma_atributos += (paisA_valor1 > 0) ? (paisA_valor1 / paisB_valor1) : 0;
    } else {
        paisA_soma_atributos += paisA_valor1;
        paisB_soma_atributos += paisB_valor1;
    }
    
    if (strcmp(atributo2_nome, "Densidade Demografica") == 0) {
        paisA_soma_atributos += (paisB_valor2 > 0) ? (paisB_valor2 / paisA_valor2) : 0;
        paisB_soma_atributos += (paisA_valor2 > 0) ? (paisA_valor2 / paisB_valor2) : 0;
    } else {
        paisA_soma_atributos += paisA_valor2;
        paisB_soma_atributos += paisB_valor2;
    }

    // --- Exibição final dos resultados ---
    printf("--- Resultado da Rodada ---\n\n");
    printf("Atributo 1: %s\n", atributo1_nome);
    printf("Atributo 2: %s\n", atributo2_nome);
    printf("\n");

    printf("%s: %.2f (%s) + %.2f (%s)\n", paisA_nome, paisA_valor1, atributo1_nome, paisA_valor2, atributo2_nome);
    printf("Soma total para %s: %.2f\n", paisA_nome, paisA_soma_atributos);
    printf("\n");

    printf("%s: %.2f (%s) + %.2f (%s)\n", paisB_nome, paisB_valor1, atributo1_nome, paisB_valor2, atributo2_nome);
    printf("Soma total para %s: %.2f\n", paisB_nome, paisB_soma_atributos);
    printf("\n");

    if (paisA_soma_atributos > paisB_soma_atributos) {
        printf("Vencedor: %s!\n", paisA_nome);
    } else if (paisB_soma_atributos > paisA_soma_atributos) {
        printf("Vencedor: %s!\n", paisB_nome);
    } else {
        printf("Empate!\n");
    }

    return 0;
}

