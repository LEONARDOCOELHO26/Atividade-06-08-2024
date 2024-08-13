#include <iostream>
using namespace std;

int main() {
    int nm;
    cout << "Digite o valor em nanômetros (nm): ";
    cin >> nm;

    double resultado = nm * 1e-9;
    cout << nm << "nm em metros é " << resultado << "m" << endl;

    return 0;
}
