#include <iostream>
using namespace std;

int main() {
    int GHz;
    cout << "Digite o valor em GHz: ";
    cin >> GHz;

    long long resultado = GHz * 1e9;
    cout << GHz << "GHz em hertz é " << resultado << "Hz" << endl;

    return 0;
}
