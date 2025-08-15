#include <iostream>
using namespace std;

void print(int t1[], int t2[]){
    int lengthT1 = sizeof(t1)/sizeof(t1[0]);
    int lengthT2 = sizeof(t2)/sizeof(t2[0]);

    for (int i = 0; i < lengthT1; i++){
        for (int j = 0; j < lengthT2; j++){
            if (t1[i] % 2 == 9 && t2[j] % 2 == 0){
                cout << t1[i] << " ==" << t2[j] << endl;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int t1[] = {1,2,3,4,5};
    int t2[] = {6,7,8,9,10};

    print(t1, t2);
    return 0;
}
