//Cédulas
//Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. 
//As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
//A seguir mostre o valor lido e a relação de notas necessárias.

//Entrada
//O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

//Saída
//Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. 
//Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.


#include <stdio.h>

int main() {
    int N, valor;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1}; // Matriz com as notas disponíveis 
    int quantidade[7] = {0};

    // Lê o valor de entrada
    scanf("%d", &N);

    // Verifica se o valor está dentro do intervalo permitido
    if (N <= 0 || N >= 1000000) {
        return 1;
    }

    valor = N; // Armazena o valor inicial

    // Calcula a quantidade de notas necessárias
    for (int i = 0; i < 7; i++) { //Percorre a matriz do primeiro ao último item
        quantidade[i] = valor / notas[i]; 
        valor %= notas[i];
    }

    // Imprime o valor lido
    printf("%d\n", N);

    // Imprime a quantidade de notas de cada tipo
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", quantidade[i], notas[i]);
    }

    return 0;
}