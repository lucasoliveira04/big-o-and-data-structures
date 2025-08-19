#include <iostream>

using namespace std;

// O tempo de execução cresce de forma linear, mas não é proporcional ao tamanho da entrada.
int bigO(int n){
    return n + n;
}

int main(int argc, char const *argv[])
{
    cout << bigO(5) << endl;
    return 0;
}