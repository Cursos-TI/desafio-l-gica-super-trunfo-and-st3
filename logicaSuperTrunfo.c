#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char State1[5];
    char CardCode1[5];
    char NameCity1[50];
    int Population1;
    float Area1;
    float PIB1;
    int TuristicPoint1;
    float DensidadePop1;
    float PIBperCap1;
    

    // Segunda Carta
    char State2[5];
    char CardCode2[5];
    char NameCity2[50];
    int Population2;
    float Area2;
    float PIB2;
    int TuristicPoint2;
    float DensidadePop2;
    float PIBperCap2;
    
    int CartaVencedor;

    // Cadastro das Cartas:
    //Jogo do Super Trunfo
    printf("Super Trunfo\n");

    printf("-----------------");
    printf("Primeira Carta\n");

    //First Input data

    printf("Estado: ");
    scanf("%s", State1);

    printf("Codigo da carta: ");
    scanf("%s", CardCode1);

    printf("Nome da cidade: ");
    scanf("%s", NameCity1);

    printf("Populacao: ");
    scanf("%d", &Population1);

    printf("Area: ");
    scanf("%f", &Area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Pontos turisticos: ");
    scanf("%d", &TuristicPoint1);

    /*DensidadePop1 = (float) Population1 / Area1;
    PIBperCap1 =  Pib1 / (float) Population1;*/

    // Second Input Data

    printf("-----------------");
    printf("Segunda Carta\n");
    
    printf("Estado: ");
    scanf("%s", State2);

    printf("Codigo da carta: ");
    scanf("%s", CardCode2);

    printf("Nome da cidade: ");
    scanf("%s", NameCity2);

    printf("Populacao: ");
    scanf("%d", &Population2);

    printf("Area: ");
    scanf("%f", &Area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Pontos turisticos: ");
    scanf("%d", &TuristicPoint2);

    /*DensidadePop2 = (float) Population2 / Area2;
    PIBperCap2 = Pib2 / (float) Population2;*/

    // Comparação de Cartas:
    
    if (PIB1 > PIB2) {
        CartaVencedor = 1; 
    } else {
        CartaVencedor = 2;
    }
    
    // Showing the Data

    printf("Carta 1: %s, %2.f\n", NameCity1, PIB1);
    printf("Carta 2: %s, %2.f\n", NameCity2, PIB2);
    printf("A Cidade Vencedora: %d\n", CartaVencedor);

    return 0;
}

//calculations card 1

    // Populacao: 12325000
    // Area: 1521.11
    // PIB: 699280000000.00
    // Pontos Turísticos: 50
    // PIB per capita: 56736.71
    // Densidade Populacional: 8102.64
    // Super Power: 699292385280.00

// calculations card 2

    // Populacao: 6748000
    // Area: 1200.25
    // PIB: 300500000000.00
    // Pontos Turísticos: 30
    // PIB per capita: 44531.71
    // Densidade Populacional: 5622.16
    // Super Poder: 300506775552.00