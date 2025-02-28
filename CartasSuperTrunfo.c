#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nameEs1[50], nameEs2[50], nameCi1[50], nameCi2[50], cod1[5], cod2[5];
    float area1, area2, pib1, pib2;
    int ponTuris1, ponTuris2, pop1, pop2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("---------- Bem-vindo ao game Super Trunfo -----------\n");

    // Cadastro da carta 1
    printf("\nDigite o nome do Estado: "); // Cadastro do nome do estado.
    fgets(nameEs1, 50, stdin);             // Armazena na variavel nameEs1 o nome digitado pelo usuário.
    nameEs1[strcspn(nameEs1, "\n")] = 0;   // Remove o \n da função fgets.
    
    printf("\nDigite o código: ");         // captura código da carta.
    fgets(cod1, 5, stdin);
    cod1[strcspn(cod1, "\n")] = 0;  
    
    printf("\nDigite o nome da Cidade: ");  // captura o nome da cidade.
    fgets(nameCi1, 50, stdin);
    nameCi1[strcspn(nameCi1, "\n")] = 0;
    
    printf("\nDigite a população: ");       // captura o numero populacional.
    scanf("%d", &pop1);
    getchar();  // Limpa o buffer

    
    printf("\nDigite a área em km²: ");     // captura a área da cidade.
    scanf("%f", &area1);
    getchar();  // Limpa o buffer

    printf("\nDigite o PIB em bilhões de reais: "); // captura o PIB da cidade.
    scanf("%f", &pib1);
    getchar();  // Limpa o buffer

    printf("\nDigite o numero de pontos turísticos: "); // captura o numero de pontos turísticos.
    scanf("%d", &ponTuris1);
    getchar();  // Limpa o buffer

    //Calcular Densidade populacional e PIB per Capita
    float densPop1 = (float) pop1 / area1; // Densidade populacional
    float pibCap1 = (float) pib1 / pop1; // PIB per Capita

    // Cadastro da carta 2 --------------------------------------------------------------------------
    printf("\n-----Cadastre a carda 2----\n");
    printf("\nDigite o nome do Estado 2: "); // Cadastro do nome do estado.
    fgets(nameEs2, 50, stdin);             // Armazena na variavel nameEs2 o nome digitado pelo usuário.
    nameEs2[strcspn(nameEs2, "\n")] = 0;   // Remove o \n da função fgets.
    
    printf("\nDigite o código: ");         // captura código da carta.
    fgets(cod2, 5, stdin);
    cod2[strcspn(cod2, "\n")] = 0;  
    
    printf("\nDigite o nome da Cidade: ");  // captura o nome da cidade.
    fgets(nameCi2, 50, stdin);
    nameCi2[strcspn(nameCi2, "\n")] = 0;
    
    printf("\nDigite a população: ");       // captura o numero populacional.
    scanf("%d", &pop2);
    getchar();  // Limpa o buffer
    
    printf("\nDigite a área em km²: ");     // captura a área da cidade.
    scanf("%f", &area2);
    getchar();  // Limpa o buffer

    printf("\nDigite o PIB em bilhões de reais: "); // captura o PIB da cidade.
    scanf("%f", &pib2);
    getchar();  // Limpa o buffer
    
    printf("\nDigite o numero de pontos turísticos: "); // captura o numero de pontos turísticos.
    scanf("%d", &ponTuris2);
    getchar();  // Limpa o buffer

    //Calcular Densidade populacional e PIB per Capita
    float densPop2 = (float) pop2 / area2; // Densidade populacional
    float pibCap2 = (float) pib2 / pop2; // PIB per Capita

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
      
    printf("\nCarta 1: \n");
    printf("  O nome do Estado: %s\n", nameEs1);
    printf("  O código da carta: %s\n", cod1);
    printf("  O nome do Cidade: %s\n", nameCi1);
    printf("  População: %d\n", pop1);
    printf("  Área: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhões de reais\n", pib1);
    printf("  Número de Pontos Turísticos: %d\n", ponTuris1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densPop1);
    printf("  PIB per Capita: %.2f reais\n", pibCap1);

    printf("\nCarta 2: \n");
    printf("  O nome do Estado: %s\n", nameEs2);
    printf("  O código da carta: %s\n", cod2);
    printf("  O nome do Cidade: %s\n", nameCi2);
    printf("  População: %d\n", pop2);
    printf("  Área: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhões de reais\n", pib2);
    printf("  Número de Pontos Turísticos: %d\n", ponTuris2);
    printf("  Densidade Populacional: %2.f hab/km²\n", densPop2);
    printf("  PIB per Capita: %.2f reais\n", pibCap2);

    return 0;
}
