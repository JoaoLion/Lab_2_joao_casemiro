#include <stdio.h>

int main() {
    float h1 = 160, v1 = 20, s1;
    float h2 = 170, v2 = 18, s2;
    float h3 = 150, v3 = 25, s3;

    s1 = h1 * v1;
    printf("Funcionario 1: Horas: %.2f Valor/hora: %.2f\n", h1, v1);
    printf("Salario: %.2f\n", s1);

    s2 = h2 * v2;
    printf("Funcionario 2: Horas: %.2f Valor/hora: %.2f\n", h2, v2);
    printf("Salario: %.2f\n", s2);

    s3 = h3 * v3;
    printf("Funcionario 3: Horas: %.2f Valor/hora: %.2f\n", h3, v3);
    printf("Salario: %.2f\n", s3);

    printf("Total folha: %.2f\n", s1 + s2 + s3);

    return 0;
}
