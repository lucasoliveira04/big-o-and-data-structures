#include <iostream>

using namespace std;

int BigON2(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << i << " " << j << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    BigON2(10); 
    return 0;
}
