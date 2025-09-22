def fatorial(n: int) -> int:
    f = 1
    for i in range(2, n + 1):
        f *= i
    return f

while True:
    print("1) Quadrado\n2) Fatorial\n3) Sair")
    try:
        opcao = int(input("Escolha: "))
    except ValueError:
        print("Opcao invalida!\n"); continue

    if opcao == 1:
        x = int(input("Numero: "))
        print("Quadrado =", x * x)
    elif opcao == 2:
        n = int(input("Numero (n>=0): "))
        print("Fatorial =", fatorial(n))
    elif opcao == 3:
        print("Saindo...")
        break
    else:
        print("Opcao invalida!")
