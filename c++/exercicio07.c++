#include <iostream>
using namespace std;

int main() {
    int milissegundos;
    cout << "Digite o valor em milissegundos (ms): ";
    cin >> milissegundos;

    double resultado = milissegundos / 1000.0;
    cout << milissegundos << "ms em segundos é " << resultado << "s" << endl;

    return 0;
}
