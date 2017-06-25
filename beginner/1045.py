while (True):
    nums = input().split()
    for i in range(0, len(nums)):
        nums[i] = float(nums[i])
        
    nums.sort()
    nums.reverse()

    a = float(nums[0])
    b = float(nums[1])
    c = float(nums[2])
    #print("a = " + str(a) + ", b = " + str(b) + ", c = " + str(c))
    mensagem = ""
    tipo = ""

    if a >= b + c:
        mensagem = "NAO FORMA TRIANGULO"

    elif a*a == b*b + c*c:
        mensagem = "TRIANGULO RETANGULO"

    elif a*a > b*b + c*c:
        mensagem = "TRIANGULO OBTUSANGULO"

    elif a*a < b*b + c*c:
        mensagem = "TRIANGULO ACUTANGULO"


    if mensagem != "NAO FORMA TRIANGULO":
        if (a == b and b == c):
            tipo = "TRIANGULO EQUILATERO"

        elif ((a == b and a != c) or (a == c and a != b) or (b == c and a != b)):
            tipo = "TRIANGULO ISOSCELES"

    print(mensagem)
    if (tipo != ""):
        print(tipo)
