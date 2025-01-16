//Área
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