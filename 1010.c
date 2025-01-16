//Cálculo Simples
#include <stdio.h>
int main(){
    int Cod_1, Cod_2, Prod_1, Prod_2;
    float Val_1, Val_2, Valor_Total;

    scanf("%d %d %f", &Cod_1, &Prod_1, &Val_1);
   
    scanf("%d %d %f", &Cod_2, &Prod_2, &Val_2);
    
    Valor_Total = ((Val_1 * Prod_1)+(Val_2 * Prod_2));
    printf("VALOR A PAGAR: R$ %.2f\n",  Valor_Total);

    return 0;
}