#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    int Pop, PontosTuristicos;
    float Pib, Area;
    char codigo [20];
    int pop2, PontosTuristicos2;
    float pib2, area2;
    char codigo2 [20];
    //obtendo valores da carta 1
        printf ("Super Trunfo Países \n");
        printf ("Iniciando jogo.......\n");
        
        printf ("Digite o código da Carta:\n");
        scanf ("%s", codigo);

        printf ("Digite o valor correspondente á população:\n");
        scanf ("%d", &Pop);

        printf ("Pontos Turísticos:\n");
        scanf ("%d", &PontosTuristicos);

        printf ("Digite a Área: \n");
        scanf ("%f", &Area);

        printf ("Digite o Valor do PIB:\n");
        scanf ("%f", &Pib);

    //Obtendo valores da carta 2
        printf ("                   Dados para a segunda carta.\n                         ");
        printf ("Digite o código da Carta:\n");
        scanf ("%s", codigo2);

        printf ("Digite o valor correspondente á população:\n");
        scanf ("%d", &pop2);

        printf ("Pontos Turísticos:\n");
        scanf ("%d", &PontosTuristicos2);

        printf ("Digite a Área: \n");
        scanf ("%f", &area2);

        printf ("Digite o Valor do PIB:\n");
        scanf ("%f", &pib2);    
//calculando o pib das cartas
        float DensidadePopulacional= (float)Pop/Area;
        float PibPerCapita=(float) Pib/ Pop;
        float PoderEspecial= (float) Pop + PontosTuristicos + Pib + Area ;

        float DensidadePopulacional2= (float)pop2/area2;
        float PibPerCapita2=(float) pib2/ pop2;
        float PoderEspecial2= (float) pop2 + PontosTuristicos2  + pib2 + area2 ;

//exibendo valores da carta 1
            printf ("Carta: %s \n", codigo);
            printf ("População: %d \n", Pop);
            printf ("Área: %f \n", Area );
            printf ("Densidade Populacional %.3f\n", DensidadePopulacional);
            printf ("PIB (Produto Interno Bruto): %f \n", Pib);
            printf ("PIB Per Capita: %3.f \n",PibPerCapita);
            printf ("Especial: %3.f \n", PoderEspecial);

//exibindo valores da carta 2
            printf ("Carta: %s \n", codigo2);
            printf ("População: %d \n", pop2);
            printf ("Área: %f \n", area2 );
            printf ("Densidade Populacional %.3f\n", DensidadePopulacional2);
            printf ("PIB (Produto Interno Bruto): %f \n", pib2);
            printf ("PIB Per Capita: %3.f \n",PibPerCapita2);
            printf ("Especial : %3.f \n", PoderEspecial2);

// Comparação para determinar a vencedora 
        

    return 0;
}
