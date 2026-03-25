#include <stdio.h>
void contagem_regressiva(int n);

int main() {
    contagem_regressiva(5);
    return 0;
}

void contagem_regressiva(int n) {
    printf("%d\n", n);

    contagem_regressiva(n - 1);
}
