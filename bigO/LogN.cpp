#include <iostream>

using namespace std;

// O(log n) faz com que o tempo de execução cresça de forma logarítmica
// O objetivo é reduzir o tamanho do problema pela metade a cada iteração
int bigLogN(int n){
    int count = 0;
    while (n > 1){
        n /= 2; 
        count++;
    }

    return count; 
}

int main(int argc, char const *argv[])
{
    cout << bigLogN(16) << endl; // Saida: 4
    cout << bigLogN(32) << endl; // Saida: 5
    return 0;
}