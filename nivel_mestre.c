#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main () {

printf("Nivel mestre\n");
printf("commit\n");
int turismo1;
int turismo2;

int jogador1;
int jogador2;

float PIB1;
float PIB2;

float area1;
float area2;

float populacao1;
float populacao2;

float densidade1;
float densidade2;

char estado1[20];
char estado2[20];

srand (time (0));

strcpy (estado1, "Belo Horizonte");
strcpy (estado2, "São Paulo");

populacao1 = 2.315560;
populacao2 = 11.895578;

area1 = 331.401;
area2 = 1.521;

PIB1 = 140.;
PIB2 = 699.6;

densidade1 = 0.006987;
densidade2 = 7.820893;

turismo1 = 12;
turismo2 = 15;

printf("*** JOGO SUPER TRUNFO ***\n");
printf("Escolha o primeiro atributo:\n");
printf("CARTA 1: %s\n", estado1);
printf("CARTA 2: %s\n", estado2);
printf(".1 população\n");
printf(".2 área\n");
printf(".3 PIB\n");
printf(".4 densidade\n");
printf(".5 Túrismo\n");

printf("Escolha a primeira opção para comparar: ");
scanf("%d", &jogador1);

jogador2 = rand() % 5 + 1;

switch (jogador1){

case 1:
 printf("Jogador: população -");
 jogador1 = populacao1 > populacao2 ? 1 : 0;
 break;

case 2:
 printf("Jogador: área -");
 jogador1 = area1 > area2 ? 1 : 0;
 break;

case 3:
printf("Jogador: pib -");
jogador1 = PIB1 > PIB2 ? 1 : 0;
break;

case 4:
printf("Jogador: densidade -");
jogador1 = densidade1 < densidade2 ? 1 : 0;
break;

case 5:
printf("Jogador: túrismo -");
jogador1 = turismo1 > turismo2 ? 1 : 0;
break;

default:
 printf("opção invalida\n");
break;
}

printf("Escolha o segundo atributo:\n");
printf("CARTA 1: %s\n", estado1);
printf("CARTA 2: %s\n", estado2);
printf(".1 população\n");
printf(".2 área\n");
printf(".3 PIB\n");
printf(".4 densidade\n");
printf(".5 Túrismo\n");

printf("Escolha a segunda opção para comparar: ");
scanf("%d", &jogador1);
if (jogador1 == jogador2){
 printf("Voce escolheu a mesma opção!\n");
} else {

switch (jogador1){

    case 1:
     printf("Jogador: população -");
     jogador1 = populacao1 > populacao2 ? 1 : 0;
     break;
    
    case 2:
     printf("Jogador: área -");
     jogador1 = area1 > area2 ? 1 : 0;
     break;
    
    case 3:
    printf("Jogador: pib -");
    jogador1 = PIB1 > PIB2 ? 1 : 0;
    break;
    
    case 4:
    printf("Jogador: densidade -");
    jogador1 = densidade1 < densidade2 ? 1 : 0;
    break;
    
    case 5:
    printf("Jogador: túrismo -");
    jogador1 = turismo1 > turismo2 ? 1 : 0;
    break;
    
    default:
     printf("opção invalida\n");
    break;
    }
    
 if (jogador1 && jogador2)
 {
 printf("### PARABÉNS VC GANHOU!\n");
 } else if (jogador1 != jogador2){
 printf("### EMPATOU! ###\n");
 } else {
 printf("### INFELIZMENTO VOCE PERDEU ###");
 }
}
return 0;
}