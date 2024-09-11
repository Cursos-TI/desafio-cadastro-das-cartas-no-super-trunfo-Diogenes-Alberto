#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

void retornaIdCidade ( char nome[], char texto[], int indice)
{
    char convertido[5];
    sprintf(convertido,"%d",indice);
    strcpy(nome,texto);
    strcat(nome,convertido);
}
float DensidadePopulacional(int populacao, float areaCidade)
{
    float resultado;
    resultado=populacao/areaCidade;
    return resultado;
}
float PibPerCapita(int populacao, float pibCidade)
{
    float resultado;
    resultado=pibCidade/populacao;
    return resultado;
}

void MostrarDados(char numeroCidade[],char nomeCidade[],char codigoCidade[],int populacaoCidade,int pointsCidade,
                    float areaCidade,float pibCidade,float densidadePopulacional, float pibPerCapita)
{
    printf("Nome Cidade %s: %s\n",numeroCidade,nomeCidade);
    printf("Codigo da Cidade %s: %s \n",numeroCidade,codigoCidade);
    printf("populacao da Cidade %s: %d\n",numeroCidade,populacaoCidade);
    printf("Area da Cidade %s: %.2f\n",numeroCidade,areaCidade);
    printf("Pib Cidade %s: %.2f\n",numeroCidade,pibCidade);
    printf("Pontos Turisticos da Cidade %s: %d\n",numeroCidade,pointsCidade);
    printf("Densidade Populacional da Cidade %s: %.2f\n",numeroCidade,densidadePopulacional);
    printf("Pib per Capita da Cidade %s: %.2f\n",numeroCidade,pibPerCapita);
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    int codigo=1;
    char  codigoCidadeA01[4]  ;
    int  populacaoCidadeA01,pointsCidadeA01 ;
    float  areaCidadeA01,densidadePopulacionalA01,pibPerCapitaA01 ;
    float  pibCidadeA01  ;
    char nomeCidadeA01[20];

    retornaIdCidade(codigoCidadeA01,"A0",codigo);
    
    printf("Digite o nome da Cidade 01:\n");
    scanf(" %s",nomeCidadeA01);
    printf("Digite a populacao da Cidade 01:\n");
    scanf("%d",&populacaoCidadeA01);
    printf("Digite a area da Cidade 01:\n");
    scanf("%f",&areaCidadeA01);
    printf("Digite o pib da Cidade 01:\n");
    scanf("%f",&pibCidadeA01);
    printf("Digite a quantidade de pontos turisticos da Cidade 01:\n");
    scanf("%d",&pointsCidadeA01);

    densidadePopulacionalA01=DensidadePopulacional(populacaoCidadeA01,areaCidadeA01);
    pibPerCapitaA01=PibPerCapita(populacaoCidadeA01,pibCidadeA01);

    MostrarDados("01",nomeCidadeA01,codigoCidadeA01,populacaoCidadeA01,pointsCidadeA01,areaCidadeA01,pibCidadeA01,densidadePopulacionalA01,pibPerCapitaA01);
    return 0;
}
