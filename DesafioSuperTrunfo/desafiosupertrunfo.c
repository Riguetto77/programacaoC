#include <stdio.h>

int main(){


//Imprime o Nome do Programa
printf("Super Trunfo\n");

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

}