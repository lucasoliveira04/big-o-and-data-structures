
#include <iostream>
using namespace std;

void aPegaVogais() {
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
}

int main(int argc, char* argv[]) {
    aPegaVogais();
    return 0;
}
