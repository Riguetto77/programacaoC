#include <stdio.h>


int main(){


//Imprime o Nome do Programa
printf("***Super Trunfo***\n");

//pula uma linha após o nome do programa
printf("\n");


    //Declaração de variáveis
    char estado1[20], estado2[20];
    char codigo1[20] = "A01", codigo2[20] = "A02";
    char nomedacidade1[20], nomedacidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapta1, pibpercapta2;
    float superpoder1, superpoder2;
    char sim[5];
    int escolhajogador;
    
    
    //Entrada e leitura de dados inseridos pelo usuário para Carta 1
    printf("Escreva o nome do estado: ");
    scanf("%s", estado1);
    
    printf("Escreva o nome da cidade: ");
    scanf("%s", nomedacidade1);

    printf("Escreva a população: ");
    scanf("%d", &populacao1);

    printf("Escreva a área: ");
    scanf("%f", &area1);

    printf("Escreva o PIB: ");
    scanf("%f", &pib1);

    printf("Escreva o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);


    //cálculos da densidade populacional, pib per capta e super poder da Carta 1
    densidadepopulacional1 = populacao1 / area1;
    pibpercapta1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + (1 / densidadepopulacional1) + pibpercapta1;


    //pula uma linha após entrada e leitura dos dados da Carta 1
    printf("\n");
    

    //Mostra os dados inseridos pelo usuário para Carta 1
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f habitantes/Km²\n", densidadepopulacional1);
    printf("PIB per capta: %.2f reais por habitante\n", pibpercapta1);
    printf("Super Poder: %.2f\n", superpoder1);


    //pula uma linha após exibição dos dados da Carta 1
    printf("\n");


    //Entrada e leitura de dados inseridos pelo usuário para Carta 2
    printf("Escreva o nome do estado: ");
    scanf("%s", estado2);

    printf("Escreva o nome da cidade: ");
    scanf("%s", nomedacidade2);

    printf("Escreva a população: ");
    scanf("%d", &populacao2);

    printf("Escreva a área: ");
    scanf("%f", &area2);

    printf("Escreva o PIB: ");
    scanf("%f", &pib2);

    printf("Escreva o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);


    //cálculos da densidade populacional, pib per capta e super poder da Carta 2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapta2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + (1 / densidadepopulacional2) + pibpercapta2;


    //pula uma linha após entrada e leitura dos dados da Carta 2
    printf("\n");
    

    //Mostra os dados inseridos pelo usuário para Carta 2
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f habitantes/Km²\n", densidadepopulacional2);
    printf("PIB per capta: %.2f reais por habitante\n", pibpercapta2);
    printf("Super Poder: %.2f\n", superpoder2);


    //pula uma linha após exibição dos dados da Carta 2
    printf("\n");


    //Comparação entre Carta 1 com a Carta 2
    //int resultadopopulacao = populacao1 > populacao2;
    //float resultadoarea = area1 > area2;
    //float resultadopib = pib1 > pib2;
    //int resultadopontosturisticos = pontosturisticos1 > pontosturisticos2;
    //float resultadodensidadepopulacional  = densidadepopulacional1 < densidadepopulacional2;
    //float resultadopibpercapta = pibpercapta1 > pibpercapta2;
    //float resultadosuperpoder = superpoder1 > superpoder2;
    
    
    //Explicação da comparação
    //printf("Comparação das cartas: se for 1 carta 1 ganha, se for 0 carta 2 ganha.\n");
    //printf("Para saber quem ganhou, tecle sim: ");
    //scanf("%s", sim);


    //pula uma linha após explicação da comparação
    //printf("\n");


    //Exibe o resultado da comparação
    //printf("População: %d\n", resultadopopulacao);
    //printf("Área: %.2f\n", resultadoarea);
    //printf("PIB: %.2f\n", resultadopib);
    //printf("Pontos Turísticos: %d\n", resultadopontosturisticos);
    //printf("Densidade populacional: %.2f\n", resultadodensidadepopulacional);
    //printf("PIB per capta: %.2f\n", resultadopibpercapta);
    //printf("Super Poder: %.2f\n", resultadosuperpoder);

    //pula uma linha após exibição da comparação
    //printf("\n");

    //Definindo um atributo para comparação das cartas
        //printf("***Comparação de Cartas (Atributo: Super Poder)***\n");
    printf("*** Comparação de Cartas ***\n");

    //pula uma linha após exibição da comparação
    printf("\n");

    
    printf("Escolha um Atributo da Carta 1: \n");
    
    //pula uma linha
    printf("\n");
    
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Pontos Turísticos\n");
    printf("5- Densidade Populacional\n");
    printf("6- PIB per Capta\n");
    printf("7- Super Poder\n");

    //pula uma linha
    printf("\n");

    printf("Digite a opção desejada:");
    scanf("%d", &escolhajogador);

    //pula uma linha
    printf("\n");

    switch (escolhajogador)
    {
        case 1:
        printf("Atributo escolhido: População\n");

    //pula uma linha
    printf("\n");

        if(populacao1 > populacao2){
        printf("A Carta %s - %s venceu!", codigo1, estado1);
    } else if(populacao1 < populacao2){
        printf("A Carta %s - %s venceu!", codigo2, estado2);
    } else {
        printf("Houve um empate!\n");
    }
        break;
    
        case 2:
        printf("Atributo escolhido: Área\n");

    //pula uma linha
    printf("\n");

        if(area1 > area2){
        printf("A Carta %s - %s venceu!", codigo1, estado1);
    } else if(area1 < area2){
        printf("A Carta %s - %s venceu!", codigo2, estado2);
    } else {
        printf("Houve um empate!\n");
    }
        break;

        case 3:
        printf("Atributo escolhido: PIB\n");

    //pula uma linha
    printf("\n");

        if(pib1 > pib2){
        printf("A Carta %s - %s venceu!", codigo1, estado1);
    } else if(pib1 < pib2){
        printf("A Carta %s - %s venceu!", codigo2, estado2);
    } else {
        printf("Houve um empate!\n");
    }
        break;

        case 4:
        printf("Atributo escolhido: Pontos Turísticos\n");

    //pula uma linha
    printf("\n");

        if(pontosturisticos1 > pontosturisticos2){
        printf("A Carta %s - %s venceu!", codigo1, estado1);
    } else if(pontosturisticos1 < pontosturisticos2){
        printf("A Carta %s - %s venceu!", codigo2, estado2);
    } else {
        printf("Houve um empate!\n");
    }
        break;
    
        case 5:
        printf("Atributo escolhido: Densidade Populacional\n");

    //pula uma linha
    printf("\n");

        if(densidadepopulacional1 < densidadepopulacional2){
        printf("A Carta %s - %s venceu!", codigo1, estado1);
    } else if(densidadepopulacional1 > densidadepopulacional2){
        printf("A Carta %s - %s venceu!", codigo2, estado2);
    } else {
        printf("Houve um empate!\n");
    }
        break;

        case 6:
        printf("Atributo escolhido: PIB per Capta\n");

    //pula uma linha
    printf("\n");

        if(pibpercapta1 > pibpercapta2){
        printf("A Carta %s - %s venceu!", codigo1, estado1);
    } else if(pibpercapta1 < pibpercapta2){
        printf("A Carta %s - %s venceu!", codigo2, estado2);
    } else {
        printf("Houve um empate!\n");
    }
        break;

        case 7:
        printf("Atributo escolhido: Super Poder\n");

    //pula uma linha
    printf("\n");

        if(superpoder1 > superpoder2){
        printf("A Carta %s - %s venceu!", codigo1, estado1);
    } else if(superpoder1 < superpoder2){
        printf("A Carta %s - %s venceu!", codigo2, estado2);
    } else {
        printf("Houve um empate!\n");
    }
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }

    
    return 0;

} 