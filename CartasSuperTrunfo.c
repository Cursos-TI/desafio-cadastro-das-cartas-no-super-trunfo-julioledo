#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //declaração das variáveis da primeira carta

    char estado_1;
    char codigo_cidade_1[4];
    char nome_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int numero_pontos_turisticos_1; 
    
    //declaração das variáveis da segunda carta

    
    char estado_2;
    char codigo_cidade_2[4];
    char nome_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int numero_pontos_turisticos_2;

    //Inicialização do programa
    printf("Bem vindo ao Super Trunfo \n");
    printf("Cadastre as informações da PRIMEIRA carta \n");

    //Cadastramento dos dados da primeira carta

    printf("Digite o código do estado 1: \n");
    scanf("%c", &estado_1);
    printf("Digite o código da cidade 1 (3 digitos): \n");
    scanf("%s", codigo_cidade_1);
    printf("Digite o nome da cidade 1: \n");
    scanf("%s", nome_1);
    printf("Digite a população da cidade 1: \n");
    scanf("%d", &populacao_1);
    printf("Digite a área de cidade 1: \n");
    scanf("%f", &area_1);
    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf("%d", &numero_pontos_turisticos_1);

    //Cadastramento dos dados da segunda carta
    
    printf("Digite o código do estado 2: \n");
    scanf("%c", &estado_2);
    printf("Digite o código da cidade 2 (3 digitos): \n");
    scanf("%s", codigo_cidade_2);
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nome_2);
    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao_2);
    printf("Digite a área de cidade 2: \n");
    scanf("%f", &area_2);
    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos da cidade 2: \n");
    scanf("%d", &numero_pontos_turisticos_2);

    //Exibição dos dados das cartas

    return 0;
}
