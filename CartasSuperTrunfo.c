#include <stdio.h>

int main(){    

    char estado[15] = "";
    char nome[20] = "";
    char codigo ;
    int populacao = 0;
    float area = 0.0;
    float pib = 0;
    int quantidade = 0;

    printf("**CARTA 1**\n");
    printf("\n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o código da carta \n");
    scanf ("%s", &codigo);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidade);


    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Àrea: %f\n", area);
    printf("Pib: %f", pib);
    printf("Pontos turísticos: %d\n", quantidade);


    printf("**CARTA 2**\n");
    printf("\n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o código da carta \n");
    scanf ("%s", &codigo);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidade);


    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Àrea: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Pontos turísticos: %d\n", quantidade);






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
