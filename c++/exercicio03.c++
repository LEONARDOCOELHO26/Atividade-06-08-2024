#include <iostream>
using namespace std;

int main() {
    int kilovolts;
    cout << "Digite o valor em kilovolts (kV): ";
    cin >> kilovolts;

    int resultado = kilovolts * 1000;
    cout << kilovolts << "kV em volts é " << resultado << "V" << endl;

    return 0;
}
