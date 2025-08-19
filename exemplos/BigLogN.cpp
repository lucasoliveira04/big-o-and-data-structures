#include <iostream>

using namespace std;

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
