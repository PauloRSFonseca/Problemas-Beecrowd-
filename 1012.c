//Área
//Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
//a) a área do triângulo retângulo que tem A por base e C por altura.
//b) a área do círculo de raio C. (pi = 3.14159)
//c) a área do trapézio que tem A e B por bases e C por altura.
//d) a área do quadrado que tem lado B.
//e) a área do retângulo que tem lados A e B.

//Entrada
//O arquivo de entrada contém três valores com um dígito após o ponto decimal.

//Saída
//O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. 
//O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.

#include <stdio.h>
 
int main() {
    float A, B, C;
    float AREA_TRIA, AREA_CIRC, AREA_TRAP, AREA_QUAD, AREA_RETA;

     scanf("%f",&A);
     scanf("%f",&B);
     scanf("%f",&C);

     AREA_TRIA=(A*C)/2;
     printf("TRIANGULO: %.3f\n",AREA_TRIA);
     
     AREA_CIRC=(C*C)*3.14159;
     printf("CIRCULO: %.3f\n",AREA_CIRC);
  
     AREA_TRAP=((A+B)*C)/2;
     printf("TRAPEZIO: %.3f\n",AREA_TRAP);

     AREA_QUAD=B*B;
     printf("QUADRADO: %.3f\n",AREA_QUAD);

     AREA_RETA=A*B;
     printf("RETANGULO: %.3f\n",AREA_RETA);
 
   return 0;
}
