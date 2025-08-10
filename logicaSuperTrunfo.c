#include <stdio.h>
#include <string.h>

int main() {
    // --- Card 1 (Country A) ---
    char countryA_name[50];
    long long countryA_population;
    double countryA_area;
    double countryA_gdp;
    
    // --- Card 2 (Country B) ---
    char countryB_name[50];
    long long countryB_population;
    double countryB_area;
    double countryB_gdp;

    // --- User's Choice ---
    int comparison_attribute;

    // --- Input for Card 1 (Country A) ---
    printf("--- Card 1: Country A ---\n");
    printf("Enter country name: ");
    scanf("%s", countryA_name);
    printf("Enter population (in millions): ");
    scanf("%lld", &countryA_population);
    printf("Enter area (in km^2): ");
    scanf("%lf", &countryA_area);
    printf("Enter GDP (in billions USD): ");
    scanf("%lf", &countryA_gdp);

    printf("\n");

    // --- Input for Card 2 (Country B) ---
    printf("--- Card 2: Country B ---\n");
    printf("Enter country name: ");
    scanf("%s", countryB_name);
    printf("Enter population (in millions): ");
    scanf("%lld", &countryB_population);
    printf("Enter area (in km^2): ");
    scanf("%lf", &countryB_area);
    printf("Enter GDP (in billions USD): ");
    scanf("%lf", &countryB_gdp);

    printf("\n");
    
    // --- Choose an attribute to compare ---
    printf("Choose an attribute to compare:\n");
    printf("1. Population\n");
    printf("2. Area\n");
    printf("3. GDP\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &comparison_attribute);
    
    // --- Comparison Logic ---
    char winner_name[50];

    switch (comparison_attribute) {
        case 1:
            // Compare Population
            printf("\n--- Comparing Population ---\n");
            if (countryA_population > countryB_population) {
                strcpy(winner_name, countryA_name);
                printf("%s wins with a population of %lld million!\n", winner_name, countryA_population);
            } else if (countryB_population > countryA_population) {
                strcpy(winner_name, countryB_name);
                printf("%s wins with a population of %lld million!\n", winner_name, countryB_population);
            } else {
                printf("It's a draw! Both countries have the same population.\n");
            }
            break;
        
        case 2:
            // Compare Area
            printf("\n--- Comparing Area ---\n");
            if (countryA_area > countryB_area) {
                strcpy(winner_name, countryA_name);
                printf("%s wins with an area of %.2f km^2!\n", winner_name, countryA_area);
            } else if (countryB_area > countryA_area) {
                strcpy(winner_name, countryB_name);
                printf("%s wins with an area of %.2f km^2!\n", winner_name, countryB_area);
            } else {
                printf("It's a draw! Both countries have the same area.\n");
            }
            break;

        case 3:
            // Compare GDP
            printf("\n--- Comparing GDP ---\n");
            if (countryA_gdp > countryB_gdp) {
                strcpy(winner_name, countryA_name);
                printf("%s wins with a GDP of %.2f billion USD!\n", winner_name, countryA_gdp);
            } else if (countryB_gdp > countryA_gdp) {
                strcpy(winner_name, countryB_name);
                printf("%s wins with a GDP of %.2f billion USD!\n", winner_name, countryB_gdp);
            } else {
                printf("It's a draw! Both countries have the same GDP.\n");
            }
            break;
        
        default:
            printf("\nInvalid choice. Please choose 1, 2, or 3.\n");
            break;
    }

    return 0;
}
