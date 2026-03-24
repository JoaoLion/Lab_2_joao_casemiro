#include <stdio.h>
int fib_repeticao(int n);
int fib_recursivo(int n);
int main(void) {
    int n = 40;

    printf("Fibonacci (%d) - Repeticao: %d\n", n, fib_iterativo(n));
    printf("Fibonacci (%d) - Recursivo: %d\n", n, fib_recursivo(n));

    return 0;
}
int fib_repeticao(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, i, temp;

    for (i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}
//ANÁLISE DO CUSTO COMPUTACIONAL
//Versão Repetição:
//Executa um único laço (for). Não há múltiplas chamadas de função.


int fib_recursivo(int n) {
    if (n <= 1)
        return n;

    return fib_recursivo(n - 1) + fib_recursivo(n - 2);
}

//ANÁLISE DO CUSTO COMPUTACIONAL
// Versão Recursiva Ingênua:
//Cada chamada de fib(n) gera duas novas chamadas: fib(n-1) + fib(n-2). Isso cria uma árvore de chamadas: valores como fib(3) e fib(2) são recalculados várias vezes.
//Consequências: Grande número de chamadas repetidas e crescimento exponencial do tempo de execução
