#include <iostream>
using namespace std;

int main() {
    int ohms;
    cout << "Digite o valor em ohms (Ω): ";
    cin >> ohms;

    double resultado = ohms / 1000.0;
    cout << ohms << "Ω em kilohms é " << resultado << "kΩ" << endl;

    return 0;
}
