//Cálculo Simples
//Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. 
//Após, calcule e mostre o valor a ser pago.

//Entrada
//O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

//Saída
//A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.

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
