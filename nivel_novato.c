#include <stdio.h>
#include <string.h>

int main() {

printf("nivel novato\n");
printf("commit\n");

float populacao;
int turismo;

float populacao2;
int turismo2;  

float populacao_;
int turismo_;

float area_;
float PIB_;
float densidadepopulacional_;
float PIBpercapita_;

float area;
float PIB;
unsigned long int densidade;
unsigned long int PPC; 

float area2;
float PIB2;
unsigned long int densidade2;
unsigned long int PPC2;

char estado[20];
char codigo [20];
char nomedacidade [20];

char estado2[20];
char codigo2 [20];
char nomedacidade2 [20];

char estado_[20];
char codigo_ [20];
char nomedacidade_ [20];

    strcpy(estado, "Minas Gerais");
    strcpy(codigo, "MG");
    strcpy(nomedacidade, "Belo Horizonte");
    populacao = 2.315560;
    area = 331.4;
    PIB = 140.1;
    turismo = 12;

    strcpy(estado2, "São Paulo");
    strcpy(codigo2, "SP");
    strcpy(nomedacidade2, "São Paulo");
    populacao2 = 11.895578;
    area2 = 1.521;
    PIB2 = 699.6;
    turismo2 = 15;
 
   densidade = populacao / area;
   PPC = PIB / populacao; 
    
   densidade2 = populacao2 / area2;
   PPC2 = PIB2 / populacao2;

   unsigned long int densidade_ = populacao_ / area_;
   unsigned long int PPC_ = PIB_ / populacao_;

   float SuperPoder_ = populacao_ + area_ + PIB_ + turismo_ + densidade_ + PPC_;
   float SuperPoder = populacao + area + PIB + turismo + densidade + PPC;
   float SuperPoder2 = populacao2 + area2 + PIB2 + turismo2 + densidade2 + PPC2;

   float resultadodensidade, resultadoPPC;
    
    printf("*** CARTA 01 *** \n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %f\n", populacao);
    printf("Área: %.1f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turisticos: %d\n", turismo);
    printf("Densidade populacional: %ld\n", densidade);
    printf("PIB per capita: %ld\n", PPC);
    printf("Super Poder: %.2f\n", SuperPoder);
    

    printf("_____________________________________\n");

    printf("*** CARTA 02 *** \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.f\n", PIB2);
    printf("Número de pontos turisticos: %d\n", turismo2);
    printf("Densidade populacional: %ld\n", densidade2);
    printf("PIB per capita: %ld\n", PPC2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    printf("--------------------------------------\n");

    if(estado > estado2) {
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }

    if(codigo > codigo2) {
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }

    if(nomedacidade > nomedacidade2) {
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }

    if(populacao > populacao2) {
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }

    if(area > area2) {
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }

    if(PIB > PIB2) {
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }

    if(turismo > turismo2) {
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }

    if(densidade < densidade2) {
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }
 
    if(PPC < PPC2) {
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }

    if(SuperPoder > SuperPoder2) {
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu!\n");
    }
    
    printf("--------------------------------------\n");

    printf("*** DIGITE AS INFORMAÇÕES DE SUA CARTA *** \n");

    printf("Digite o estado: ");
    scanf ("%s", estado_); 
    printf ( "o estado e,%s\n", estado_);


    printf("Digite o codigo: ");
    scanf ("%s", codigo); 
    printf ( "o codigo e,%s\n", codigo_);

    printf("Digite o nome da cidade: ");
    scanf ("%s", nomedacidade_); 
    printf ( "o nome da cidade e,%s\n", nomedacidade_);

    printf("Digite a população: ");
    scanf ("%f", &populacao_);
    printf( "a população e,%f\n", populacao_);

    printf("Digite a área: ");
    scanf ("%f", &area_);
    printf( "a área e,%.1f\n", area_);

    printf("Digite o PIB: ");
    scanf ("%f", &PIB_);
    printf( "o PIB e,%.2f\n", PIB_);

    printf("Digite o número de pontos turisticos: ");
    scanf ("%d", &turismo_);
    printf( "o número de pontos turisticos e,%d\n", turismo_);

    resultadodensidade = populacao_ / area_;
    resultadoPPC = PIB_ / populacao_;

   
   printf("CARTA DO JOGADOR\n");
   printf("Estado: %s\n", estado_);
   printf("Codigo: %s\n", codigo_);
   printf("Nome da cidade: %s\n", nomedacidade_);
   printf("População: %f\n", populacao_);
   printf("Área: %.1f\n", area_);
   printf("PIB: %.2f\n", PIB_);
   printf("Número de pontos turisticos: %d\n", turismo_);
   printf("Densidade populacional: %f\n", resultadodensidade);
   printf("PIB per capita: %f\n", resultadoPPC);
   printf("Super Poder: %.2f\n", SuperPoder_);

    return 0;

}