#include <iostream>
#include "../classes/Carro.cpp"

int main(int argc, char const *argv[])
{
    Carro* corsa = new Carro("Corsa", "Prata");

    cout << "Nome: " << corsa->getNome() << endl;
    cout << "Cor: " << corsa->getCor() << endl;

    delete corsa;
    return 0;
}
