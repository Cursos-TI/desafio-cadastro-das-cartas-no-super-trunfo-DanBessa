# Super Trunfo - Jogo de Cartas de Cidades

Este projeto é uma implementação simples do jogo **Super Trunfo** em C, onde cada carta representa uma cidade com diversos atributos. O objetivo é comparar atributos das cidades e ver qual carta vence em cada categoria.

## Como funciona

O programa solicita ao usuário que insira os dados de duas cidades (cartas), incluindo:

- Letra identificadora da carta (A-H)
- Código da carta
- País
- Estado
- Nome da cidade
- População
- Área (km²)
- PIB
- Pontos turísticos

Após a entrada dos dados, o programa calcula automaticamente:
- Densidade populacional
- PIB per capita
- Super Poder (soma de atributos)

Em seguida, exibe as informações das duas cartas e apresenta um menu para o usuário escolher qual atributo deseja comparar. O programa então informa qual carta venceu naquele atributo ou se houve empate.

## Como executar

1. Compile o código:
   ```sh
   gcc supertrunfo.c -o supertrunfo
2. Execute o programa:
    ./supertrunfo
    ou no Windows
    supertrunfo.exe
3. Siga as instruções no terminal para inserir os dados das cidades e escolher o atributo para comparação.
Atributos disponíveis para comparação
    1.População
    2.Área
    3.PIB
    4.Pontos Turísticos
    5.Densidade Populacional
    6.PIB per Capita
    7.Super Poder
## Observações
O programa aceita nomes compostos (com espaços) para país, estado e cidade.
Os cálculos de densidade, PIB per capita e super poder são feitos automaticamente.
O código é didático e pode ser expandido para incluir mais cartas ou atributos.
## Autor
Projeto acadêmico para a Faculdade Daniel.