#include <iostream>

int main(int argc, char const *argv[])
{
    int* n1 = new int(10); 
    int* n2 = n1;

    int n3 = *n1 + *n2;

    std::cout << "Valor de n1: " << *n1 << std::endl;
    std::cout << "Valor de n2: " << *n2 << std::endl;
    std::cout << "Valor de n3: " << n3 << std::endl;

    std::cout << "Endereço de n1: " << n1 << std::endl;
    std::cout << "Endereço de n2: " << n2 << std::endl;

    return 0;
}
