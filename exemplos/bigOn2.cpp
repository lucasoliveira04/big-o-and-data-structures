#include <iostream>

using namespace std;

// O tempo de execução cresce proporcionalmente ao tamanho da entrada.
// Dobrar a quantidade de elementos, o tempo aumenta quatro vezes.
void bigOn2(int n){
    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            if (i % 2 == 0 && j % 2 == 0){
                cout << i << " ==" << j << endl;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    bigOn2(5);
    return 0;
}
