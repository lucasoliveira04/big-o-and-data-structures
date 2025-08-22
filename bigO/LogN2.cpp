#include <iostream>

using namespace std;

// LogN^2 é uma função que cresce de forma logarítmica ao quadrado
// O objetivo é reduzir o tamanho do problema pela metade a cada iteração
int bigLogN2(int n){
    int count = 0;
    while (n > 1){
        n /= 2;
        count++;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    cout << bigLogN2(16) << endl; // Saida: 4
    cout << bigLogN2(32) << endl; // Saida: 5
    return 0;
}
