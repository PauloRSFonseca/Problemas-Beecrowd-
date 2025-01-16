//Salário com Bônus
#include <stdio.h>
 
int main() {
 
char nome;
double salario_fixo, vendas, salario_final;
scanf("%s",&nome);
scanf("%lf",&salario_fixo);
scanf("%lf",&vendas);

salario_final=(salario_fixo+(vendas*0.15));
printf("TOTAL = R$ %.2f\n", salario_final);

    return 0;
}