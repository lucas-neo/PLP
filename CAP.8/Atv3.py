def processa(nums):
    for n in nums:
        if n == 0:
            break                 # para imediatamente ao encontrar 0
        if n < 0:
            continue              # pula negativos
        if n % 2 == 0:
            return 2 * n          # retorna o dobro do primeiro par
    return None                    # se não achou par antes do 0

# Exemplos:
print(processa([1, -2, 3, 4, 5]))   # -> 8  (dobro do primeiro par: 4)
print(processa([1, 3, 5, 0, 2]))    # -> None (pararia no 0 antes de encontrar par)
