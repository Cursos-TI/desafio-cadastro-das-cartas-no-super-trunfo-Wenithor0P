#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nameEs1[50], nameEs2[50], nameCi1[50], nameCi2[50], cod1[5], cod2[5], nameTrib1[50], nameTrib2[50];
    float area1, area2, pib1, pib2, carta1_Tributo1, carta1_Tributo2, carta2_Tributo1, carta2_Tributo2, resultSomaTrib1, resultSomaTrib2;
    int ponTuris1, ponTuris2, opcao, opcao2, result1, result2;
    unsigned long int pop1, pop2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("************   Bem-vindo ao game Super Trunfo   ************\n");

    // Cadastro da carta 1
    printf("\nDigite o nome do Estado: "); // Cadastro do nome do estado.
    fgets(nameEs1, 50, stdin);             // Armazena na variavel nameEs1 o nome digitado pelo usuário.
    nameEs1[strcspn(nameEs1, "\n")] = 0;   // Remove o \n da função fgets.
    
    printf("\nDigite o código de 3 digitos: ");         // captura código da carta.
    fgets(cod1, 5, stdin);
    cod1[strcspn(cod1, "\n")] = 0;  
    
    printf("\nDigite o nome da Cidade: ");  // captura o nome da cidade.
    fgets(nameCi1, 50, stdin);
    nameCi1[strcspn(nameCi1, "\n")] = 0;
    
    printf("\nDigite a população: ");       // captura o numero populacional.
    scanf("%lu", &pop1);
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
    float densPop1 = pop1 / area1; // Densidade populacional
    float pibCap1 = pib1*1000000000 / pop1; // PIB per Capita

    //Calculo do Super Poder
    float superPoder1 = (float) pop1 + area1 + pib1 + (float) ponTuris1 + pibCap1 + (1/densPop1);

    // Cadastro da carta 2 --------------------------------------------------------------------------
    printf("\n************ Cadastre a carta 2 ************\n");
    printf("\nDigite o nome do Estado 2: "); // Cadastro do nome do estado.
    fgets(nameEs2, 50, stdin);             // Armazena na variavel nameEs2 o nome digitado pelo usuário.
    nameEs2[strcspn(nameEs2, "\n")] = 0;   // Remove o \n da função fgets.
    
    printf("\nDigite o código de 3 digitos: ");         // captura código da carta.
    fgets(cod2, 5, stdin);
    cod2[strcspn(cod2, "\n")] = 0;  
    
    printf("\nDigite o nome da Cidade: ");  // captura o nome da cidade.
    fgets(nameCi2, 50, stdin);
    nameCi2[strcspn(nameCi2, "\n")] = 0;
    
    printf("\nDigite a população: ");       // captura o numero populacional.
    scanf("%lu", &pop2);
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
    float densPop2 = pop2 / area2; // Densidade populacional
    float pibCap2 = pib2*1000000000 / pop2; // PIB per Capita

    //Calculo do Super Poder
    float superPoder2 = (float) pop2 + area2 + pib2 + (float) ponTuris2 + pibCap2 + (1/densPop2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
      
    printf("\n************ Carta 1 ************\n");
    printf("  O nome do Estado: %s\n", nameEs1);
    printf("  O código da carta: %s\n", cod1);
    printf("  O nome do Cidade: %s\n", nameCi1);
    printf("  População: %lu\n", pop1);
    printf("  Área: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhões de reais\n", pib1);
    printf("  Número de Pontos Turísticos: %d\n", ponTuris1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densPop1);
    printf("  PIB per Capita: %.2f reais por pessoa\n", pibCap1);
    printf("  O Super Poder: %.2f\n", superPoder1);

    printf("\n************ Carta 2 ************\n");
    printf("  O nome do Estado: %s\n", nameEs2);
    printf("  O código da carta: %s\n", cod2);
    printf("  O nome do Cidade: %s\n", nameCi2);
    printf("  População: %lu\n", pop2);
    printf("  Área: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhões de reais\n", pib2);
    printf("  Número de Pontos Turísticos: %d\n", ponTuris2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densPop2);
    printf("  PIB per Capita: %.2f reais por pessoa\n", pibCap2);
    printf("  O Super Poder: %.2f\n", superPoder2);

    // Exibir dados da carta que venceu usando estruruta if else.
    printf("\n***************** A comparação da carta vencedora *****************\n");
    printf("Escolha a 1º opção:\n");
    printf("  1. Verificar População\n");
    printf("  2. Verificar Área\n");
    printf("  3. Verificar PIB\n");
    printf("  4. Verificar Número de Pontos Turísticos\n");
    printf("  5. Verificar Densidade Populacional\n");
    printf("  6. Verificar PIB per Capita\n");
    printf("  7. Verificar Super Poder\n");
    printf("  Digite o numero desejado: ");
    scanf("%d", &opcao);

// Menu de seleção em relação ao valor que se deseja comparar.
    switch (opcao){
        case 1: result1 = (pop1 > pop2) ? 1 : (pop1 < pop2) ? 0 : -1; strcpy(nameTrib1, "População"); carta1_Tributo1 = pop1; carta2_Tributo1 = pop2; break; // Decisão da carta com maior população.
        case 2: result1 = (area1 > area2) ? 1 : (area1 < area2) ? 0 : -1; strcpy(nameTrib1 , "Área"); carta1_Tributo1 = area1; carta2_Tributo1 = area2; break; // Decisão da carta com maior Área.
        case 3: result1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 0 : -1; strcpy(nameTrib1 , "PIB"); carta1_Tributo1 = pib1; carta2_Tributo1 = pib2; break; // Decisão da carta com maior PIB. 
        case 4: result1 = (ponTuris1 > ponTuris2) ? 1 : (ponTuris1 < ponTuris2) ? 0 : -1; strcpy(nameTrib1 , "Número de Pontos Turísticos"); carta1_Tributo1 = ponTuris1; carta2_Tributo1 = ponTuris2; break; // Decisão da carta com maior Número de Pontos Turísticos.  
        case 5: result1 = (densPop1 < densPop2) ? 1 : (densPop1 > densPop2) ? 0 : -1; strcpy(nameTrib1, "Densidade Populacional"); carta1_Tributo1 = densPop1; carta2_Tributo1 = densPop2; break; // Decisão da carta com maior Densidade Populacional.    
        case 6: result1 = (pibCap1 > pibCap2) ? 1 : (pibCap1 < pibCap2) ? 0 : -1; strcpy(nameTrib1, "PIB per Capita"); carta1_Tributo1 = pibCap1; carta2_Tributo1 = pibCap2; break; // Decisão da carta com maior PIB per Capita.    
        case 7: result1 = (superPoder1 > superPoder2) ? 1 : (superPoder1 < superPoder2) ? 0 : -1; strcpy(nameTrib1 , "Super Poder"); carta1_Tributo1 = superPoder1; carta2_Tributo1 = superPoder2; break; // Decisão da carta com maior Super Poder.
        default: printf("Opção inválida! Escolha um número de 1 a 7.\n"); break;
        }

        // Escolher a seguda opção para comparação.
        printf("\nEscolha a 2º opção:\n");
        printf("  1. Verificar População\n");
        printf("  2. Verificar Área\n");
        printf("  3. Verificar PIB\n");
        printf("  4. Verificar Número de Pontos Turísticos\n");
        printf("  5. Verificar Densidade Populacional\n");
        printf("  6. Verificar PIB per Capita\n");
        printf("  7. Verificar Super Poder\n");
        printf("  Digite o numero desejado: ");
        scanf("%d", &opcao2);

        if(opcao == opcao2){
            printf("Você escolheu o mesmo atributo.\n");
        } else{
            // Comparação do segundo atributo
            switch (opcao2){
                case 1: result2 = (pop1 > pop2) ? 1 : (pop1 < pop2) ? 0 : -1; strcpy(nameTrib2, "População"); carta1_Tributo2 = pop1; carta2_Tributo2 = pop2; break; // Decisão da carta com maior população.
                case 2: result2 = (area1 > area2) ? 1 : (area1 < area2) ? 0 : -1; strcpy(nameTrib2, "Área"); carta1_Tributo2 = area1; carta2_Tributo2 = area2;break; // Decisão da carta com maior Área.
                case 3: result2 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 0 : -1; strcpy(nameTrib2 , "PIB"); carta1_Tributo2 = pib1; carta2_Tributo2 = pib2; break; // Decisão da carta com maior PIB.   
                case 4: result2 = (ponTuris1 > ponTuris2) ? 1 : (ponTuris1 < ponTuris2) ? 0 : -1; strcpy(nameTrib2 , "Número de Pontos Turísticos"); carta1_Tributo2 = ponTuris1; carta2_Tributo2 = ponTuris2; break; // Decisão da carta com maior Número de Pontos Turísticos.
                case 5: result2 = (densPop1 < densPop2) ? 1 : (densPop1 > densPop2) ? 0 : -1; strcpy(nameTrib2 , "Densidade Populacional"); carta1_Tributo2 = densPop1; carta2_Tributo2 = densPop2; break; // Decisão da carta com maior Densidade Populacional.
                case 6:result2 = (pibCap1 > pibCap2) ? 1 : (pibCap1 < pibCap2) ? 0 : -1; strcpy(nameTrib2 , "PIB per Capita"); carta1_Tributo2 = pibCap1; carta2_Tributo2 = pibCap2; break; // Decisão da carta com maior PIB per Capita.
                case 7:result2 = (superPoder1 > superPoder2) ? 1 : (superPoder1 < superPoder2) ? 0 : -1; strcpy(nameTrib2 , "Super Poder"); carta1_Tributo2 = superPoder1; carta2_Tributo2 = superPoder2; break; // Decisão da carta com maior Super Poder.
                default: printf("Opção inválida! Escolha um número de 1 a 7.\n"); break;       
            }
        }
        
        //Soma dos 2 atributos para ultima rodada para decidir o vencedor.
        resultSomaTrib1 = carta1_Tributo1 + carta1_Tributo2;
        resultSomaTrib2 = carta2_Tributo1 + carta2_Tributo2;

        // Primeira comparação das carta vencedera.
        printf("\n**** Primeira comparação do tributo %s ****\n", nameTrib1);
        if (result1 == 1) {
            printf("  Valor do atributo %s da carta 1: %.2f - Carta 2: %.2f\n", nameTrib1, carta1_Tributo1, carta2_Tributo1);
            printf("  O atributo %s da carta 1 - %s - venceu!\n", nameTrib1, nameCi1);
        } else if(result1 == 0) {
            printf("  Valor do atributo %s da carta 1: %.2f - Carta 2: %.2f\n", nameTrib1, carta1_Tributo1, carta2_Tributo1);
            printf("  O atributo %s da carta 2 - %s - venceu!\n", nameTrib1, nameCi2);
        } else {
            printf("  Valor do atributo %s da carta 1: %.2f - Carta 2: %.2f\n", nameTrib1, carta1_Tributo1, carta2_Tributo1);
            printf("  As duas cartas emparatam!!\n");
        }

        // Segunda comparação das carta vencedera.
        printf("\n**** Segunda comparação do tributo %s ****\n", nameTrib1);
        if (result2 == 1) {
            printf("  Valor do atributo %s da carta 1: %.2f - Carta 2: %.2f\n", nameTrib1, carta1_Tributo2, carta2_Tributo2);
            printf("  O atributo %s da carta 1 - %s - venceu!\n", nameTrib1, nameCi1);
        } else if(result2 == 0) {
            printf("  Valor do atributo %s da carta 1: %.2f - Carta 2: %.2f\n", nameTrib1, carta1_Tributo2, carta2_Tributo2);
            printf("  O atributo %s da carta 2 - %s - venceu!\n", nameTrib1, nameCi2);
        } else {
            printf("  Valor do atributo %s da carta 1: %.2f - Carta 2: %.2f\n", nameTrib1, carta1_Tributo2, carta2_Tributo2);
            printf("  As duas cartas emparatam!!\n");
        }


        if (resultSomaTrib1 > resultSomaTrib2){
            printf("\n  A comparação será entre %s e %s.\n", nameCi1, nameCi2);
            printf("  Os atributos comparados seram %s e %s.\n", nameTrib1, nameTrib2);
            printf("  O valor de %s da carta 1 é: %.2f e %s é: %.2f - O valor de %s da carta 2 é: %.2f e %s é: %.2f.\n", nameTrib1, carta1_Tributo1, nameTrib2, carta1_Tributo2, nameTrib1, carta2_Tributo1, nameTrib2, carta2_Tributo2);
            printf("  A soma dos atributos de %s é: %.2f e a soma da %s é: %.2f.\n", nameCi1, resultSomaTrib1, nameCi2, resultSomaTrib2);
            printf("  Carta 1 - %s - venceu!!", nameCi1);
        }else if (resultSomaTrib1 < resultSomaTrib2){
            printf("\n  A comparação será entre %s e %s.\n", nameCi1, nameCi2);
            printf("  Os atributos comparados seram %s e %s.\n", nameTrib1, nameTrib2);
            printf("  O valor de %s da carta 1 é: %.2f e %s é: %.2f - O valor de %s da carta 2 é: %.2f e %s é: %.2f.\n", nameTrib1, carta1_Tributo1, nameTrib2, carta1_Tributo2, nameTrib1, carta2_Tributo1, nameTrib2, carta2_Tributo2);
            printf("  A soma dos atributos de %s é: %.2f e a soma da %s é: %.2f.\n", nameCi1, resultSomaTrib1, nameCi2, resultSomaTrib2);
            printf("  Carta 2 - %s - venceu!!", nameCi2);
        } else{
            printf("\n  A comparação será entre %s e %s.\n", nameCi1, nameCi2);
            printf("  Os atributos comparados seram %s e %s.\n", nameTrib1, nameTrib2);
            printf("  O valor de %s da carta 1 é: %.2f e %s é: %.2f - O valor de %s da carta 2 é: %.2f e %s é: %.2f.\n", nameTrib1, carta1_Tributo1, nameTrib2, carta1_Tributo2, nameTrib1, carta2_Tributo1, nameTrib2, carta2_Tributo2);
            printf("  A soma dos atributos de %s é: %.2f e a soma da %s é: %.2f.\n", nameCi1, resultSomaTrib1, nameCi2, resultSomaTrib2);
            printf("  As duas cartas empataram!!");
        }

        printf("\n\n ** Fim do Game ** \n")
    return 0;
}
