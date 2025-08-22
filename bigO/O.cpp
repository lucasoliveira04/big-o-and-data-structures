#include <iostream>

using namespace std;

int bigO(int n){
    for (int i = 0; i < n; i++) {
        cout << i << endl;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    bigO(5);
    return 0;
}
