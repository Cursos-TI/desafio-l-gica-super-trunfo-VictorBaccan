#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    char estado1[6], estado2[6], nome1[35], nome2[35], codigo_carta1[6], codigo_carta2[6];
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibCap1, pibCap2;
    float superPoder1, superPoder2;
    unsigned long int populacao1, populacao2;

     // REQUISIÇÃO DE DADOS PARA A CARTA 1: <---
    printf("Digite a Letra ou Sigla para Representar o Estado da Carta 1: ");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta 1: ");
    scanf("%s", &codigo_carta1);
    
    printf("Digite o Nome da Cidade da Carta 1: ");
    getchar();
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite a População da Cidade da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a Área da Cidade da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n"); // Pula uma Linha

    // REQUISIÇÃO DE DADOS PARA A CARTA 2: <---
    printf("Digite a Letra ou Sigla para Representar o Estado da Carta 2: ");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta 2: ");
    scanf("%s", &codigo_carta2);

    printf("Digite o Nome da Cidade da Carta 2: ");
    getchar();
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite a População da Cidade da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n"); // Pula uma Linha

    // EXIBINDO DADOS DA CARTA 1: <---
    printf("------------------------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;
    pibCap1 = ((float)pib1 * 1000000000) / populacao1;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibCap1);
    printf("------------------------------------------------\n\n");

    // EXIBINDO DADOS DA CARTA 2: <---
    printf("------------------------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pibCap2 = ((float)pib2 * 1000000000) / populacao2;


    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibCap2);
    printf("------------------------------------------------\n\n");

    //CALCULANDO O SUPER PODER
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pibCap1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibCap2 + (1 / densidade2);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
    // Váriavel para armazenar o valor de escolha do Usuário para o Switch.
    int opcao1, opcao2;
    float resultadoFinal1, resultadoFinal2;
    char atributosUtilizados1[25], atributosUtilizados2[25];

    printf("Carta 1: %s (%s)\n", nome1, estado1);
    printf("Carta 2: %s (%s)\n\n", nome2, estado2);
    printf("Opções Para a Primeira Comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite uma Opção Para Comparação: ");
    scanf("%d", &opcao1);

    printf("\n\n");

    // PRIMEIRO SWITCH PARA COMPARAÇÕES DE ATRIBUTOS DO USUÁRIO
    switch (opcao1){
    case 1:
        printf("Comparação de Cartas (Atributo: População):\n\n");
        printf("Carta 1 - %s (%s): %lu\n", nome1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %lu\n", nome2, estado2, populacao2);
        resultadoFinal1 += populacao1;
        resultadoFinal2 += populacao2;
        if (populacao1 > populacao2){
            printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
        } else if (populacao2 > populacao1){
            printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
        } else {
            printf("Empate!\n\n");
        }
        break;
    case 2:
        printf("Comparação de Cartas (Atributo: Área):\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, area2);
        resultadoFinal1 += area1;
        resultadoFinal2 += area2;
        if (area1 > area2){
            printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
        } else if (area2 > area1){
            printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
        } else {
            printf("Empate!\n\n");
        }
        break;
    case 3:
        printf("Comparação de Cartas (Atributo: PIB):\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pib2);
        resultadoFinal1 += pib1;
        resultadoFinal2 += pib2;
        if (pib1 > pib2){
            printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
        } else if (pib2 > pib1){
            printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
        } else {
            printf("Empate!\n\n");
        }
        break;
    case 4:
        printf("Comparação de Cartas (Atributo: Pontos Turisticos):\n\n");
        printf("Carta 1 - %s (%s): %d\n", nome1, estado1, pontos_turisticos1);
        printf("Carta 2 - %s (%s): %d\n", nome2, estado2, pontos_turisticos2);
        resultadoFinal1 += pontos_turisticos1;
        resultadoFinal2 += pontos_turisticos2;
        if (pontos_turisticos1 > pontos_turisticos2){
            printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
        } else {
            printf("Empate!\n\n");
        }
        break;
    case 5:
        printf("Comparação de Cartas (Atributo: Densidade):\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, densidade2);
        resultadoFinal1 += densidade1;
        resultadoFinal2 += densidade2;
        if (densidade1 < densidade2){
            printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
        } else if (densidade2 < densidade1){
            printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
        } else {
            printf("Empate!\n\n");
        }
        break;
    case 6:
        printf("Comparação de Cartas (Atributo: PIB per Capita):\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pibCap1);
        printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pibCap2);
        resultadoFinal1 += pibCap1;
        resultadoFinal2 += pibCap2;
        if (pibCap1 > pibCap2){
            printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
        } else if (pibCap2 > pibCap1){
            printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
        } else {
            printf("Empate!\n\n");
        }
        break;
    case 7:
        printf("Comparação de Cartas (Atributo: Super Poder):\n\n");
        printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, superPoder1);
        printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, superPoder2);
        resultadoFinal1 += superPoder1;
        resultadoFinal2 += superPoder2;
        if (superPoder1 > superPoder2){
            printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
        } else if (superPoder2 > superPoder1){
            printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
        } else {
            printf("Empate!\n\n");
        }
        break;   
    default:
        printf("Opção Inválida.\n");
        break;
    }

    printf("\n"); // Pulando Linha para as Opções da Segunda Comparação

    printf("Opções Para a Segunda Comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite uma Opção Para Comparação: ");
    scanf("%d", &opcao2);

    // SEGUNDO SWITCH PARA COMPARAÇÕES DE ATRIBUTOS DO USUÁRIO
    if (opcao2 == opcao1){
        printf("Opção Selecionada já foi Escolhida!");
        return 0;
    } else {
        switch (opcao2){
        case 1:
            printf("Comparação de Cartas (Atributo: População):\n\n");
            printf("Carta 1 - %s (%s): %lu\n", nome1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu\n", nome2, estado2, populacao2);
            resultadoFinal1 += populacao1;
            resultadoFinal2 += populacao2;
            if (populacao1 > populacao2){
                printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
            } else if (populacao2 > populacao1){
                printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
            } else {
                printf("Empate!\n\n");
            }
            break;
        case 2:
            printf("Comparação de Cartas (Atributo: Área):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, area2);
            resultadoFinal1 += area1;
            resultadoFinal2 += area2;
            if (area1 > area2){
                printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
            } else if (area2 > area1){
                printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
            } else {
                printf("Empate!\n\n");
            }
            break;
        case 3:
            printf("Comparação de Cartas (Atributo: PIB):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pib2);
            resultadoFinal1 += pib1;
            resultadoFinal2 += pib2;
            if (pib1 > pib2){
                printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
            } else if (pib2 > pib1){
                printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
            } else {
                printf("Empate!\n\n");
            }
            break;
        case 4:
            printf("Comparação de Cartas (Atributo: Pontos Turisticos):\n\n");
            printf("Carta 1 - %s (%s): %d\n", nome1, estado1, pontos_turisticos1);
            printf("Carta 2 - %s (%s): %d\n", nome2, estado2, pontos_turisticos2);
            resultadoFinal1 += pontos_turisticos1;
            resultadoFinal2 += pontos_turisticos2;
            if (pontos_turisticos1 > pontos_turisticos2){
                printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
            } else {
                printf("Empate!\n\n");
            }
            break;
        case 5:
            printf("Comparação de Cartas (Atributo: Densidade):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, densidade2);
            resultadoFinal1 += densidade1;
            resultadoFinal2 += densidade2;
            if (densidade1 < densidade2){
                printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
            } else if (densidade2 < densidade1){
                printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
            } else {
                printf("Empate!\n\n");
            }
            break;
        case 6:
            printf("Comparação de Cartas (Atributo: PIB per Capita):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pibCap1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pibCap2);
            resultadoFinal1 += pibCap1;
            resultadoFinal2 += pibCap2;
            if (pibCap1 > pibCap2){
                printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
            } else if (pibCap2 > pibCap1){
                printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
            } else {
                printf("Empate!\n\n");
            }
            break;
        case 7:
            printf("Comparação de Cartas (Atributo: Super Poder):\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, superPoder1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, superPoder2);
            resultadoFinal1 += superPoder1;
            resultadoFinal2 += superPoder2;
            if (superPoder1 > superPoder2){
                printf("Resultado: Carta 1 (%s) Venceu!\n\n", nome1);
            } else if (superPoder2 > superPoder1){
                printf("Resultado: Carta 2 (%s) Venceu!\n\n", nome2);
            } else {
                printf("Empate!\n\n");
            }
            break;   
        default:
            printf("Opção Inválida.\n");
            break;
        }
    }

    // Exibindo Resultados das Comparações Realizadas!
    printf("============================================\n");
    printf("Resumo das Comparações:\n\n");
    printf("Carta 1: %s (%s)\n", nome1, estado1);
    printf("Carta 2: %s (%s)\n\n", nome2, estado2);
    if (opcao1 == 1){
        printf("O Primeiro Atributo Utilizado na Comparação foi: (População)\n");
        printf("(População) da Carta 1 Tem o valor: %lu\n\n", populacao1);
        printf("(População) da Carta 2 Tem o valor: %lu\n\n", populacao2);
    } else if (opcao1 == 2){
        printf("O Primeiro Atributo Utilizado na Comparação foi: (Área)\n");
        printf("(Área) da Carta 1 Tem o valor: %.2f\n\n", area1);
        printf("(Área) da Carta 2 Tem o valor: %.2f\n\n", area2);
    } else if (opcao1 == 3){
        printf("O Primeiro Atributo Utilizado na Comparação foi: (PIB)\n");
        printf("(PIB) da Carta 1 Tem o valor: %.2f\n\n", pib1);
        printf("(PIB) da Carta 2 Tem o valor: %.2f\n\n", pib2);
    } else if (opcao1 == 4){
        printf("O Primeiro Atributo Utilizado na Comparação foi: (Pontos Turisticos)\n");
        printf("(Pontos Turisticos) da Carta 1 Tem o valor: %d\n\n", pontos_turisticos1);
        printf("(Pontos Turisticos) da Carta 2 Tem o valor: %d\n\n", pontos_turisticos2);
    } else if (opcao1 == 5){
        printf("O Primeiro Atributo Utilizado na Comparação foi: (Densidade)\n");
        printf("(Densidade) da Carta 1 Tem o valor: %.2f\n\n", densidade1);
        printf("(Densidade) da Carta 2 Tem o valor: %.2f\n\n", densidade2);
    } else if (opcao1 == 6){
        printf("O Primeiro Atributo Utilizado na Comparação foi: (PIB per Capita)\n");
        printf("(PIB per Capita) da Carta 1 Tem o valor: %.2f\n\n", pibCap1);
        printf("(PIB per Capita) da Carta 2 Tem o valor: %.2f\n\n", pibCap2);
    } else if (opcao1 == 7){
        printf("O Primeiro Atributo Utilizado na Comparação foi: (Super Poder)\n");
        printf("(Super Poder) da Carta 1 Tem o valor: %.2f\n\n", superPoder1);
        printf("(Super Poder) da Carta 2 Tem o valor: %.2f\n\n", superPoder2);
    }

      if (opcao2 == 1){
        printf("E o Segundo Atributo Utilizado foi: (População)\n");
        printf("(População) da Carta 1 Tem o valor: %lu\n\n", populacao1);
        printf("(População) da Carta 2 Tem o valor: %lu\n\n", populacao2);
    } else if (opcao2 == 2){
        printf("E o Segundo Atributo Utilizado foi: (Área)\n");
        printf("(Área) da Carta 1 Tem o valor: %.2f\n\n", area1);
        printf("(Área) da Carta 2 Tem o valor: %.2f\n\n", area2);
    } else if (opcao2 == 3){
        printf("E o Segundo Atributo Utilizado foi: (PIB)\n");
        printf("(PIB) da Carta 1 Tem o valor: %.2f\n\n", pib1);
        printf("(PIB) da Carta 2 Tem o valor: %.2f\n\n", pib2);
    } else if (opcao2 == 4){
        printf("E o Segundo Atributo Utilizado foi: (Pontos Turisticos)\n");
        printf("(Pontos Turisticos) da Carta 1 Tem o valor: %d\n\n", pontos_turisticos1);
        printf("(Pontos Turisticos) da Carta 2 Tem o valor: %d\n\n", pontos_turisticos2);
    } else if (opcao2 == 5){
        printf("E o Segundo Atributo Utilizado foi: (Densidade)\n");
        printf("(Densidade) da Carta 1 Tem o valor: %.2f\n\n", densidade1);
        printf("(Densidade) da Carta 2 Tem o valor: %.2f\n\n", densidade2);
    } else if (opcao2 == 6){
        printf("E o Segundo Atributo Utilizado foi: (PIB per Capita)\n");
        printf("(PIB per Capita) da Carta 1 Tem o valor: %.2f\n\n", pibCap1);
        printf("(PIB per Capita) da Carta 2 Tem o valor: %.2f\n\n", pibCap2);
    } else if (opcao2 == 7){
        printf("E o Segundo Atributo Utilizado foi: (Super Poder)\n");
        printf("(Super Poder) da Carta 1 Tem o valor: %.2f\n\n", superPoder1);
        printf("(Super Poder) da Carta 2 Tem o valor: %.2f\n\n", superPoder2);
    }

    // EXIBINDO A SOMA DOS ATRIBUTOS INDIVIDUAIS DE AMBAS AS CARTAS
    printf("A Soma dos Dois Atributos Individuais da Carta 1 é: %.2f\n", resultadoFinal1);
    printf("A Soma dos Dois Atributos Individuais da Carta 2 é: %.2f\n\n", resultadoFinal2);

    // EXIBINDO O RESULTADO FINAL DA SOMA DOS DOIS ATRIBUTOS
    // E COMPARANDO PARA SABER QUEM GANHOU O JOGO
    if ((resultadoFinal1 > resultadoFinal2) ? resultadoFinal1 : resultadoFinal2){
        printf("Carta 1 - (%s) Venceu: %.2f pontos!\n", nome1, resultadoFinal1);
    } else if ((resultadoFinal2 > resultadoFinal1) ? resultadoFinal2 : resultadoFinal1){
        printf("Carta 2 - (%s) Venceu: %.2f pontos!\n", nome2, resultadoFinal2);
    } else {
        printf("Empate! Ambas as Somas Foram Iguais!");
    }

    return 0;
}