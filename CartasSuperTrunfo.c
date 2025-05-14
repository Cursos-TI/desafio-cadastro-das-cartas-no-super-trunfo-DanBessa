#include <stdio.h>
#include <string.h>

int main(){
    // Primeira Carta
    int primeiroestado;
    char estado1 = 'A';
    char codigoestado1[3];
    char primeiracidade[50];
    char pais1[50];
    char nomeestado1[50];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;
    float dp1;
    float ppc1;
    float superpoder1;
    // Segunda Carta
    int segundoestado;
    char estado2;
    char codigoestado2[3];
    char segundacidade[50];
    char nomeestado2[50];
    char pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float dp2;
    float ppc2;
    float superpoder2;

    // Lendo a Primeira Carta
    printf("Digite uma letra para selecionar a carta (A - H): \n");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o código da carta: \n");
    scanf("%s", codigoestado1);
    getchar();

    printf("Digite o nome do país: \n");
    scanf(" %[^\n]", pais1);
    getchar();

    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", nomeestado1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", primeiracidade);

    printf("Digite a população (aproximadamente) da cidade: \n");
    scanf("%d", &populacao1);
    getchar();

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area1);
    getchar();

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turisticos1);
    getchar();

    // Lendo a Segunda Carta
    printf("Digite uma letra para selecionar a carta (A - H): \n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o código da carta: \n");
    scanf("%s", codigoestado2);
    getchar();

    printf("Digite o nome do país: \n");
    scanf(" %[^\n]", pais2);
    getchar();

    printf("Digite o nome do estado: \n");
    scanf(" %[^\n]", nomeestado2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", segundacidade);

    printf("Digite a população (aproximadamente) da cidade: \n");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);
    getchar();

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turisticos2);
    getchar();

    // Resultado Carta 1
    printf("\n CARTA %c\n", estado1);
    printf("País: %s\n", pais1);
    printf("Estado: %s\n", nomeestado1);
    printf("Nome da Cidade: %s\n", primeiracidade);
    printf("Código da carta: %s\n", codigoestado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    dp1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f habitantes/km²\n", dp1);
    ppc1 = (float) pib1 / populacao1;
    printf("PIB per Capita: %.2f Reais\n", ppc1);
    // Resultado Carta 2
    printf("\n CARTA %c\n", estado2);
    printf("País: %s\n", pais2);
    printf("Estado: %s\n", nomeestado2);
    printf("Nome da Cidade: %s\n", segundacidade);
    printf("Código da carta: %s\n", codigoestado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    dp2 = (float) populacao2 / area2; 
    printf("Densidade Populacional: %.2f habitantes/km²\n", dp2);
    ppc2 = (float) pib2 / populacao2;
    printf("PIB per Capita: %.2f Reais\n", ppc2);

    // Super Poder
    superpoder1 = (float) populacao1 + area1 + pib1 + turisticos1 + ppc1 + (1 / dp1);
    superpoder2 = (float) populacao2 + area2 + pib2 + turisticos2 + ppc2 + (1 / dp2);
    printf("SUPER PODER 1: %f\n", superpoder1);
    printf("SUPER PODER 2: %f\n", superpoder2);

    // Comparar as cartas
    // printf("****************************************\n");
    // printf("******** COMPARANDO AS CARTAS **********\n");
    // printf("****************************************\n");
    // printf("******* ATRIBUTO PARA COMPARAÇÃO *******\n");
    // printf("        -------- PIB --------\n");
    // printf("Carta 1: %s - PIB: %.2f bilhões de reais\n", primeiracidade, pib1);
    // printf("Carta 2: %s - PIB: %.2f bilhões de reais\n", segundacidade, pib2);
    // if(pib1 > pib2) {
    //     printf("A carta 1 (%s) venceu:\n", primeiracidade, pib1 > pib2);
    // } else {
    //     printf("A carta 2 (%s) venceu\n", segundacidade, pib1 < pib2);
    // }
    // printf("**** FIM DE COMPARAÇÃO ***\n");

    // Menu de escolha de atributos a ser comparados
    printf("*** MENU DE ESCOLHA DE ATRIBUTOS ***\n");
    printf("Escolha um atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha: ");
    int escolha;
    scanf("%d", &escolha);
    getchar();
    switch (escolha) {
    case 1:
        printf("Você escolheu o atributo População.\n");
        printf("Carta 1: %s - População: %d\n", primeiracidade, populacao1);
        printf("Carta 2: %s - População: %d\n", segundacidade, populacao2);
        if (populacao1 > populacao2) {
            printf("A carta 1 (%s) venceu!\n", pais1);
        } else if (populacao2 > populacao1) {
            printf("A carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 2:
        printf("Você escolheu o atributo Área.\n");
        printf("Carta 1: %s - Área: %.2f km²\n", primeiracidade, area1);
        printf("Carta 2: %s - Área: %.2f km²\n", segundacidade, area2);
        if (area1 > area2) {
            printf("A carta 1 (%s) venceu!\n", pais1);
        } else if (area2 > area1) {
            printf("A carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 3:
        printf("Você escolheu o atributo PIB.\n");
        printf("Carta 1: %s - PIB: %.2f bilhões\n", primeiracidade, pib1);
        printf("Carta 2: %s - PIB: %.2f bilhões\n", segundacidade, pib2);
        if (pib1 > pib2) {
            printf("A carta 1 (%s) venceu!\n", pais1);
        } else if (pib2 > pib1) {
            printf("A carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 4:
        printf("Você escolheu o atributo Pontos Turísticos.\n");
        printf("Carta 1: %s - Pontos Turísticos: %d\n", primeiracidade, turisticos1);
        printf("Carta 2: %s - Pontos Turísticos: %d\n", segundacidade, turisticos2);
        if (turisticos1 > turisticos2) {
            printf("A carta 1 (%s) venceu!\n", pais1);
        } else if (turisticos2 > turisticos1) {
            printf("A carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 5:
        printf("Você escolheu o atributo Densidade Populacional.\n");
        printf("Carta 1: %s - Densidade: %.2f hab/km²\n", primeiracidade, dp1);
        printf("Carta 2: %s - Densidade: %.2f hab/km²\n", segundacidade, dp2);
        if (dp1 > dp2) {
            printf("A carta 2 (%s) venceu!\n", pais2);
        } else if (dp2 > dp1) {
            printf("A carta 1 (%s) venceu!\n", pais1);
        } else {
            printf("Empate!\n");
        }
        break;
    case 6:
        printf("Você escolheu o atributo PIB per Capita.\n");
        printf("Carta 1: %s - PIB per Capita: %.2f\n", primeiracidade, ppc1);
        printf("Carta 2: %s - PIB per Capita: %.2f\n", segundacidade, ppc2);
        if (ppc1 > ppc2) {
            printf("A carta 1 (%s) venceu!\n", pais1);
        } else if (ppc2 > ppc1) {
            printf("A carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    case 7:
        printf("Você escolheu o atributo Super Poder.\n");
        printf("Carta 1: %s - Super Poder: %.2f\n", primeiracidade, superpoder1);
        printf("Carta 2: %s - Super Poder: %.2f\n", segundacidade, superpoder2);
        if (superpoder1 > superpoder2) {
            printf("A carta 1 (%s) venceu!\n", pais1);
        } else if (superpoder2 > superpoder1) {
            printf("A carta 2 (%s) venceu!\n", pais2);
        } else {
            printf("Empate!\n");
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
}

    return 0;
}
    
    