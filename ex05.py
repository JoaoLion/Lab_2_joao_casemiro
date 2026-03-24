# Lista representando o estoque (preços dos produtos)
estoque = [100, 200, 300, 400]

def aplicar_desconto(lista, desconto):
    for i in range(len(lista)):
        lista[i] -= desconto  # altera diretamente a lista original

    print("[Dentro da funcao] Estoque com desconto:", lista)


print("Estoque original:", estoque)

# Aplicando desconto
aplicar_desconto(estoque, 50)

print("Estoque apos funcao:", estoque)

"""
ANÁLIS
CALL-BY-SHARING (PASSAGEM POR OBJETO):
Em Python, não existe exatamente passagem por valor ou por referência tradicional.
O que ocorre é o "call-by-sharing": A função recebe uma REFERÊNCIA ao objeto sem criar uma cópia da lista,ambas (main e função) apontam para o MESMO objeto na memória

MUTABILIDADE DAS LISTA
Listas em Python são mutáveis, ou seja, seus elementos podem ser alterados diretamente

No código, quando passamos: aplicar_desconto(estoque, 50). A função recebe uma referência para a lista original.
Dentro da função:
    lista[i] -= desconto
Isso modifica diretamente o conteúdo da lista original.
"""
