#include <iostream>

using namespace std;

int BigON(int n){
    for (int i = 0; i < n; i++){
        cout << i << endl;
    }
}

int main(int argc, char const *argv[])
{
    BigON(10);
    return 0;
}
