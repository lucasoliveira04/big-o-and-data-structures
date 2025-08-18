#include <iostream>

using namespace std;


// O tempo de execução cresce de forma proporcional ao tamanho da entrada.
// Se você dobrar a quantidade de elementos, o tempo dobra aproximadamente.
void bigOn(int n){
    for (int i = 0; i < n; i++){
        cout << i << endl;
    }
}

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

// O tempo de execução cresce de forma linear, mas não é proporcional ao tamanho da entrada.
int bigO(int n){
    return n + n;
}

// O tempo de execução cresce de forma logarítmica.
void logN(int n){
    for (int i = 1; i < n; i *= 2){
        cout << i << endl;
    }
}

int main(int argc, char const *argv[])
{   
    logN(100);
    return 0;
}

    