#include <iostream>

using namespace std;

// O tempo de execução cresce de forma proporcional ao tamanho da entrada.
// Se você dobrar a quantidade de elementos, o tempo dobra aproximadamente.
void bigOn(int n){
    for (int i = 0; i < n; i++){
        cout << i << endl;
    }
}

int main(int argc, char const *argv[])
{
    bigOn(5);
    return 0;
}
