#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char CardCode1[5];
    char Nation1[50];
    int Population1;
    float Area1;
    float PIB1;
    int TuristicPoint1;
    float PopDensity1;
    float PIBperCap1;
    float calcPopDensity1;
    

    // Segunda Carta
    char CardCode2[5];
    char Nation2[50];
    int Population2;
    float Area2;
    float PIB2;
    int TuristicPoint2;
    float PopDensity2;
    float PIBperCap2;
    float calcPopDensity2;
    
    int controlador;
    int rControlador1;
    int rControlador2;

    // Cadastro das Cartas:
    //Jogo do Super Trunfo
    printf("Super Trunfo\n");

    printf("-----------------");
    printf("Primeira Carta\n");

    // Input data

    printf("Nome do País: ");
    scanf("%s", Nation1);

    printf("Codigo da carta: ");
    scanf("%s", CardCode1);

    printf("Populacao: ");
    scanf("%d", &Population1);

    printf("Area: ");
    scanf("%f", &Area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Pontos turisticos: ");
    scanf("%d", &TuristicPoint1);

    PopDensity1 = (float) Population1 / Area1;
    PIBperCap1 =  PIB1 / (float) Population1;
    calcPopDensity1 = 1.0 / PopDensity1;

    // Second Input Data

    printf("-----------------");
    printf("Segunda Carta\n");

    printf("Nome do País: ");
    scanf("%s", Nation2);

    printf("Codigo da carta: ");
    scanf("%s", CardCode2);

    printf("Populacao: ");
    scanf("%d", &Population2);

    printf("Area: ");
    scanf("%f", &Area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Pontos turisticos: ");
    scanf("%d", &TuristicPoint2);

    PopDensity2 = (float) Population2 / Area2;
    PIBperCap2 = PIB2 / (float) Population2;
    calcPopDensity2 = 1.0 / PopDensity2;


    // Menu

    printf("-----------Menu\n");
    printf("Escolha o primeiro atributo: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("-----------\n");
    scanf("%d", &controlador);

    rControlador1 = controlador;

    if ( rControlador1 < 1 || rControlador1 > 5) {

        printf("Opção Inválida!\n");
        return 0;

    } else {

        printf("-----------");
        printf("Escolha o segundo atributo diferente do primeiro: \n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("-----------\n");
        scanf("%d", &controlador);

        rControlador2 = controlador;

        if ( rControlador2 < 1 || rControlador2 > 5) {

            printf("Opção Inválida!\n");
            return 0;

        } else {

            if (rControlador1 == rControlador2) {

            printf("Os atributos devem ser diferentes!");
            return 0;

        }
        }
    }

    printf("-------- Comparando os Atributos\n");
    
    // First Attribute Logic 

    switch (rControlador1) {
        case 1:
        // População

            printf("Cartas: %s x %s\n", Nation1, Nation2);
            printf("Atributo escolhido: População\n");
            printf("Valores do atributo das cartas: %s, %d x %s, %d\n", Nation1, Population1, Nation2, Population2);
            
            // Comparing cards

            if (Population1 > Population2) {

                printf("O país vencedor é: %s, com %d\n", Nation1, Population1);
                
                break;

            } if (Population2 > Population1) {

                printf("O país vencedor é: %s, com %d\n", Nation2, Population2);

                break;

            } else {

                printf("Caso de empate! %s com %d, e %s com %d\n", Nation1, Population1, Nation2, Population2);

                break;

            }
            
        break;
        
        case 2:
        // Area

            printf("Cartas: %s x %s\n", Nation1, Nation2);
            printf("Atributo escolhido: Área\n");
            printf("Valores do atributo das cartas: %s, %2.f x %s, %2.f\n", Nation1, Area1, Nation2, Area2);
            
            // Comparing cards

            if (Area1 > Area2) {

                printf("O país vencedor é: %s, com %2.f\n", Nation1, Area1);

                break;

            } if (Area2 > Area1) {

                printf("O país vencedor é: %s, com %2.f\n", Nation2, Area2);

                break;

            } else {

                printf("Caso de empate! %s com %2.f, e %s com %2.f\n", Nation1, Area1, Nation2, Area2);

                break;

            }

        break;

        case 3: 
            // PIB
            printf("Cartas: %s x %s\n", Nation1, Nation2);
            printf("Atributo escolhido: Área\n");
            printf("Valores do atributo das cartas: %s, %2.f x %s, %2.f\n", Nation1, PIB1, Nation2, PIB2);
            
            // Comparing cards

            if (PIB1 > PIB2) {
                printf("O país vencedor é: %s, com %2.f\n", Nation1, PIB1);

                break;

            } if (PIB2 > PIB1) {
                printf("O país vencedor é: %s, com %2.f\n", Nation2, PIB2);

                break;

            } else {
                printf("Caso de empate! %s com %2.f, e %s com %2.f\n", Nation1, PIB1, Nation2, PIB2);

                break;

            }

        break;

        case 4:
            // Pontos Turisticos
            printf("Cartas: %s x %s\n", Nation1, Nation2);
            printf("Atributo escolhido: Área\n");
            printf("Valores do atributo das cartas: %s, %d x %s, %d\n", Nation1, TuristicPoint1, Nation2, TuristicPoint2);
            
            // Comparing cards

            if (TuristicPoint1 > TuristicPoint2) {
                printf("O país vencedor é: %s, com %d\n", Nation1, TuristicPoint1);

                break;

            } if (TuristicPoint2 > TuristicPoint1) {
                printf("O país vencedor é: %s, com %d\n", Nation2, TuristicPoint2);

                break;

            } else {
                printf("Caso de empate! %s com %d, e %s com %d\n", Nation1, TuristicPoint1, Nation2, TuristicPoint2);

                break;

            }

        break;

        case 5:
            // Densidade Demográfica
            printf("Cartas: %s x %s\n", Nation1, Nation2);
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("Valores do atributo das cartas: %s, %2.f x %s, %2.f\n", Nation1, PopDensity1, Nation2, PopDensity2);
            
            // Population Density Logic
            float rPopDensity1 = 1.0 / PopDensity1;
            float rPopDensity2 = 1.0 / PopDensity2;

            // Comparing cards

            if (rPopDensity1 > rPopDensity2) {
                printf("O país vencedor é: %s, com %2.f\n", Nation1, PopDensity1);

                break;

            } if (rPopDensity2 > rPopDensity1) {
                printf("O país vencedor é: %s, com %2.f\n", Nation2, PopDensity2);

                break;

            } else {
                printf("Caso de empate! %s com %2.f, e %s com %2.f\n", Nation1, PopDensity1, Nation2, PopDensity2);

                break;

            }

        break;

        default:
            printf("Opção Inválida\n");
    }

    // Second Attribute Logic
    switch (rControlador2) {
        case 1:
        // População

            printf("Cartas: %s x %s\n", Nation1, Nation2);
            printf("Atributo escolhido: População\n");
            printf("Valores do atributo das cartas: %s, %d x %s, %d\n", Nation1, Population1, Nation2, Population2);
            
            // Comparing cards

            if (Population1 > Population2) {

                printf("O país vencedor é: %s, com %d\n", Nation1, Population1);
                
                break;

            } if (Population2 > Population1) {

                printf("O país vencedor é: %s, com %d\n", Nation2, Population2);

                break;

            } else {

                printf("Caso de empate! %s com %d, e %s com %d\n", Nation1, Population1, Nation2, Population2);

                break;

            }
            
        break;
        
        case 2:
        // Area

            printf("Cartas: %s x %s\n", Nation1, Nation2);
            printf("Atributo escolhido: Área\n");
            printf("Valores do atributo das cartas: %s, %2.f x %s, %2.f\n", Nation1, Area1, Nation2, Area2);
            
            // Comparing cards

            if (Area1 > Area2) {

                printf("O país vencedor é: %s, com %2.f\n", Nation1, Area1);

                break;

            } if (Area2 > Area1) {

                printf("O país vencedor é: %s, com %2.f\n", Nation2, Area2);

                break;

            } else {

                printf("Caso de empate! %s com %2.f, e %s com %2.f\n", Nation1, Area1, Nation2, Area2);

                break;

            }

        break;

        case 3: 
            // PIB
            printf("Cartas: %s x %s\n", Nation1, Nation2);
            printf("Atributo escolhido: Área\n");
            printf("Valores do atributo das cartas: %s, %2.f x %s, %2.f\n", Nation1, PIB1, Nation2, PIB2);
            
            // Comparing cards

            if (PIB1 > PIB2) {
                printf("O país vencedor é: %s, com %2.f\n", Nation1, PIB1);

                break;

            } if (PIB2 > PIB1) {
                printf("O país vencedor é: %s, com %2.f\n", Nation2, PIB2);

                break;

            } else {
                printf("Caso de empate! %s com %2.f, e %s com %2.f\n", Nation1, PIB1, Nation2, PIB2);

                break;

            }

        break;

        case 4:
            // Pontos Turisticos
            printf("Cartas: %s x %s\n", Nation1, Nation2);
            printf("Atributo escolhido: Área\n");
            printf("Valores do atributo das cartas: %s, %d x %s, %d\n", Nation1, TuristicPoint1, Nation2, TuristicPoint2);
            
            // Comparing cards

            if (TuristicPoint1 > TuristicPoint2) {
                printf("O país vencedor é: %s, com %d\n", Nation1, TuristicPoint1);

                break;

            } if (TuristicPoint2 > TuristicPoint1) {
                printf("O país vencedor é: %s, com %d\n", Nation2, TuristicPoint2);

                break;

            } else {
                printf("Caso de empate! %s com %d, e %s com %d\n", Nation1, TuristicPoint1, Nation2, TuristicPoint2);

                break;

            }

        break;

        case 5:
            // Densidade Demográfica
            printf("Cartas: %s x %s\n", Nation1, Nation2);
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("Valores do atributo das cartas: %s, %2.f x %s, %2.f\n", Nation1, PopDensity1, Nation2, PopDensity2);
            
            // Population Density Logic
            float rPopDensity1 = 1.0 / PopDensity1;
            float rPopDensity2 = 1.0 / PopDensity2;

            // Comparing cards

            if (rPopDensity1 > rPopDensity2) {
                printf("O país vencedor é: %s, com %2.f\n", Nation1, PopDensity1);

                break;

            } if (rPopDensity2 > rPopDensity1) {
                printf("O país vencedor é: %s, com %2.f\n", Nation2, PopDensity2);

                break;

            } else {
                printf("Caso de empate! %s com %2.f, e %s com %2.f\n", Nation1, PopDensity1, Nation2, PopDensity2);

                break;

            }

        break;

        default:
            printf("Opção Inválida\n");
    }

    // Sum All Attributes
    float sumCard1 = (float) Population1 + Area1 + (float) TuristicPoint1 + PIB1 + PIBperCap1 + calcPopDensity1;
    float sumCard2 = (float) Population2 + Area2 + (float) TuristicPoint2 + PIB2 + PIBperCap2 + calcPopDensity2;

    printf("------Soma Geral\n");
    printf("Somando todos os atributos...\n");
    printf("Resultado: %s - %2.f VS %s - %2.f\n", Nation1, sumCard1, Nation2, sumCard2);
    printf("Comparando as Cartas...\n");
    sumCard1 > sumCard2 ? printf("Vencedor: %s com %2.f\n", Nation1, sumCard1) : printf("Vencedor: %s com %2.f\n", Nation2, sumCard2);

    
    // Showing general data card

    printf("-------Comparação Geral\n");
    printf("Populações: %s - %d VS %s - %d\n", Nation1, Population1, Nation2, PopDensity2);
    printf("Área: %s - %2.f VS %s - %2.f\n", Nation1, Area1, Nation2, Area2);
    printf("PIB: %s - %2.f VS %s - %2.f\n", Nation1, PIB1, Nation2, PIB2);
    printf("Pontos Turísticos: %s - %d VS %s - %d\n", Nation1, TuristicPoint1, Nation2, TuristicPoint2);
    printf("Densidade Demográfica: %s - %2.f VS %s - %2.f\n", Nation1, PopDensity1, Nation2, PopDensity2);
    printf("---------\n");
    
    // Logic Compare Cards

    if (Population1 == Population2) {
        printf("Populações: Caso de Empate!\n");
    } else {
    printf("Resultado em População: ");
    Population1 > Population2 ? printf("Carta Vencedora %s, com %d\n", Nation1, Population1) : printf("Carta Vencedora: %s, com %d\n", Nation2, Population2);
    }

    if (Area1 == Area2) {
        printf("Área: Caso de Empate!\n");
    } else {
    printf("Resultado em Área: ");
    Area1 > Area2 ? printf("Carta Vencedora %s, com %2.f\n", Nation1, Area1) : printf("Carta Vencedora: %s, com %2.f\n", Nation2, Area2);
    }

    if (PIB1 == PIB2) {
        printf("PIB: Caso de Empate!\n");
    } else {
    printf("Resultado em PIB: ");
    PIB1 > PIB2 ? printf("Carta Vencedora %s, com %2.f\n", Nation1, PIB1) : printf("Carta Vencedora: %s, com %2.f\n", Nation2, PIB2);
    }

    if (TuristicPoint1 == TuristicPoint2) {
        printf("Pontos turísticos: Caso de Empate!\n");
    } else {
    printf("Resultado em Pontos Turísticos: ");
    TuristicPoint1 > TuristicPoint2 ? printf("Carta Vencedora %s, com %d\n", Nation1, TuristicPoint1) : printf("Carta Vencedora: %s, com %d\n", Nation2, TuristicPoint2);
    }

    if (PopDensity1 == PopDensity2) {
        printf("Densidade Demográfica: Caso de Empate!\n");
    } else {
    printf("Resultado em Densidade Demográfica: ");
    calcPopDensity1 > calcPopDensity2 ? printf("Carta Vencedora %s, com %2.f\n", Nation1, PopDensity1) : printf("Carta Vencedora: %s, com %2.f\n", Nation2, PopDensity2);
    }

    

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