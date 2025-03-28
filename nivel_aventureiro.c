#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main () {

printf("Nivel aventureiro\n");
printf("Commit\n");

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
printf("Escolha a carta:\n");
printf("CARTA 1: %s\n", estado1);
printf("CARTA 2: %s\n", estado2);
printf(".1 população\n");
printf(".2 área\n");
printf(".3 PIB\n");
printf(".4 densidade\n");
printf(".5 Túrismo\n");
printf("Escolha a opção:");
scanf("%d", &jogador1);

jogador2 = rand() % 5 + 1;

switch (jogador1){

case 1:
 printf("Jogador: população -");
 break;

case 2:
 printf("Jogador: área -");
 break;

case 3:
printf("Jogador: pib -");
break;

case 4:
printf("Jogador: densidade -");
break;

case 5:
printf("Jogador: túrismo -");
break;

default:
 printf("opção invalida\n");
break;
}
switch (jogador2){

case 1:
 printf("Jogador: população \n");
break;
    
case 2:
 printf("Jogador: área\n");
break;
    
case 3:
 printf("Jogador: pib\n");
break;
    
case 4:
 printf("Jogador: densidade\n");
break;

case 5:
 printf("Jogador: túrismo\n");
break;

default:
 printf("opção invalida\n");
break;
}

if (jogador1 == jogador2)
{
 printf("### Empate! ###\n");
} else if (
           (jogador1 == 1 && populacao1 > populacao2) || 
           (jogador1 == 2 && area1 > area2) || 
           (jogador1 == 3 && PIB1 > PIB2) || 
           (jogador1 == 4 && densidade1 < densidade2) ||
           (jogador1 == 5 && turismo1 > turismo2) || 
           (jogador2 == 1 && populacao2 > populacao1) || 
           (jogador2 == 2 && area2 > area1) || 
           (jogador2 == 3 && PIB2 > PIB1) || 
           (jogador2 == 4 && densidade2 < densidade1) ||
           (jogador2 == 5 && turismo2 > turismo1))
{    
    printf("### Parabéns a carta 1 venceu! ###\n");
} else {
    printf("### Parabéns a carta 2 venceu! ###\n");
}

return 0;

}