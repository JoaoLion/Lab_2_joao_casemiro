#include <stdio.h>
float calcular_salario(float horas, float valor_hora);
void imprimir_funcionario(int id, float horas, float valor_hora, float salario);

int main() {
    float h1 = 160, v1 = 20, h2 = 170, v2 = 18, h3 = 150, v3 = 25;

    float s1 = calcular_salario(h1, v1);
    float s2 = calcular_salario(h2, v2);
    float s3 = calcular_salario(h3, v3);

    imprimir_funcionario(1, h1, v1, s1);
    imprimir_funcionario(2, h2, v2, s2);
    imprimir_funcionario(3, h3, v3, s3);

    printf("Total folha: %.2f\n", s1 + s2 + s3);

    return 0;
}

// Função pura (somente cálculo)
float calcular_salario(float horas, float valor_hora) {
    return horas * valor_hora;
}

// Procedimento (somente impressão)
void imprimir_funcionario(int id, float horas, float valor_hora, float salario) {
    printf("Funcionario %d\n", id);
    printf("Horas: %.2f | Valor/hora: %.2f\n", horas, valor_hora);
    printf("Salario: %.2f\n\n", salario);
}
