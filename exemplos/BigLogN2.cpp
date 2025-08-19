#include <iostream>

using namespace std;

// O tempo de execução cresce de forma quadrática. 
// O número de iterações é proporcional a n^2.
void bigLogN2(int n){
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j *= 2){
            if (i % 2 == 0 && j % 2 == 0){
                cout << i << " ==" << j << endl;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    bigLogN2(100);
    return 0;
}
