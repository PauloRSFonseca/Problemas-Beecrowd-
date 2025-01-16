//Salário
#include <stdio.h>
 
int main() {
 
  int n,hora_trabalhada;
  float valor_hora,salario;
  
  scanf("%d", &n);
  scanf("%d", &hora_trabalhada);
  scanf("%f", &valor_hora);
  salario=hora_trabalhada*valor_hora;
  printf("NUMBER = %d\n", n);
  printf("SALARY = U$ %.2f\n", salario);
 
    return 0;
}