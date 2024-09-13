#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

/// @brief Cria o codigo da cidade
/// @param nome 
/// @param texto 
/// @param indice 
void retornaIdCidade ( char nome[], char texto[], int indice)
{
    char convertido[5];
    sprintf(convertido,"%d",indice);
    strcpy(nome,texto);
    strcat(nome,convertido);
}

/// @brief calcula a densidade populacional
/// @param populacao 
/// @param areaCidade 
/// @return 
float DensidadePopulacional(int populacao, float areaCidade)
{
    float resultado;
    resultado=populacao/areaCidade;
    return resultado;
}
/// @brief retorna o calculo do pib per capita
/// @param populacao 
/// @param pibCidade  
float PibPerCapita(int populacao, float pibCidade)
{
    float resultado;
    resultado=pibCidade/populacao;
    return resultado;
}
/// @brief funçao para mostrar os dados inseridos pelo usuario
/// @param numeroCidade 
/// @param nomeCidade 
/// @param codigoCidade 
/// @param populacaoCidade 
/// @param pointsCidade 
/// @param areaCidade 
/// @param pibCidade 
/// @param densidadePopulacional 
/// @param pibPerCapita 
/// @param superPoder
void MostrarDados(char numeroCidade[],char nomeCidade[],char codigoCidade[],int populacaoCidade,int pointsCidade,
                    float areaCidade,float pibCidade,float densidadePopulacional, float pibPerCapita,float superPoder)
{
    printf("Nome Cidade %s: %s\n",numeroCidade,nomeCidade);
    printf("Codigo da Cidade %s: %s \n",numeroCidade,codigoCidade);
    printf("populacao da Cidade %s: %d\n",numeroCidade,populacaoCidade);
    printf("Area da Cidade %s: %.3f\n",numeroCidade,areaCidade);
    printf("Pib Cidade %s: %.3f\n",numeroCidade,pibCidade);
    printf("Pontos Turisticos da Cidade %s: %d\n",numeroCidade,pointsCidade);
    printf("Densidade Populacional da Cidade %s: %.2f\n",numeroCidade,densidadePopulacional);
    printf("Pib per Capita da Cidade %s: %.2f\n",numeroCidade,pibPerCapita);
    printf("Total de super Poder da Cidade %s: %.2f\n",numeroCidade,superPoder);
}

float CalcularSuperPoder(int populacaoCidade,int pointsCidade,float areaCidade,float pibCidade,float densidadePopulacional, float pibPerCapita)
{
    float resultado=0.0;
    resultado=populacaoCidade+pointsCidade+areaCidade+pibCidade+densidadePopulacional+pibPerCapita;
    return resultado;
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
    int codigo=1 ;
    char  codigoCidadeA01[4], codigoCidadeA02[4] ;
    int  populacaoCidadeA01,pointsCidadeA01, populacaoCidadeA02,pointsCidadeA02 ;
    float  areaCidadeA01,densidadePopulacionalA01,pibPerCapitaA01,areaCidadeA02,densidadePopulacionalA02,pibPerCapitaA02 ;
    float  pibCidadeA01, pibCidadeA02  ;
    char nomeCidadeA01[20],nomeCidadeA02[20];
    float superPoderA01,superPoderA02;

    retornaIdCidade(codigoCidadeA01,"A0",codigo);

    printf("Digite o nome da Cidade 01:\n");
    scanf(" %s",nomeCidadeA01);
    printf("Digite a populacao da Cidade 01:\n");
    scanf("%d", &populacaoCidadeA01);
    printf("Digite a area da Cidade 01:\n");
    scanf("%f", &areaCidadeA01);
    printf("Digite o pib da Cidade 01:\n");
    scanf("%f",&pibCidadeA01);    
    printf("Digite a quantidade de pontos turisticos da Cidade 01:\n");
    scanf("%d",&pointsCidadeA01);
    
    densidadePopulacionalA01=DensidadePopulacional(populacaoCidadeA01,areaCidadeA01);
    pibPerCapitaA01=PibPerCapita(populacaoCidadeA01,pibCidadeA01);
    superPoderA01 = CalcularSuperPoder(populacaoCidadeA01, pointsCidadeA01, areaCidadeA01, pibCidadeA01, densidadePopulacionalA01,  pibPerCapitaA01);

    codigo++;
    retornaIdCidade(codigoCidadeA02,"A0",codigo);

    printf("Digite o nome da Cidade 02:\n");
    scanf(" %s",nomeCidadeA02);
    printf("Digite a populacao da Cidade 02:\n");
    scanf("%d",&populacaoCidadeA02);
    printf("Digite a area da Cidade 02:\n");
    scanf("%f",&areaCidadeA02);
    printf("Digite o pib da Cidade 02:\n");
    scanf("%f",&pibCidadeA02);
    printf("Digite a quantidade de pontos turisticos da Cidade 02:\n");
    scanf("%d",&pointsCidadeA02);

    densidadePopulacionalA02=DensidadePopulacional(populacaoCidadeA02,areaCidadeA02);
    pibPerCapitaA02=PibPerCapita(populacaoCidadeA02,pibCidadeA02);
    superPoderA02 = CalcularSuperPoder(populacaoCidadeA02, pointsCidadeA02, areaCidadeA02, pibCidadeA02, densidadePopulacionalA02,  pibPerCapitaA02);

    MostrarDados("01",nomeCidadeA01,codigoCidadeA01,populacaoCidadeA01,pointsCidadeA01,areaCidadeA01,pibCidadeA01,densidadePopulacionalA01,pibPerCapitaA01,superPoderA01);
    MostrarDados("02",nomeCidadeA02,codigoCidadeA02,populacaoCidadeA02,pointsCidadeA02,areaCidadeA02,pibCidadeA02,densidadePopulacionalA02,pibPerCapitaA02,superPoderA02);

    printf("===================Comparando propriedades===================\n");
    printf(" Se o resultado for 1 a Carta um venceu se for 0 a carta dois vence:\n");
    printf(" Calculando a populacao:\n");
    printf("O resultado da comparacao da Populacao e:%d\n",densidadePopulacionalA01 > densidadePopulacionalA02);
    printf(" Calculando a pontos turisticos:\n");
    printf("O resultado da comparacao dos pontos turisticos e:%d\n",pointsCidadeA01 > pointsCidadeA02);
    printf(" Calculando a area:\n");
    printf("O resultado da comparacao da area e:%d\n",areaCidadeA01 > areaCidadeA02);
    printf(" Calculando a pib:\n");
    printf("O resultado da comparacao do pib e:%d\n",pibCidadeA01 > pibCidadeA02);
    printf(" Calculando a densidade populacional:\n");
    printf("O resultado da comparacao da densidade populacional e:%d\n",densidadePopulacionalA01 < densidadePopulacionalA02);
    printf(" Calculando a pib per capita:\n");
    printf("O resultado da comparacao do pib per capita e:%d\n",pibPerCapitaA01 > pibPerCapitaA02);
    printf(" Calculando a super poder:\n");
    printf("O resultado da comparacao do super poder e:%d\n",superPoderA01 > superPoderA02);
    return 0;
}
