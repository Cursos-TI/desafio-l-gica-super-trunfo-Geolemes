#include <stdio.h>
#include <string.h>

int main() {

    //===CARTA 01===
    char estado01;
    char codigo01[4];
    char nomedacidade01[50];
    unsigned long int populacao01;
    float area01;
    float pib01;
    int pontosturisticos01;
    float pibpercapita01;
    float densidadepopulacional01;

    //===CARTA 02===
    char estado02;
    char codigo02[4];
    char nomedacidade02[50];
    unsigned long int populacao02;
    float area02;
    float pib02;
    int pontosturisticos02;
    float pibpercapita02;
    float densidadepopulacional02;

    // ===INSERÇÃO DE DADOS DA CARTA 01===
    printf ("=== CADASTRO DA CARTA 01 ===\n");

    printf("Uma letra de 'A' a 'H': ");
    scanf(" %c", &estado01);

    printf("Código (ex: B02): ");
    scanf("%3s", codigo01);

    while (getchar() != '\n');

    printf("Nome da Cidade: ");
    fgets(nomedacidade01, 50, stdin);
    nomedacidade01[strcspn(nomedacidade01, "\n")] = 0;

    printf("População: ");
    scanf("%lu", &populacao01);

    printf("Área (em km²): ");
    scanf("%f", &area01);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib01);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos01);

    // ===INSERÇÃO DE DADOS DA CARTA 02===
    printf ("\n=== CADASTRO DA CARTA 02 ===\n");

    printf("Uma letra de 'A' a 'H': ");
    scanf(" %c", &estado02);

    printf("Código (ex: B02): ");
    scanf("%3s", codigo02);

    while (getchar() != '\n');

    printf("Nome da Cidade: ");
    fgets(nomedacidade02, 50, stdin);
    nomedacidade02[strcspn(nomedacidade02, "\n")] = 0;

    printf("População: ");
    scanf("%lu", &populacao02);

    printf("Área (em km²): ");
    scanf("%f", &area02);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib02);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos02);

    // ===CÁLCULOS===
    densidadepopulacional01 = populacao01 / area01;
    densidadepopulacional02 = populacao02 / area02;

    pibpercapita01 = (pib01 * 1000000000.0) / populacao01;
    pibpercapita02 = (pib02 * 1000000000.0) / populacao02;

    // ==============================
    // === MENU INTERATIVO NOVO ====
    // ==============================

    int atributoEscolhido;

    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha um atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("5 - PIB per capita\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &atributoEscolhido);

    printf("\n\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Carta 1: %s\n", nomedacidade01);
    printf("Carta 2: %s\n\n", nomedacidade02);

    switch(atributoEscolhido) {

        case 1: // POPULAÇÃO
            printf("Atributo escolhido: POPULAÇÃO\n");
            printf("Carta 1: %lu habitantes\n", populacao01);
            printf("Carta 2: %lu habitantes\n", populacao02);

            if (populacao01 > populacao02)
                printf("Resultado: Carta 1 venceu!\n");
            else if (populacao02 > populacao01)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // ÁREA
            printf("Atributo escolhido: ÁREA\n");
            printf("Carta 1: %.2f km²\n", area01);
            printf("Carta 2: %.2f km²\n", area02);

            if (area01 > area02)
                printf("Resultado: Carta 1 venceu!\n");
            else if (area02 > area01)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("Carta 1: %.2f bilhões\n", pib01);
            printf("Carta 2: %.2f bilhões\n", pib02);

            if (pib01 > pib02)
                printf("Resultado: Carta 1 venceu!\n");
            else if (pib02 > pib01)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // DENSIDADE POPULACIONAL
            printf("Atributo escolhido: DENSIDADE POPULACIONAL\n");
            printf("Carta 1: %.2f hab/km²\n", densidadepopulacional01);
            printf("Carta 2: %.2f hab/km²\n", densidadepopulacional02);

            if (densidadepopulacional01 < densidadepopulacional02)
                printf("Resultado: Carta 1 venceu! (menor densidade)\n");
            else if (densidadepopulacional02 < densidadepopulacional01)
                printf("Resultado: Carta 2 venceu! (menor densidade)\n");
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // PIB PER CAPITA
            printf("Atributo escolhido: PIB PER CAPITA\n");
            printf("Carta 1: R$ %.2f\n", pibpercapita01);
            printf("Carta 2: R$ %.2f\n", pibpercapita02);

            if (pibpercapita01 > pibpercapita02)
                printf("Resultado: Carta 1 venceu!\n");
            else if (pibpercapita02 > pibpercapita01)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}