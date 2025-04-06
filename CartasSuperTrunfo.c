#include <stdio.h>

int main(){
    // Primeira Carta
    int primeiroestado;
    char estado1 = 'A';
    char codigoestado1[3];
    char primeiracidade[50];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;
    float dp1;
    float ppc1;
    // Segunda Carta
    int segundoestado;
    char estado2;
    char codigoestado2[3];
    char segundacidade[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float dp2;
    float ppc2;

    // Lendo a Primeira Carta
    printf("Digite uma letra para selecionar o estado (A - H): \n");
    scanf(" %c", &estado1); // Lê o estado (A - H)

    printf("Digite o código do estado: \n");
    scanf("%s", codigoestado1); // Lê o código do estado

    printf("Digite o nome da cidade (Abreviada ex: BH): \n");
    scanf(" %s", primeiracidade); // Lê o nome da cidade

    printf("Digite a população (aproximadamente) da cidade: \n");
    scanf("%d", &populacao1); // Lê a população da cidade

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area1); // Lê a área da cidade

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib1); // Lê o PIB da cidade

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turisticos1); // Lê o número de pontos turísticos da cidade

    // Lendo a Segunda Carta
    printf("Digite uma letra para selecionar o estado (A - H): \n");
    scanf(" %c", &estado2); // Lê o estado (A - H)

    printf("Digite o código do estado: \n");
    scanf("%s", codigoestado2); // Lê o código do estado

    printf("Digite o nome da cidade (Abreviada ex: BH): \n");
    scanf(" %s", segundacidade); // Lê o nome da cidade

    printf("Digite a população (aproximadamente) da cidade: \n");
    scanf("%d", &populacao2); // Lê a população da cidade

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2); // Lê a área da cidade

    printf("Digite o Produto Interno Bruto (PIB) da cidade: \n");
    scanf("%f", &pib2); // Lê o PIB da cidade

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turisticos2); // Lê o número de pontos turísticos da cidade


    // Resultado Carta 1
    printf("\n Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoestado1);
    printf("Nome da Cidade: %s\n", primeiracidade);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    dp1 = (float) populacao1 / area1;
    printf("Densidade Populacional: %.2f habitantes/km²\n", dp1);
    ppc1 = (float) pib1 / populacao1;
    printf("PIB per Capita: %.2f Reais\n", ppc1);
    // Resultado Carta 2
    printf("\n Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoestado2);
    printf("Nome da Cidade: %s\n", segundacidade);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    dp2 = (float) populacao2 / area2; 
    printf("Densidade Populacional: %.2f habitantes/km²\n", dp2);
    ppc2 = (float) pib2 / populacao2;
    printf("PIB per Capita: %.2f Reais\n", ppc2);
    return 0;


}
