# O(log n) faz com que o tempo de execução cresça de forma logarítmica
def bigLogN(n: int) -> int:
    cont = 0
    while n > 1:
        n //= 2
        cont += 1
    return cont

def main():
    print(bigLogN(5))
    print(bigLogN(16))

if __name__ == "__main__":
    main()
