#include <stdio.h>

int main(){    

    // Formação de variáveis 
    char estado[20] = "";
    char nome[20] = "";
    char codigo ;
    int populacao = 0;
    float area = 0.0;
    float pib = 0.0;
    int pontos = 0;

    //Printf Carta 1
    printf("**CARTA 1**\n");
    printf("\n");

    //Entrada e saída de dados
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    //Entrada e saída de dasos
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    //Entrada e saída de dados
    printf("Digite o código da carta \n");
    scanf ("%s", &codigo);

    //Entrada e saída de dados 
    printf("Digite a população: \n");
    scanf("%d", &populacao);

    //Entrada e saída de dados 
    printf("Digite a área: \n");
    scanf("%f", &area);

    //Entrada e saída de dados
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    //Entrada e saída de dados 
    printf("Digite o número de  pontos turísticos: \n");
    scanf("%d", &pontos);

    //impressão de dados da carta 1
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome);
    printf("Código : %c\n", codigo);
    printf("População: %d\n", populacao);
    printf("Àrea: %f\n", area);
    printf("Pib: %f", pib);
    printf("Pontos: %d\n", pontos);

    printf("\n");

    //Printf Carta 2
    printf("**CARTA 2**\n");
    printf("\n");

    //Entrada e saída de dados 
    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    //Entrada e saída de dados 
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    //Entrada e saída de dados 
    printf("Digite o código da carta \n");
    scanf ("%s", &codigo);

    //Entrada e saída de dados 
    printf("Digite a população: \n");
    scanf("%d", &populacao);

    //Entrada e saída de dados 
    printf("Digite a área: \n");
    scanf("%f", &area);

    //Entrada e saída de dados 
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    //Entrada e saída de dados 
    printf("Digite o número de  pontos turísticos: \n");
    scanf("%d", &pontos);

    //impressão de dados da carta 2
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome);
    printf("Código: %c\n", codigo);
    printf("População: %d\n", populacao);
    printf("Àrea: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Pontos: %d\n", pontos);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;


}
