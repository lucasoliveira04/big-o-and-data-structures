# o tempo de execução cresce de forma linear
def bigO(i: int) -> int:
    return i + i

def main():
  print(bigO(5))

if __name__ == "__main__":
    main()