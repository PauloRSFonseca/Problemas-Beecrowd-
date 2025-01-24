//Distância Entre Dois Pontos
//Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais, segundo a fórmula:

//Distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))

//Entrada
//O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

//Saída
//Calcule e imprima o valor da distância segundo a fórmula fornecida, considerando 4 casas decimais.

#include <stdio.h>
#include <math.h>

int main(){

float x1, y1;
float x2, y2;
float distancia;

scanf("%f %f", &x1, &y1);
scanf("%f %f", &x2, &y2);

distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
printf("%.4f\n", distancia);

    return 0;
}
