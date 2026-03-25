#include <stdio.h>
void contagem_regressiva(int n);

int main() {
    contagem_regressiva(10);
    return 0;
}

void contagem_regressiva(int n) {
    if (n < 0) {
        return;
    }

    printf("%d\n", n);

    contagem_regressiva(n - 1);
}
/*
Sem um caso base, a função recursiva nunca interrompe suas chamadas,
causando crescimento ilimitado da pilha de execução até exceder seu limite de memória, resultando em um erro de stack overflow.
*/
