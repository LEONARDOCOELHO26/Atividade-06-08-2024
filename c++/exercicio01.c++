#include <iostream>
using namespace std;

int main() {
    int milimetros;
    cout << "Digite o valor em milimetros (mm): ";
    cin >> milimetros;

    double resultado = milimetros / 1000.0;
    cout << milimetros << "mm em metros é " << resultado << "m" << endl;

    return 0;
}
