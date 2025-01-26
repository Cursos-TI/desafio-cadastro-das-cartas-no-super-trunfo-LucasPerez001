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
    int Pop;
    float Pib, Area;
    char codigo [20];
        printf ("Super Trunfo Países \n");
        printf ("Iniciando jogo.......\n");
        
        printf ("Digite o código da Carta:\n");
        scanf ("%s", &codigo);

        printf ("Digite o valor correspondente á população:\n");
        scanf ("%d", &Pop);

        printf ("Digite a Área: \n");
        scanf ("%f", &Area);

        printf ("Digite o Valor do PIB:\n");
        scanf ("%f", &Pib);

        printf ("Carta: %s \n", codigo);
        printf ("População: %d \n", Pop);
        printf ("Área: %f \n", Area );
        printf ("PIB (Produto Interno Bruto): %f \n", Pib);



    return 0;
}
