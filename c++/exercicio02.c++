#include <iostream>
using namespace std;

int main() {
    int miliamperes;
    cout << "Digite o valor em miliamperes (mA): ";
    cin >> miliamperes;

    double resultado = miliamperes / 1000.0;
    cout << miliamperes << "mA em Amperes é " << resultado << "A" << endl;

    return 0;
}
