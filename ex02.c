#include <stdio.h>
void alterar_por_valor(int saldo);
void alterar_por_referencia(int *saldo);
int main() {
    int saldo_bancario = 1000;

    printf("Saldo inicial: %d\n\n", saldo_bancario);

    // Tentativa de alterar por valor (falha em alterar o original)
    alterar_por_valor(saldo_bancario);
    printf("Saldo apos funcao por valor: %d\n\n", saldo_bancario);

    // Alteração por referência (funciona)
    alterar_por_referencia(&saldo_bancario);
    printf("Saldo apos funcao por referencia: %d\n", saldo_bancario);

    return 0;
}

// Função com passagem por valor (In Mode)
void alterar_por_valor(int saldo) {
    saldo = saldo + 1000;

    printf("[Dentro da funcao - valor] Saldo alterado: %d\n", saldo);
}

// Função com passagem por referência (Inout Mode)
void alterar_por_referencia(int *saldo) {
    *saldo = *saldo + 1000;

    printf("[Dentro da funcao - referencia] Saldo alterado: %d\n", *saldo);
}

/*

ANÁLISE DO CUSTO / COMPORTAMENTO

PASSAGEM POR VALOR (IN MODE)
Quando chamamos:
    alterar_por_valor(saldo_bancario);
O valor de saldo_bancario é COPIADO para o parâmetro "saldo", a função trabalha com essa cópia (variável local) no qual as alterações NÃO afetam a variável original
Exemplo:
    saldo_bancario = 1000
    saldo (cópia) = 1000
Dentro da função:
    saldo = 2000
Fora da função:
    saldo_bancario continua 1000

PASSAGEM POR REFERÊNCIA (INOUT MODE)
Quando chamamos:
    alterar_por_referencia(&saldo_bancario);
Passamos o ENDEREÇO de memória da variável, então a função acessa diretamente a variável original usando ponteiro (*)
Dentro da função:
    *saldo altera diretamente saldo_bancario

CONCLUSÃO:
A passagem por valor garante isolamento e proteção do dado original,
enquanto a passagem por referência permite a modificação direta da variável,
sendo útil quando se deseja alterar o estado fora da função.
*/
