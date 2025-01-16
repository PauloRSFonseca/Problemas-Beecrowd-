//Gasto de Combustível
#include <stdio.h>
 
int main() {
 
 int hora, velocidade_media;
 float distancia;
 float combustivel;

 scanf("%d %d", &hora, &velocidade_media);
 distancia = velocidade_media * hora;
 combustivel = distancia / 12;
 printf("%.3f\n", combustivel);

    return 0;
}