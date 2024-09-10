#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int  codigoCidadeA01  ,codigoCidadeA02  ,codigoCidadeA03  ,codigoCidadeA04;
    char nomeCidadeA01[20],nomeCidadeA02[20],nomeCidadeA03[20],nomeCidadeA04[20];
    int  populacaoCidadeA01  ,populacaoCidadeA02  ,populacaoCidadeA03  ,populacaoCidadeA04;
    float  areaCidadeA01  ,areaCidadeA02  ,areaCidadeA03  ,areaCidadeA04;
    float  pibCidadeA01  ,pibCidadeA02  ,pibCidadeA03  ,pibCidadeA04;
    int  pointsCidadeA01  ,pointsCidadeA02  ,pointsCidadeA03  ,pointsCidadeA04;

    printf("Digite o nome da Cidade 01:\n");
    scanf(" %S",&nomeCidadeA01);
    printf("Digite o codigo da Cidade 01:\n");
    scanf("%d",&codigoCidadeA01);
    printf("Digite a populacao da Cidade 01:\n");
    scanf("%d",&populacaoCidadeA01);
    printf("Digite a area da Cidade 01:\n");
    scanf("%f",&areaCidadeA01);
    printf("Digite o pib da Cidade 01:\n");
    scanf("%f",&pibCidadeA01);
    printf("Digite a quantidade de pontos turisticos da Cidade 01:\n");
    scanf("%d",&pointsCidadeA01); 

    printf("Nome Cidade 01: %S\n",nomeCidadeA01);
    printf("Codigo da Cidade 01: %d\n",codigoCidadeA01);
    printf("populacao da Cidade 01: %d\n",populacaoCidadeA01);
    printf("Area da Cidade 01: %.2f\n",areaCidadeA01);
    printf("Pib Cidade 01: %.2f\n",pibCidadeA01);
    printf("Pontos Turisticos da Cidade 01: %d\n",pointsCidadeA01);

    return 0;
}
