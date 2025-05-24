#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

    //declaração das variáveis da primeira carta

    char codigo_estado_1;
    char codigo_carta_1[4];
    char nome_cidade_1[20];
    int populacao_1;
    float area_1;
    float pib_1;
    int numero_pontos_turisticos_1; 
    
    //declaração das variáveis da segunda carta

    char codigo_estado_2;
    char codigo_carta_2[4];
    char nome_cidade_2[20];
    int populacao_2;
    float area_2;
    float pib_2;
    int numero_pontos_turisticos_2;

    //Inicialização do programa

    printf("Bem vindo ao Super Trunfo Países\n\n");

    //Cadastramento dos dados da primeira carta

    printf("Cadastre as informações da PRIMEIRA carta: \n\n");


    printf("Digite o código (letra) do estado 1: ");
    scanf(" %c", &codigo_estado_1);
    printf("Digite o código da carta 1 (3 caracteres): ");
    scanf("%s", codigo_carta_1);
    printf("Digite o nome da cidade 1: ");
    scanf(" ");
    fgets(nome_cidade_1,20,stdin);
    nome_cidade_1[strcspn(nome_cidade_1, "\n")] = 0;
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao_1);
    printf("Digite a área de cidade 1: ");
    scanf("%f", &area_1);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &numero_pontos_turisticos_1);

    //Cadastramento dos dados da segunda carta

    printf("\nCadastre as informações da SEGUNDA carta: \n\n");
    
    printf("Digite o código (letra) do estado 2: ");
    scanf(" %c", &codigo_estado_2);
    printf("Digite o código da carta 2 (3 caracteres): ");
    scanf("%s", codigo_carta_2);
    printf("Digite o nome da cidade 2: ");
    scanf(" ");
    fgets(nome_cidade_2,20,stdin);
    nome_cidade_2[strcspn(nome_cidade_2, "\n")] = 0;
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao_2);
    printf("Digite a área de cidade 2: ");
    scanf("%f", &area_2);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &numero_pontos_turisticos_2);

    //Exibição dos dados das cartas

    printf("\nCarta 1: \n\n");
    printf("Estado: %c\n",codigo_estado_1);
    printf("Código: %s\n",codigo_carta_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("População:  %d\n", populacao_1);
    printf("Área: %.2f\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n\n", numero_pontos_turisticos_1);

    printf("\nCarta 2: \n\n");
    printf("Estado: %c\n",codigo_estado_2);
    printf("Código: %s\n",codigo_carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População:  %d\n", populacao_2);
    printf("Área: %.2f\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n\n", numero_pontos_turisticos_2);

    return 0;
}
