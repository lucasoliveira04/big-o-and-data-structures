
#include <iostream>
using namespace std;


int main(int argc, char* argv[]) {
    string texto;
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

   getline(cin, texto);

    for (int i = 0; i < texto.length(); i++) {
        for (int j = 0; j < 5; j++) {
            if (tolower(texto[i]) == vogais[j]) {
                cout << texto[i];
            }
        }
    }

    return 0;
}
