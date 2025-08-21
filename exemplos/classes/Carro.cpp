#include <iostream>

using namespace std;

class Carro {
    private:
        string nome;
        string cor;

    public:
        Carro (string nome, string cor) {
            this->nome = nome;
            this->cor = cor;
        }

        string getNome() const {
            return nome;
        }

        string getCor() const {
            return cor;
        }
};