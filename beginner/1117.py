def get_nota():
    nota = float(input())
    if nota < 0 or nota > 10:
        return -1
    return nota

qtd = 0
soma = 0

while qtd < 2:
    atual = get_nota()

    while atual == -1:
        print("nota invalida")
        atual = get_nota()

    soma += atual
    qtd += 1
    
print("media = %.2f" % (soma/qtd))
