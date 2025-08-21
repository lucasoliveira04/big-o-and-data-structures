def input(list1: list, list2: list) -> None:
    for i in range(len(list1)):
        for j in range(len(list2)):
            if list1[i] % 2 == 0 and list2[j] % 2 == 0:
                print(list1[i], list2[j])


def main():
    input([1, 2, 3, 4], [4, 5, 6, 7])

if __name__ == "__main__":
    main()