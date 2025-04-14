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
<<<<<<< HEAD
    float superpoder1;
=======
>>>>>>> 8e1f47007095f721509e1fa9f547d88adb58b505
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
<<<<<<< HEAD
    float superpoder2;
=======
>>>>>>> 8e1f47007095f721509e1fa9f547d88adb58b505

    // Lendo a Primeira Carta
    printf("Digite uma letra para selecionar o estado (A - H): \n");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o código do estado: \n");
<<<<<<< HEAD
    scanf("%s", codigoestado1);
    getchar();

    printf("Digite o nome da cidade (Abreviada ex: BH): \n");
    fgets(primeiracidade, sizeof(primeiracidade), stdin);
=======
    scanf("%s", codigoestado1); // Lê o código do estado

    printf("Digite o nome da cidade (Abreviada ex: BH): \n");
    scanf(" %s", primeiracidade); // Lê o nome da cidade
>>>>>>> 8e1f47007095f721509e1fa9f547d88adb58b505

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
    printf("Digite uma letra para selecionar o estado (A - H): \n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o código do estado: \n");
    scanf("%s", codigoestado2);
    getchar();

    printf("Digite o nome da cidade (Abreviada ex: BH): \n");
<<<<<<< HEAD
    fgets(segundacidade, sizeof(segundacidade), stdin);
=======
    scanf(" %s", segundacidade); // Lê o nome da cidade
>>>>>>> 8e1f47007095f721509e1fa9f547d88adb58b505

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
<<<<<<< HEAD

    // Super Poder
    superpoder1 = (float) populacao1 + area1 + pib1 + turisticos1 + ppc1 + (1 / dp1);
    superpoder2 = (float) populacao2 + area2 + pib2 + turisticos2 + ppc2 + (1 / dp2);
    printf("SUPER PODER 1: %.2f\n", superpoder1);
    printf("SUPER PODER 2: %.2f\n", superpoder2);

    // Comparar as cartas
    printf("**** Comparando as cartas ***\n");
    printf("Carta 1: %.2f\n", superpoder1);
    printf("Carta 2: %.2f\n", superpoder2);
    populacao1 <= populacao2;
    printf("A carta 1 tem mais população que a carta 2: %d\n", populacao1 <= populacao2);
    area1 <= area2;
    printf("A carta 1 tem mais área que a carta 2: %d\n", area1 <= area2);
    pib1 <= pib2;
    printf("A carta 1 tem mais PIB que a carta 2: %d\n", pib1 <= pib2);
    turisticos1 <= turisticos2;
    printf("A carta 1 tem mais pontos turísticos que a carta 2: %d\n", turisticos1 <= turisticos2);
    dp1 <= dp2;
    printf("A carta 1 tem mais densidade populacional que a carta 2: %d\n", dp1 <= dp2);
    ppc1 <= ppc2;
    printf("A carta 1 tem mais PIB per capita que a carta 2: %d\n", ppc1 <= ppc2);
   
    // Comparar os superpoderes
    superpoder1 <= superpoder2;
    printf("A carta 1 tem mais super poder que a carta 2? %d\n", superpoder1 <= superpoder2);

    printf("**** Fim da comparação ***\n");
    
=======
>>>>>>> 8e1f47007095f721509e1fa9f547d88adb58b505
    return 0;

}