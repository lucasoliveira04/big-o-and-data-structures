#include <iostream>
#include <vector>
#include <array>
using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    int begin = *(v.begin());
    int end = *(v.end() - 1);

    cout << "\nFirst element: " << begin << endl;
    cout << "Last element: " << end << endl;

    for (int i = 0; i < v.size(); i++){
        if (i == 0){
            cout << "Position element: " << i << endl;
            cout << "Begin value: " << v[i] << endl;
        }

        if (i == v.size() - 1){
            cout << "Position element: " << i << endl;
            cout << "End value: " << v[i] << endl;
        }
    }

    return 0;
}
