#include <stdio.h>

/*Objetivo: Cadastrar cartas para o jogo Trunfo tema Paises;
1º passo: cadatro de duas cartas,
2º passo: visualização dos dados das duas cartas,
*/

int main(){
   //variaveis para cadastro da 1ª carta: 
    int populacao1, pontosturisticos1;
    float area1, PIB1;
    char estado1;
    char codigo1[20];
    char cidade1[20];

    //variaveis para cadastro da 2ª carta: 
    int populacao2, pontosturisticos2;
    float area2, PIB2;
    char estado2;
    char codigo2[20];
    char cidade2[20];
    //Exibe o tema do jogo.
    printf("*** Jogo Trunfo Países ***\n");

    //Comandos de entrada e saida para o cadastro da primeira carta.
    printf("\n*Carta 1*\n");

    printf("Digite a inicial do Estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população (nº de habitantes): ");
    scanf("%d", &populacao1);

    printf("Digite a área em Km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o total de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    //Comandos de entrada e saida para o cadastro da segunda carta.
    printf("\n*Carta 2*\n");
 
    printf("Digite a inicial do Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (A02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população (nº de habitantes): ");
    scanf("%d", &populacao2);

    printf("Digite a área em Km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o total de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    //Comandos para exibir os dados cadastrados da primeira carta.
    printf("\n*Carta 1*\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    //Comandos para exibir os dados cadastrados da primeira carta.
    printf("\n*Carta 2*\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    

        return 0;


}
