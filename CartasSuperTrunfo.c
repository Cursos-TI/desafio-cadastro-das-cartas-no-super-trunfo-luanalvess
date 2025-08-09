#include <stdio.h>
int main() {
char estado[20];
char estado2[20];
char codigo[20];
char codigo2[20];
char cidade[20];
char cidade2[20];
int população;
int população2;
float area;
float area2;
float pib;
float pib2;
int turistico;
int turistico2;

// perguntas da primeira carta:
printf("primeira carta\n");

printf("qual é o estado:\n");
scanf("%s", &estado);

printf("qual é o codigo\n");
scanf("%s", &codigo);

printf("qual é o nome da cidade\n");
scanf("%s", &cidade);

printf("tamanho de população:\n");
scanf("%d", &população);

printf("tamanho da area:\n");
scanf("%f", &area);

printf("pib:\n");
scanf("%f", &pib);

printf("numero de ponto turísticos:\n");
scanf("%d", &turistico);

printf(" \n");

// perguntas da segunda carta:

printf("segunda carta\n");

printf("qual é o estado:\n");
scanf("%s", &estado2);

printf("qual é o codigo\n");
scanf("%s", &codigo2);

printf("qual é o nome da cidade\n");
scanf("%s", &cidade2);

printf("tamanho de população:\n");
scanf("%d", &população2);

printf("tamanho da area:\n");
scanf("%f", &area2);

printf("pib:\n");
scanf("%f", &pib2);

printf("numero de ponto turísticos:\n");
scanf("%d", &turistico2);
printf(" \n");
printf(" \n");
// imprimir a primeira carta
printf("primeira carta\n");
printf(" \n");
printf("o estado é:%s\n", estado);
printf("o codigo é:%s\n", codigo);
printf("cidade:%s\n", cidade);
printf("quantidade de população:%d\n", população);
printf("tamanho da aréa:%f\n", area);
printf("pib;%f\n", pib);
printf("numero de potnos turisticos:%d\n", turistico);
printf(" \n");
printf(" \n");

// imprimir a segunda carta
printf("segunda carta\n");
printf(" \n");
printf("o estado é:%s\n", estado2);
printf("o codigo é:%s\n", codigo2);
printf("cidade:%s\n", cidade2);
printf("quantidade de população:%d\n", população2);
printf("tamanho da aréa:%f\n", area2);
printf("pib;%f\n", pib2);
printf("numero de potnos turisticos:%d", turistico2);
    
    // aluno: Luan da silva alves
    return 0;
}
