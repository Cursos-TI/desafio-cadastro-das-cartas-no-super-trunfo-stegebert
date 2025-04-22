#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // ===== CARTA 1 - Brasil =====
    char codigo1[] = "A01"; // Código da cidade (A = RS)
    char nome1[] = "Porto Alegre";
    char estado1[] = "Rio Grande do Sul";
    char pais1[] = "Brasil";
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ===== CARTA 2 - Alemanha =====
    char codigo2[] = "C01"; // Código da cidade (C = Baviera)
    char nome2[] = "Munique";
    char estado2[] = "Baviera";
    char pais2[] = "Alemanha";
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.

     // --- Cadastro da cidade do Brasil ---
     printf("Cadastro da cidade %s (%s - %s) [Código: %s]\n", nome1, estado1, pais1, codigo1);

     printf("Digite a população da cidade: ");
     scanf("%d", &populacao1);
 
     printf("Digite a área da cidade (em km²): ");
     scanf("%f", &area1);
 
     printf("Digite o PIB da cidade (em bilhões): ");
     scanf("%f", &pib1);
 
     printf("Digite o número de pontos turísticos: ");
     scanf("%d", &pontosTuristicos1);

     // --- Cadastro da cidade da Alemanha ---
    printf("\nCadastro da cidade %s (%s - %s) [Código: %s]\n", nome2, estado2, pais2, codigo2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.

    printf("\n===========================================\n");
    printf("CARTA 1 - %s (%s - %s) [Código: %s]\n", nome1, estado1, pais1, codigo1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCARTA 2 - %s (%s - %s) [Código: %s]\n", nome2, estado2, pais2, codigo2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
   
    return 0;
}
