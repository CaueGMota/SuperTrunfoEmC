#include <stdio.h> 

int main(){
    char estado;
    char codigo [4];
    char cidade [30];
    int população;
    float area;
    float pib;
    int numero;

    char estado2;
    char codigo2 [4];
    char cidade2 [30];
    int população2;
    float area2;
    float pib2;
    int numero2;

printf("Carta 1- Digite uma letra de 'A' a 'H' (representando um dos oito estados)");
scanf("%c", &estado);

printf("Carta 1- Digite o Código da Carta: (A letra do estado seguida de um número de 01 a 04)");
scanf("%s", &codigo);

printf("Carta 1- Digite o Nome da Cidade:");
scanf("%s", &cidade);

printf("Carta 1- Digite o número de habitantes da cidade:");
scanf("%d", &população);

printf("Carta 1- Digite a área da cidade em quilômetros quadrados:");
scanf("%f", &area);

printf("Carta 1- Digite o Produto Interno Bruto da cidade:");
scanf("%f", &pib);

printf("Carta 1- Digite a quantidade de pontos turísticos na cidade:");
scanf("%d", &numero);

printf("Carta 2- Digite uma letra de 'A' a 'H' (representando um dos oito estados)");
scanf("%c", &estado2);

printf("Carta 2- Digite o Código da Carta: (A letra do estado seguida de um número de 01 a 04)");
scanf("%s", &codigo2);

printf("Carta 2- Digite o Nome da Cidade:");
scanf("%s", &cidade2);

printf("Carta 2- Digite o número de habitantes da cidade:");
scanf("%d", &população2);

printf("Carta 2- Digite a área da cidade em quilômetros quadrados:");
scanf("%f", &area2);

printf("Carta 2- Digite o Produto Interno Bruto da cidade:");
scanf("%f", &pib2);

printf("Carta 2- Digite a quantidade de pontos turísticos na cidade:");
scanf("%d", &numero2);


printf("Carta 1:\n");
printf("Estado:%c \n", estado);
printf("Código da Carta: %s\n", codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("População: %d Habitantes\n", população);
printf("Área: %2f Km²\n", area);
printf("PIB: %2f  bilhões de reais\n", pib);
printf("Número de Pontos Turísticos: %d\n", numero);

printf("--------------------\n ");

printf("Carta 2:\n");
printf("Estado:%c \n", estado2);
printf("Código da Carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d Habitantes\n", população2);
printf("Área: %2f Km²\n", area2);
printf("PIB: %2f  bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", numero2);

}