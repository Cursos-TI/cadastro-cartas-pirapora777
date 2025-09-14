#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    // Carta 1

    char ESTC1;
    char CODC1[10];
    char CIDC1[10];
    int POPC1;
    float AREAC1;
    float PIBC1;
    int NPTC1;

    // Carta 2
    
    char ESTC2;
    char CODC2[10];
    char CIDC2[10];
    int POPC2;
    float AREAC2;
    float PIBC2;
    int NPTC2;

      // Área para entrada de dados carta 1

        printf("Digite a letra de A a H correspondente ao nome do estado da carta 1: \n");
        scanf("%s", &ESTC1);

        printf("Digite o codigo da cidade de 1 a 4 correspondente a carta 1 de : \n");
        scanf("%s", &CODC1);

        printf("Digite o nome da cidade da carta 1: \n");
        scanf("%s", &CIDC1);

        printf("Digite a populaçao da da carta 1: \n");
        scanf("%d", &POPC1);

        printf("Digite a área da cidade da carta 1: \n");
        scanf("%f", &AREAC1);

        printf("Digite o PIB da cidade da carta 1: \n");
        scanf("%f", &PIBC1);

        printf("Digite o número de pontos turísticos da carta 1: \n");
        scanf("%d", &NPTC1);

      // Área para entrada de dados carta 2

        printf("Digite o nome do estado de A a H correspondente a carta 2: \n");
        scanf("%s", &ESTC2);

        printf("Digite o codigo da cidade de 1 a 4 correspondente a carta 2: \n");
        scanf("%s", &CODC2);

        printf("Digite o nome da cidade da carta 2: \n");
        scanf("%s", &CIDC2);

        printf("Digite a populaçao da da carta 2: \n");
        scanf("%d", &POPC2);

        printf("Digite a área da cidade da carta 2: \n");
        scanf("%f", &AREAC2);

        printf("Digite o PIB da cidade da carta 2: \n");
        scanf("%f", &PIBC2);

        printf("Digite o número de pontos turísticos da carta 2: \n");
        scanf("%d", &NPTC2);

        // Área para exibição dos dados da cidade

        //Imprimindo dados carta 1
    
        printf("O estado da cidade 1 é: %c \n", ESTC1);
        printf("O código da carta da cidade 1 é: %c \n", CODC1);
        printf("O nome da cidade da carta 1 é: %c \n", CIDC1);
        printf("A populaçao da cidade da carta 1 é: %d \n", POPC1);
        printf("A área em KM² da cidade da carta 1 é: %f \n", AREAC1);
        printf("O PIB da cidade da carta 1 é: %f \n", PIBC1);
        printf("O número de pontos turísticos da cidade da carta 1 é: %d \n", NPTC1);

        //Imprimindo dados carta 2
    
        printf("O estado da cidade 2 é: %c \n", ESTC2);
        printf("O código da carta da cidade 2 é: %c \n", CODC2);
        printf("O nome da cidade da carta 2 é: %c \n", CIDC2);
        printf("A populaçao da cidade da carta 2 é: %d \n", POPC2);
        printf("A área em KM² da cidade da carta 2 é: %f \n", AREAC2);
        printf("O PIB da cidade da carta 2 é: %f \n", PIBC2);
        printf("O número de pontos turísticos da cidade da carta 2 é: %d \n", NPTC2);

        return 0;
  
  


} 
