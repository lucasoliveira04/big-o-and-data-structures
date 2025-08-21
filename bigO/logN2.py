def logN2(n: int) -> int:
    cont = 0
    while n > 1:
        n //= 2
        cont += 1
    return cont

def main():
    print(logN2(5))
    print(logN2(16))

if __name__ == "__main__":
    main()