#include <stdio.h> 

int main(){
    char estado;
    char codigo[4];
    char cidade[30];
    int população;
    float area;
    float pib;
    int numero;

printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados)");
scanf("%c", &estado);

printf("Digite o Código da Carta: (A letra do estado seguida de um número de 01 a 04)");
scanf("%s", &codigo);

printf("Digite o Nome da Cidade:");
scanf("%s", &cidade);

printf("Digite o número de habitantes da cidade:");
scanf("%d", &população);

printf("Digite a área da cidade em quilômetros quadrados:");
scanf("%f", &area);

printf("Digite o Produto Interno Bruto da cidade");
scanf("%f", &pib);

printf("Digite a quantidade de pontos turísticos na cidade:");
scanf("%d", &numero);


printf("Carta 1:\n");
printf("Estado:%c \n", estado);
printf("Código da Carta: %s\n", codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("População: %d Habitantes\n", população);
printf("Área: %2f Km²\n", area);
printf("PIB: %2f  bilhões de reais\n", pib);
printf("Número de Pontos Turísticos: %d\n", numero);



}