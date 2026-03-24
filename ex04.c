#include <stdio.h>
int calcular_altitude_desejada(int altitude_atual, int variacao);
void forcar_altitude(int *altitude, int nova_altitude);

int main() {
    int altitude = 10000; // altitude inicial em pés
    int nova_altitude;

    printf("Altitude inicial: %d\n\n", altitude);

    // Uso da função pura
    nova_altitude = calcular_altitude_desejada(altitude, 500);
    printf("[Funcao] Nova altitude calculada: %d\n", nova_altitude);
    printf("Altitude apos a funcao: %d\n\n", altitude);

    // Uso do procedimento (altera a variável original)
    forcar_altitude(&altitude, nova_altitude);
    printf("Altitude apos procedimento: %d\n", altitude);

    return 0;
}

// Função pura: calcula nova altitude (não altera a original)
int calcular_altitude_desejada(int altitude_atual, int variacao) {
    return altitude_atual + variacao;
}

// Procedimento: altera diretamente a variável (efeito colateral)
void forcar_altitude(int *altitude, int nova_altitude) {
    *altitude = nova_altitude;

    printf("[Procedimento] Altitude forçada para: %d\n", *altitude);
}
