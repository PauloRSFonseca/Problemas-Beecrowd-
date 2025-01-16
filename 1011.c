//Esfera
#include <stdio.h>
 
int main() {
    double volume,raio,n=3.14159;
    scanf("%lf",&raio);
 
 volume=((4/3.0)*n)*(raio*raio*raio);
 printf("VOLUME = %.3f\n",volume);
    return 0;
}