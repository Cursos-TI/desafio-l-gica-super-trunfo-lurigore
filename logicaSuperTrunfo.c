#include <stdio.h>
#include <string.h>

char nomeEstado1[50];
char codigo1[5];
unsigned long int populacao1;
float area1;
float PIB1;
int pontosTurísticos1;

float superPoder1;
float densidade1;
float PPC1;


char nomeEstado2[50];
char codigo2[5];
unsigned long int populacao2;
float area2;
float PIB2;
int pontosTurísticos2;

float superPoder2;
float densidade2;
float PPC2;

void CadastrarCarta()
{
    
    getchar();
    printf("|---| Cadastro 1° Carta |---|\n");

    printf("Insira o nome do Estado: ----/\n");
    fgets(nomeEstado1, 50, stdin);
    nomeEstado1[strcspn(nomeEstado1, "\n")] = 0;
    printf("Insira o Código da Cidade, composto pela letra do estado e um numero de 01 a 04 (ex: A01, B03) ----/\n");
    scanf("%s", codigo1);
    printf("Insira o número de habitantes da cidade ----/\n");
    scanf("%lu", &populacao1);
    printf("Insira a área da cidade em Km² ----/\n");
    scanf("%f", &area1);
    printf("Insira o Produto Interno Bruto da cidade ----/\n");
    scanf("%f", &PIB1);
    printf("Insira a quantidade de pontos turísticos ----/\n");
    scanf("%d", &pontosTurísticos1);

    densidade1 = populacao1 / area1;
    PPC1 = PIB1 / populacao1;
    superPoder1 = populacao1 + area1 + PIB1 + pontosTurísticos1 + PPC1 + (1 / densidade1);

    printf("|---| Cadastro 2° Carta |---|\n");

    getchar();
    printf("Insira o nome do Estado: ----/\n");
    fgets(nomeEstado2, 50, stdin);
    nomeEstado2[strcspn(nomeEstado2, "\n")] = 0;
    printf("Insira o Código da Cidade, composto pela letra do estado e um numero de 01 a 04 (ex: A01, B03) ----/\n");
    scanf("%s", codigo2);
    printf("Insira o número de habitantes da cidade ----/\n");
    scanf("%lu", &populacao2);
    printf("Insira a área da cidade em Km² ----/\n");
    scanf("%f", &area2);
    printf("Insira o Produto Interno Bruto da cidade ----/\n");
    scanf("%f", &PIB2);
    printf("Insira a quantidade de pontos turísticos ----/\n");
    scanf("%d", &pontosTurísticos2);

    densidade2 = populacao2 / area2;
    PPC2 = PIB2 / populacao2;
    superPoder2 = populacao2 + area2 + PIB2 + pontosTurísticos2 + PPC2 + (1 / densidade2);

}

void ExibirCartas()
{
    printf("\n1° Carta ----/\n");

    printf("Estado: %s\n", nomeEstado1);
    printf("Código Cidade: %s\n", codigo1);
    printf("Habitantes: %lu\n", populacao1);
    printf("Área: %.1f Km²\n", area1);
    printf("Produto Interno Bruto: R$%.2f\n", PIB1);
    printf("Quantidade Pontos Turísticos: %d\n", pontosTurísticos1);
    printf("Densidade Populacional: %.2f Pessoas por Km²\n", densidade1);
    printf("PIB Per Capita: R$%.2f\n", PPC1);
    printf("Super Poder: %.2f\n", superPoder1);
    

    printf("\n2° Carta ----/\n");

    printf("Estado: %s\n", nomeEstado2);
    printf("Código Cidade: %s\n", codigo2);
    printf("Habitantes: %lu\n", populacao2);
    printf("Área: %.1f Km²\n", area2);
    printf("Produto Interno Bruto: R$%.2f\n", PIB2);
    printf("Quantidade Pontos Turísticos: %d\n", pontosTurísticos2);
    printf("Densidade Populacional: %.2f Pessoas por Km²\n", densidade2);
    printf("PIB Per Capita: R$%.2f\n", PPC2);
    printf("Super Poder: %.2f\n", superPoder2);
}

void CompararCartas()
{
    int resultado1;
    int resultado2;

    int opcao;
    int opcao2;
    printf("\n\nEscolha o primeiro atributo a comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Voltar\n");
    scanf("%d", &opcao);

    if(opcao != 6)
    {
        printf("\n\nEscolha o segundo atributo a comparar:\n");
        if(opcao != 1)
        {
            printf("1 - População\n");
        }if(opcao != 2){
            printf("2 - Área\n");
        }
        if(opcao != 3){
            printf("3 - PIB\n");
        }
        if(opcao != 4){
            printf("4 - Pontos Turísticos\n");
        }
        if(opcao != 5){
            printf("5 - Densidade Demográfica\n");
        }
        scanf("%d", &opcao2);
        while(opcao == opcao2)
        {
            if(opcao == opcao2)
            {
                printf("Escolha outra opção...\n");
            }else{
                break;
            }
            scanf("%d", &opcao2);
        }
    }

    switch (opcao)
    {
        case 1:
        {
            printf("\nComparação de cartas (Atributo: População): \n");
            printf("Carta 1 - %s: %lu\n", nomeEstado1, populacao1);
            printf("Carta 2 - %s: %lu\n", nomeEstado2, populacao2);
            if(populacao1 > populacao2)
            {
                resultado1 = 1;
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeEstado1);
            } else if(populacao1 == populacao2){
                resultado1 = 0;
                printf("Empate!!\n");
            }else{
                resultado1 = 2;
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeEstado2);
            }
            break;
        }
        case 2:
        {
            printf("\nComparação de cartas (Atributo: Área): \n");
            printf("Carta 1 - %s: %.2f\n", nomeEstado1, area1);
            printf("Carta 2 - %s: %.2f\n", nomeEstado2, area2);
            if(area1 > area2)
            {
                resultado1 = 1;
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeEstado1);
            } else if(area1 == area2){
                resultado1 = 0;
                printf("Empate!!\n");
            }else{
                resultado1 = 2;
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeEstado2);
            }
            break;
        }
        case 3:
        {
            printf("\nComparação de cartas (Atributo: PIB): \n");
            printf("Carta 1 - %s: %.2f\n", nomeEstado1, PIB1);
            printf("Carta 2 - %s: %.2f\n", nomeEstado2, PIB2);
            if(PIB1 > PIB2)
            {
                resultado1 = 1;
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeEstado1);
            } else if(PIB1 == PIB2){
                resultado1 = 0;
                printf("Empate!!\n");
            }else{
                resultado1 = 2;
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeEstado2);
            }
            break;
        }
        case 4:
        {
            printf("\nComparação de cartas (Atributo: Pontos Turísticos): \n");
            printf("Carta 1 - %s: %d\n", nomeEstado1, pontosTurísticos1);
            printf("Carta 2 - %s: %d\n", nomeEstado2, pontosTurísticos2);
            if(pontosTurísticos1 > pontosTurísticos2)
            {
                resultado1 = 1;
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeEstado1);
            } else if(pontosTurísticos1 == pontosTurísticos2){
                resultado1 = 0;
                printf("Empate!!\n");
            }else{
                resultado1 = 2;
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeEstado2);
            }
            break;
        }
        case 5:
        {
            printf("\nComparação de cartas (Atributo: Densidade Populacional): \n");
            printf("Carta 1 - %s: %.2f\n", nomeEstado1, densidade1);
            printf("Carta 2 - %s: %.2f\n", nomeEstado2, densidade2);
            if(densidade1 < densidade2)
            {
                resultado1 = 1;
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeEstado1);
            } else if(densidade1 == densidade2){
                resultado1 = 0;
                printf("Empate!!\n");
            }else{
                resultado1 = 2;
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeEstado2);
            }
            break;
        }
        case 6:
        {
            break;
        }
        default:
        {
            printf("Opção Inválida.\n");
            break;
        }
    }
    
    switch (opcao2)
    {
        case 1:
        {
            printf("\nComparação de cartas (Atributo: População): \n");
            printf("Carta 1 - %s: %lu\n", nomeEstado1, populacao1);
            printf("Carta 2 - %s: %lu\n", nomeEstado2, populacao2);
            if(populacao1 > populacao2)
            {
                resultado2 = 1;
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeEstado1);
            } else if(populacao1 == populacao2){
                resultado2 = 0;
                printf("Empate!!\n");
            }else{
                resultado2 = 2;
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeEstado2);
            }
            break;
        }
        case 2:
        {
            printf("\nComparação de cartas (Atributo: Área): \n");
            printf("Carta 1 - %s: %.2f\n", nomeEstado1, area1);
            printf("Carta 2 - %s: %.2f\n", nomeEstado2, area2);
            if(area1 > area2)
            {
                resultado2 = 1;
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeEstado1);
            } else if(area1 == area2){
                resultado2 = 0;
                printf("Empate!!\n");
            }else{
                resultado2 = 2;
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeEstado2);
            }
            break;
        }
        case 3:
        {
            printf("\nComparação de cartas (Atributo: PIB): \n");
            printf("Carta 1 - %s: %.2f\n", nomeEstado1, PIB1);
            printf("Carta 2 - %s: %.2f\n", nomeEstado2, PIB2);
            if(PIB1 > PIB2)
            {
                resultado2 = 1;
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeEstado1);
            } else if(PIB1 == PIB2){
                resultado2 = 0;
                printf("Empate!!\n");
            }else{
                resultado2 = 2;
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeEstado2);
            }
            break;
        }
        case 4:
        {
            printf("\nComparação de cartas (Atributo: Pontos Turísticos): \n");
            printf("Carta 1 - %s: %d\n", nomeEstado1, pontosTurísticos1);
            printf("Carta 2 - %s: %d\n", nomeEstado2, pontosTurísticos2);
            if(pontosTurísticos1 > pontosTurísticos2)
            {
                resultado2 = 1;
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeEstado1);
            } else if(pontosTurísticos1 == pontosTurísticos2){
                resultado2 = 0;
                printf("Empate!!\n");
            }else{
                resultado2 = 2;
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeEstado2);
            }
            break;
        }
        case 5:
        {
            printf("\nComparação de cartas (Atributo: Densidade Populacional): \n");
            printf("Carta 1 - %s: %.2f\n", nomeEstado1, densidade1);
            printf("Carta 2 - %s: %.2f\n", nomeEstado2, densidade2);
            if(densidade1 < densidade2)
            {
                resultado2 = 1;
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeEstado1);
            } else if(densidade1 == densidade2){
                resultado2 = 0;
                printf("Empate!!\n");
            }else{
                resultado2 = 2;
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeEstado2);
            }
            break;
        }
        default:
        {
            printf("Opção Inválida.\n");
            break;
        }
    }

    if(resultado1 == 1 && resultado2 == 1)
    {
        printf("--//-- O VENCEDOR DA RODADA FOI A CARTA 1 (%s) --\\--\n", nomeEstado1);
    } else if(resultado1 == 2 && resultado2 == 2)
    {
        printf("--//-- O VENCEDOR DA RODADA FOI A CARTA 2 (%s) --\\--\n", nomeEstado2);
    } else
    {
        printf(" RODADA DE EMPATE!\n");
    }
}

int main() {
    while (1)
    {
        //menu interativo
        int opcao;
        printf("\n\nEscolha uma das opções:\n");
        printf("1 - Cadastrar Duas Cartas\n");
        printf("2 - Exibir Cartas Cadastradas\n");
        printf("3 - Comparar Cartas\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
            {
                CadastrarCarta();
                break;
            }
            case 2:
            {
                if(populacao1)
                {
                    ExibirCartas();
                }else{
                    printf("É necessário cadastrar as cartas primeiro...\n");
                    CadastrarCarta();
                }
                break;
            }
            case 3:
            {
                if(populacao1)
                {
                    CompararCartas();
                }else{
                    printf("É necessário cadastrar as cartas primeiro...\n");
                    CadastrarCarta();
                }
                break;
            }
            case 4:
            {
                printf("Saindo...");
                return 0;
            }
            default:
            {
                printf("Opção Inválida...");
                break;
            }
        }
    }
}