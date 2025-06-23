#include <stdio.h> 

int main() 

{   
    // Carta 1 - Minas Gerais //escolhi Minas Gerais como o primeiro estado para ser exibido na tela.
    
    char estado1[] = "Minas Gerais"; // nome do estado 
   
    char codigo1[] = "A01"; // Código de identificação da carta
    // Escolhi o código A01 para Minas Gerais, seguindo a lógica de que A é o primeiro estado.
    
    char nomeCidade1[] = "Belo Horizonte"; // Nome da cidade que representa Minas Gerais
    
    int populacao1 = 2416339; // População da cidade de Belo Horizonte
    
    float area1 = 586.528; // Área da cidade em km²
    
    float pib1 = 1600000000000.0; // trilhões de reais // PIB de Minas Gerais
    
    int pontosTuristicos1 = 5000; // Número de pontos turísticos em Minas Gerais
   
    float DensidadePopulacional1 = populacao1 / area1; // Cálculo da densidade populacional da carta 1
    
    float PibPerCapita1 = pib1 / populacao1; // Cálculo do PIB per capita da carta 1
    
    // Escolhi Belo Horizonte como a cidade representativa de Minas Gerais, pois é a capital e uma das maiores cidades do estado.
    
    
    
    
    // Carta 2 - Paraná // Escolhi o estado do Paraná como o segundo estado para ser exibido na tela.
   
    char estado2[] = "Paraná"; // Nome do estado
    
    char codigo2[] = "B02"; // Código de identificação da carta
    
    // Escolhi o código B02 para o Paraná, seguindo a lógica de que B é o segundo estado.
    
    char nomeCidade2[] = "Curitiba"; // Nome da cidade que representa o Paraná
    
    int populacao2 = 11824665; // População da cidade de Curitiba
    
    float area2 = 199314.9; // Área da cidade em km²
    
    float pib2 = 718900000000; // bilhões de reais // PIB do Paraná
    
    int pontosTuristicos2 = 2058; // Número de pontos turísticos no Paraná

    float DensidadePopulacional2 = populacao2 / area2; // Cálculo da densidade populacional da carta 2
    
    float PibPerCapita2 = pib2 / populacao2; // Cálculo do PIB per capita da carta 2
    
    // Escolhi Curitiba como a cidade representativa do Paraná, pois é a capital e uma das maiores cidades do estado.

    // Comecei primeiramente colocando os dados das cartas 1 e 2, para que seja exibido na tela uma base de compração entre elas.


    
    // Exibição dos Dados - Carta 1
    
    printf("=== Carta 1 ===\n"); // Início da exibição dos dados da carta 1
    
    printf("Estado: %s\n", estado1); // Exibe o nome do estado da carta 1
    
    printf("Código: %s\n", codigo1); // Exibe o código de identificação da carta 1
    
    printf("Nome da Cidade: %s\n", nomeCidade1); // Exibe o nome da cidade representativa da carta 1
    
    printf("População: %d\n", populacao1); // Exibe a população da cidade da carta 1
    
    printf("Área: %.2f km²\n", area1); // Exibe a área da cidade da carta 1
    
    printf("PIB: R$ %.2f\n", pib1); // Exibe o PIB da carta 1
    
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); // Exibe o número de pontos turísticos da carta 1
    
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional1);
    
    printf("PIB per capita: R$ %.2f\n", PibPerCapita1);
    
    
    
    // Exibição dos Dados - Carta 2
    
    printf("=== Carta 2 ===\n"); // Início da exibição dos dados da carta 2
    
    printf("Estado: %s\n", estado2); // Exibe o nome do estado da carta 2
    
    printf("Código: %s\n", codigo2); // Exibe o código de identificação da carta 2
    
    printf("Nome da Cidade: %s\n", nomeCidade2); // Exibe o nome da cidade representativa da carta 2
    
    printf("População: %d\n", populacao2); // Exibe a população da cidade da carta 2
    
    printf("Área: %f km²\n", area2); // Exibe a área da cidade da carta 2
    
    printf("PIB: R$ %f.2\n", pib2); // Exibe o PIB da carta 2
    
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2); // Exibe o número de pontos turísticos da carta 2

    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    
    printf("PIB per capita: R$ %.2f\n", PibPerCapita2);

    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
